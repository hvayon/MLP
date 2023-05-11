#include "MlpMatrixModel.h"

namespace s21 {
void s21::MlpMatrixModel::setSizes(std::vector<int> s) {
  sizes.clear();
  sizes = s;
  L = sizes.size();
}

/**
 * @brief Приведение весов и нейронов смещения к рандомным значениям
 *
 */
void s21::MlpMatrixModel::Init() {
  biases.clear();
  deltaBiases.clear();
  weights.clear();
  deltaWeights.clear();
  for (int i = 1; i < L; i++) {
    s21::SimpleMatrix<float> biasesMatrix(sizes[i], 1);
    s21::SimpleMatrix<float> deltaBiasesMatrix(sizes[i], 1);
    for (int j = 0; j < sizes[i]; j++) {
      float random_value = (float)(rand() + 50) / (RAND_MAX)*6 - 3;
      biasesMatrix(j, 0) = random_value * 0.1;
      deltaBiasesMatrix(j, 0) = 0;
    }
    biases.push_back(biasesMatrix);
    deltaBiases.push_back(deltaBiasesMatrix);
  }
  for (int i = 1; i < L; i++) {
    s21::SimpleMatrix<float> weightsMatrix(sizes[i - 1], sizes[i]);
    s21::SimpleMatrix<float> deltaWeightsMatrix(sizes[i - 1], sizes[i]);
    for (int j = 0; j < sizes[i - 1]; j++) {
      for (int k = 0; k < sizes[i]; k++) {
        float random_value = (float)(rand() + 50) / (RAND_MAX)*6 - 3;
        weightsMatrix(j, k) = random_value * 0.1;
        deltaWeightsMatrix(j, k) = 0;
      }
    }
    weights.push_back(weightsMatrix);
    deltaWeights.push_back(deltaWeightsMatrix);
  }
}

/**
 * @brief Сохраняет конфигурацию текущей модели, включая размеры,
 * высоту и смещения в указанный файл
 *
 * @param dir
 */
void s21::MlpMatrixModel::saveConfig(const std::string dir) {
  std::fstream fout;
  fout.open(dir, std::ios::out);
  fout << sizes.size() << " ";
  for (auto size : sizes) {
    fout << size << " ";
  }
  fout << '\n';
  for (auto weight : weights) {
    for (int i = 0; i < weight.getRows(); ++i) {
      for (int j = 0; j < weight.getCols(); ++j) {
        fout << weight(i, j) << " ";
      }
    }
  }
  fout << '\n';
  for (auto bias : biases) {
    for (int i = 0; i < bias.getRows(); ++i) {
      fout << bias(i, 0) << " ";
    }
  }
}

void s21::MlpMatrixModel::loadConfig(const std::string &source) {
  std::fstream fin;
  fin.open(source, std::ios::in);
  fin >> L;
  sizes.clear();
  for (int i = 0; i < L; ++i) {
    int size;
    fin >> size;
    sizes.push_back(size);
  }
  Init();
  for (auto &weight : weights) {
    for (int i = 0; i < weight.getRows(); ++i) {
      for (int j = 0; j < weight.getCols(); ++j) {
        fin >> weight(i, j);
      }
    }
  }
  for (auto &bias : biases) {
    for (int i = 0; i < bias.getRows(); ++i) {
      fin >> bias(i, 0);
    }
  }
}

void s21::MlpMatrixModel::initTrainingData() {
  trainingData.clear();
  std::fstream fin;
  fin.open(trainingSource, std::ios::in);
  s21::ImageEmnist image;
  while (image.load(fin)) {
    trainingData.push_back(image);
  }
}
void s21::MlpMatrixModel::initTestingData() {
  testingData.clear();
  std::fstream fin;
  fin.open(testingSource, std::ios::in);
  s21::ImageEmnist image;
  while (image.load(fin)) {
    testingData.push_back(image);
  }
}
void s21::MlpMatrixModel::shuffleTrainingData() {
  auto rng = std::default_random_engine{};
  std::shuffle(std::begin(trainingData), std::end(trainingData), rng);
}
void s21::MlpMatrixModel::shuffleTestingData() {
  auto rng = std::default_random_engine{};
  std::shuffle(std::begin(testingData), std::end(testingData), rng);
}

/**
 * @brief Тренирует текущую модель на 1 эпоху.
 * Если значение evaluate evaluateModelAfterEachEpoch = true,
 * возвращается строка, содержащая данные о производительности модели после этой
 * эпохи.
 *
 * @param evaluateModelAfterEachEpoch
 * @param testingRatio
 * @param epoch
 * @param mini_batch_size
 * @param learningConstant
 * @return std::string
 */
std::string s21::MlpMatrixModel::trainModelForOneEpoch(
    bool evaluateModelAfterEachEpoch, float testingRatio, int epoch,
    int mini_batch_size, float learningConstant) {
  time_t now = time(0);
  this->shuffleTrainingData();
  for (std::size_t i = mini_batch_size; i < trainingData.size();
       i = i + mini_batch_size) {
    updateMiniBatch(i - mini_batch_size, i, learningConstant);
  }
  this->shuffleTestingData();
  if (evaluateModelAfterEachEpoch) {
    evaluate(testingRatio);
    std::ostringstream ss;
    ss << "Всего угадано: " << metrics.getTotalGuessedAmount() << '\\'
       << metrics.getTotalSampleSize() << '\n';
    ss << "Accuracy: " << metrics.getAverageAccuracy()
       << " , precision: " << metrics.getAveragePrecision()
       << " , recall: " << metrics.getAverageRecall()
       << " , f1-measure: " << metrics.getAverageF1Measure() << '\n';
    ss << "Общее время для эпохи #" << epoch << ": " << time(0) - now << '\n';
    return std::string(ss.str());
  } else {
    return "";
  }
}

/**
 * @brief Выполняет обратное распространение ошибки для всего мини пакета
 * обучающих данных Обновляет веса и смещения после этого
 *
 * @param batch_beginning
 * @param batch_ending
 * @param constant
 */
void s21::MlpMatrixModel::updateMiniBatch(int batch_beginning, int batch_ending,
                                          float constant) {
  auto nabla_b = deltaBiases;
  auto nabla_w = deltaWeights;
  for (int i = batch_beginning; i < batch_ending; ++i) {
    auto delta_nabla_bw = backpropagate(trainingData[i]);
    auto &delta_nabla_b = delta_nabla_bw.first;
    auto &delta_nabla_w = delta_nabla_bw.second;
    for (std::size_t k = 0; k < nabla_b.size(); k++) {
      nabla_b[k] = nabla_b[k] + delta_nabla_b[k];
    }

    for (std::size_t k = 0; k < nabla_w.size(); k++) {
      nabla_w[k] = nabla_w[k] + delta_nabla_w[k];
    }
  }
  for (std::size_t k = 0; k < nabla_w.size(); k++) {
    for (int n = 0; n < nabla_w[k].getDataSize(); ++n) {
      nabla_w[k].setElem(n, nabla_w[k].getElem(n) * constant /
                                (batch_ending - batch_beginning));
    }
  }
  for (std::size_t k = 0; k < nabla_b.size(); k++) {
    for (int n = 0; n < nabla_b[k].getDataSize(); ++n) {
      nabla_b[k].setElem(n, nabla_b[k].getElem(n) * constant /
                                (batch_ending - batch_beginning));
    }
  }
  for (std::size_t k = 0; k < nabla_w.size(); k++) {
    weights[k] = weights[k] + nabla_w[k] * (-1);
  }
  for (std::size_t k = 0; k < nabla_b.size(); k++) {
    biases[k] = biases[k] + nabla_b[k] * (-1);
  }
}

/**
 * @brief Выполняет 1 итерацию обратного распространения ошибку.
 * Возвращает рассчитанные веса и нейроны смещения
 *
 * @param image
 * @return std::pair<std::vector<s21::SimpleMatrix<float>>,
 * std::vector<s21::SimpleMatrix<float>>>
 */
std::pair<std::vector<s21::SimpleMatrix<float>>,
          std::vector<s21::SimpleMatrix<float>>>
s21::MlpMatrixModel::backpropagate(const s21::ImageEmnist &image) {
  /* Векторы db и dw будут содержать дельта-смещения и дельта-веса
   * соответственно */
  std::vector<s21::SimpleMatrix<float>> db(L - 1, s21::SimpleMatrix<float>());
  std::vector<s21::SimpleMatrix<float>> dw(L - 1, s21::SimpleMatrix<float>());

  /* инициализируем первый слой активации */
  s21::SimpleMatrix<float> activation(28 * 28, 1);
  for (int i = 0; i < 28 * 28; i++) {
    activation.setElem(i, (image.getImg().getElem(i) - 128) / 100);
  }

  /* заполнение слоев активации */
  std::vector<s21::SimpleMatrix<float>> activationLayers{activation};
  std::vector<s21::SimpleMatrix<float>> layerInputs;
  for (int i = 0; i < L - 1; i++) {
    s21::SimpleMatrix<float> layerInput =
        activation.modifiedProduct(weights[i]) + biases[i];
    layerInputs.push_back(layerInput);
    activation = sigmoid(layerInput);
    activationLayers.push_back(activation);
  }

  s21::SimpleMatrix<float> output_desired(sizes[L - 1], 1);
  output_desired((image.getValue() - 1) % sizes[L - 1], 0) = 1;
  auto costDvt = costDerivative(activationLayers[activationLayers.size() - 1],
                                output_desired);
  auto sigPrime = sigmoidPrime(layerInputs[layerInputs.size() - 1]);

  /* вычисление величины ошибки */
  s21::SimpleMatrix<float> delta(sizes[L - 1], 1);
  for (int i = 0; i < sizes[L - 1]; i++) {
    delta.setElem(i, costDvt.getElem(i) * sigPrime.getElem(i));
  }

  db[db.size() - 1] = delta;

  s21::SimpleMatrix<float> d(
      activationLayers[activationLayers.size() - 2].getRows(), delta.getRows());
  for (int i = 0; i < activationLayers[activationLayers.size() - 2].getRows();
       ++i) {
    for (int j = 0; j < delta.getRows(); ++j) {
      d(i, j) =
          activationLayers[activationLayers.size() - 2](i, 0) * delta(j, 0);
    }
  }

  /* обратный проход */
  dw[dw.size() - 1] = d;
  for (int i = 2; i < L; ++i) {
    s21::SimpleMatrix<float> sp =
        sigmoidPrime(layerInputs[layerInputs.size() - i]);
    delta = delta.modifiedProductRC(weights[weights.size() - i + 1]);
    for (int j = 0; j < sp.getDataSize(); j++) {
      delta.setElem(j, delta.getElem(j) * sp.getElem(j));
    }
    db[db.size() - i] = delta;
    s21::SimpleMatrix<float> d(
        activationLayers[activationLayers.size() - i - 1].getRows(),
        delta.getRows());
    for (int k = 0;
         k < activationLayers[activationLayers.size() - i - 1].getRows(); ++k) {
      for (int j = 0; j < delta.getRows(); ++j) {
        d(k, j) = activationLayers[activationLayers.size() - i - 1](k, 0) *
                  delta(j, 0);
      }
    }
    dw[dw.size() - i] = d;
  }
  return std::pair<std::vector<s21::SimpleMatrix<float>>,
                   std::vector<s21::SimpleMatrix<float>>>(db, dw);
}

/**
 * @brief Выполняет 1 итерацию прямого распространения
 *
 * @param image
 * @return s21::SimpleMatrix<float>
 */
s21::SimpleMatrix<float> s21::MlpMatrixModel::feedforward(
    const s21::ImageEmnist &image) {
  s21::SimpleMatrix<float> a(28 * 28, 1);
  for (int i = 0; i < 28 * 28; i++) {
    a.setElem(i, (image.getImg().getElem(i) - 128) / 100);
  }
  for (std::size_t i = 0; i < biases.size(); i++) {
    a = sigmoid((a.transpose() * weights[i]).transpose() + biases[i]);
  }
  return a;
}

/**
 * @brief Возвращает матрицу производных сигмойдной функции
 * примененную к каждому числу
 * во входной матрице m
 *
 * @param m
 * @return s21::SimpleMatrix<float>
 */
s21::SimpleMatrix<float> s21::MlpMatrixModel::sigmoidPrime(
    const s21::SimpleMatrix<float> &m) {
  s21::SimpleMatrix<float> result(m.getRows(), m.getCols());
  for (int i = 0; i < m.getRows(); i++) {
    for (int j = 0; j < m.getCols(); j++) {
      result(i, j) =
          (1 / (1 + exp(-1 * m(i, j)))) * (1 - 1 / (1 + exp(-1 * m(i, j))));
    }
  }
  return result;
}

char s21::MlpMatrixModel::classifyImage(const std::vector<float> &image) {
  s21::ImageEmnist inputToModel;
  for (int i = 0; i < 28 * 28; i++) {
    inputToModel.setImg(i, 0, (int)image[i]);
    inputToModel.setImg(0, 0, 3);
  }
  auto a = feedforward(inputToModel);
  char guessed_char =
      std::distance(a.getDataBegin(),
                    std::max_element(a.getDataBegin(), a.getDataEnd())) +
      65;
  return guessed_char;
}

/**
 * @brief Оценивает производительность модели на основе части тестовых данных.
 * Пишет результаты, которые преобразуются в показатели структуры.
 * Размер фракции задается параметром ratio.
 *
 * @param ratio
 */
void s21::MlpMatrixModel::evaluate(float ratio) {
  metrics.clear();
  this->shuffleTestingData();
  metrics.setTotalSampleSize(testingData.size() * ratio);
  float false_positives[CLASSIFICATION_CATEGORIES_AMOUNT];
  float false_negatives[CLASSIFICATION_CATEGORIES_AMOUNT];
  float true_positives[CLASSIFICATION_CATEGORIES_AMOUNT];
  float true_negatives[CLASSIFICATION_CATEGORIES_AMOUNT];
  for (int j = 0; j < CLASSIFICATION_CATEGORIES_AMOUNT; ++j) {
    true_negatives[j] = metrics.getTotalSampleSize();
    true_positives[j] = 0;
    false_positives[j] = 0;
    false_negatives[j] = 0;
  }
  for (int i = 0; i < testingData.size() * ratio; i++) {
    s21::SimpleMatrix<float> a(28 * 28, 1);
    a = feedforward(testingData[i]);
    int guessed_category = std::distance(
        a.getDataBegin(), std::max_element(a.getDataBegin(), a.getDataEnd()));
    int true_category = testingData[i].getValue() - 1;
    if (guessed_category == true_category) {
      metrics.setTotalGuessedAmount(metrics.getTotalGuessedAmount() + 1);
      true_positives[guessed_category]++;
      true_negatives[guessed_category]--;
    } else {
      false_positives[guessed_category]++;
      true_negatives[guessed_category]--;
      false_negatives[true_category]++;
      true_negatives[true_category]--;
    }
  }
  int totalValidData = CLASSIFICATION_CATEGORIES_AMOUNT;
  for (int i = 0; i < CLASSIFICATION_CATEGORIES_AMOUNT; ++i) {
    metrics.setPrecisionElem(
        i, true_positives[i] / (true_positives[i] + false_positives[i]));
    metrics.setAccuracyElem(i, (true_positives[i] + true_negatives[i]) /
                                   (testingData.size() * ratio));
    metrics.setRecallElem(
        i, true_positives[i] / (true_positives[i] + false_negatives[i]));
    metrics.setF1MeasureElem(i, 2 * true_positives[i] /
                                    (2 * true_positives[i] +
                                     false_positives[i] + false_negatives[i]));

    if (!std::isnan(metrics.getRecallElem(i)) &&
        !std::isnan(metrics.getPrecisionElem(i)) &&
        !std::isnan(metrics.getF1MeasureElem(i))) {
      metrics.setAverageAccuracy(metrics.getAverageAccuracy() +
                                 metrics.getAccuracyElem(i));
      metrics.setAveragePrecision(metrics.getAveragePrecision() +
                                  metrics.getPrecisionElem(i));
      metrics.setAverageRecall(metrics.getAverageRecall() +
                               metrics.getRecallElem(i));
      metrics.setAverageF1Measure(metrics.getAverageF1Measure() +
                                  metrics.getF1MeasureElem(i));
    } else {
      totalValidData--;
    }
  }
  metrics.setAveragePrecision(metrics.getAveragePrecision() / totalValidData);
  metrics.setAverageAccuracy(metrics.getAverageAccuracy() / totalValidData);
  metrics.setAverageF1Measure(metrics.getAverageF1Measure() / totalValidData);
  metrics.setAverageRecall(metrics.getAverageRecall() / totalValidData);
}

s21::Metrics s21::MlpMatrixModel::getMetrics() {
  metrics.setSizes(sizes);
  metrics.setNumberOfLayers(L);

  return metrics;
}

s21::SimpleMatrix<float> s21::MlpMatrixModel::costDerivative(
    const s21::SimpleMatrix<float> &output_activation,
    const s21::SimpleMatrix<float> &output_desired) {
  s21::SimpleMatrix<float> result(output_activation.getRows(),
                                  output_desired.getCols());
  result = output_activation + (output_desired * -1);
  return result;
}

s21::SimpleMatrix<float> s21::MlpMatrixModel::sigmoid(
    const s21::SimpleMatrix<float> &m) {
  s21::SimpleMatrix<float> result(m.getRows(), m.getCols());
  for (int i = 0; i < m.getRows(); i++) {
    for (int j = 0; j < m.getCols(); j++) {
      result(i, j) = 1 / (1 + exp(-1 * m(i, j)));
    }
  }
  return result;
}
}  // namespace s21