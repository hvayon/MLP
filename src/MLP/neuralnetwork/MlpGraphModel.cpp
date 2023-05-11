#include "MlpGraphModel.h"

namespace s21 {
void s21::MlpGraphModel::setSizes(std::vector<int> s) {
  sizes.clear();
  sizes = s;
  L = sizes.size();
}

void s21::MlpGraphModel::initSizes(std::initializer_list<int> args) {
  sizes.clear();
  for (auto i : args) {
    sizes.push_back(i);
  }
  L = sizes.size();
}

/**
 * @brief Установка дефолтных значений для нейронов активации
 *
 */
void s21::MlpGraphModel::setDefaultValuesToNeurons() {
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < sizes[i]; j++) {
      neurons[i][j].activation = 0;
      neurons[i][j].errTerm = 0;
    }
  }
}

/**
 * @brief Инициализирует все веса и смещения текущей модели случайными
 * значениями
 *
 */
void s21::MlpGraphModel::Init() {
  neurons.clear();
  for (auto size : sizes) {
    vector<Neuron> layer(size);
    neurons.push_back(layer);
  }
  for (auto i = 0; i < L; i++) {
    for (auto j = 0; j < sizes[i]; j++) {
      if (i != 0) {
        for (int k = 0; k < sizes[i - 1]; k++) {
          neurons[i][j].prevLayer.push_back(&neurons[i - 1][k]);
        }
        neurons[i][j].bias = (float)((rand() % 50)) * 0.06 / (sizes[i] + 15);
      }
      if (i != L - 1) {
        for (int k = 0; k < sizes[i + 1]; k++) {
          neurons[i][j].nextLayer.push_back(&neurons[i + 1][k]);
          double random_val = (double)((rand() % 50)) * 0.06 / (sizes[i] + 15);
          neurons[i][j].weights.push_back(random_val * 0.1);
          neurons[i][j].deltaWeights.push_back(0);
        }
      }
    }
  }
}

/**
 * @brief Загружает конфигурацию модели, включая размеры,
 * веса и отклонения из указанного файла
 *
 * @param source
 */
void s21::MlpGraphModel::loadConfig(const std::string &source) {
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

  for (std::size_t l = 0; l < neurons.size() - 1; l++) {
    for (auto &neuron : neurons[l]) {
      for (std::size_t i = 0; i < neuron.weights.size(); i++) {
        fin >> neuron.weights[i];
      }
    }
  }

  for (std::size_t l = 1; l < neurons.size(); l++) {
    for (auto &neuron : neurons[l]) {
      fin >> neuron.bias;
    }
  }
}

/**
 * @brief Сохраняет конфигурацию текущей модели, включая размеры,
 * высоту и смещения в указанный файл
 *
 * @param dir
 */
void s21::MlpGraphModel::saveConfig(const std::string dir) {
  std::fstream fout;
  fout.open(dir, std::ios::out);
  fout << sizes.size() << " ";
  for (auto size : sizes) {
    fout << size << " ";
  }
  fout << '\n';
  for (std::size_t l = 0; l < neurons.size() - 1; l++) {
    for (auto &neuron : neurons[l]) {
      for (std::size_t i = 0; i < neuron.weights.size(); i++) {
        fout << neuron.weights[i] << ' ';
      }
    }
  }

  for (std::size_t l = 1; l < neurons.size(); l++) {
    for (auto &neuron : neurons[l]) {
      fout << neuron.bias << ' ';
    }
  }
}

void s21::MlpGraphModel::initTrainingData() {
  trainingData.clear();
  std::fstream fin;
  fin.open(trainingSource, std::ios::in);
  s21::ImageEmnist image;
  while (image.load(fin)) {
    trainingData.push_back(image);
  }
}

/**
 * @brief Загружает данные тестирования из каталога, указанного в частном поле
 * testingData
 *
 */
void s21::MlpGraphModel::initTestingData() {
  testingData.clear();
  std::fstream fin;
  fin.open(testingSource, std::ios::in);
  s21::ImageEmnist image;
  while (image.load(fin)) {
    testingData.push_back(image);
  }
}

/**
 * @brief Случайным образом перетасовывает обучающие данные
 *
 */
void s21::MlpGraphModel::shuffleTrainingData() {
  auto rng = std::default_random_engine{};
  std::shuffle(std::begin(trainingData), std::end(trainingData), rng);
}

/**
 * @brief Случайным образом перетасовывает тестовые данные
 *
 */
void s21::MlpGraphModel::shuffleTestingData() {
  auto rng = std::default_random_engine{};
  std::shuffle(std::begin(testingData), std::end(testingData), rng);
}

/**
 * @brief Тренирует текущую модель на 1 эпоху.
 * Если значение evaluateModelAfterEachEpoch равно true, возвращается строка,
 * содержащая данные о производительности модели после этой эпохи.
 *
 * @param evaluateModelAfterEachEpoch
 * @param testingRatio
 * @param epoch
 * @param mini_batch_size
 * @param learningConstant
 * @return std::string
 */
std::string s21::MlpGraphModel::trainModelForOneEpoch(
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
 * @brief Выполняет обратное распространение для всего пакета обучающих данных
 * Обновляет веса и нейроны смещения после этого
 *
 * @param batch_beginning
 * @param batch_ending
 * @param learningConstant
 */
void s21::MlpGraphModel::updateMiniBatch(int batch_beginning, int batch_ending,
                                         float learningConstant) {
  for (int i = batch_beginning; i < batch_ending; ++i) {
    backpropagate(trainingData[i]);
  }
  updateWeightsAndBiases(learningConstant / (batch_ending - batch_beginning));
}

void s21::MlpGraphModel::updateWeightsAndBiases(float constant) {
  for (int i = 0; i < L - 1; ++i) {
    for (int j = 0; j < sizes[i]; ++j) {
      for (int k = 0; k < sizes[i + 1]; ++k) {
        neurons[i][j].weights[k] -= neurons[i][j].deltaWeights[k] * constant;
        neurons[i][j].deltaWeights[k] = 0;
      }
    }
  }
  for (int i = 1; i < L; ++i) {
    for (int j = 0; j < sizes[i]; ++j) {
      neurons[i][j].bias -= neurons[i][j].deltaBias * constant;
      neurons[i][j].deltaBias = 0;
    }
  }
}

/**
 * @brief Метод выполняет 1 итерацию обратного распространения ошибки.
 * Обновляет веса и нейроны смещения на основе результатов
 *
 * @param image
 */
void s21::MlpGraphModel::backpropagate(const s21::ImageEmnist &image) {
  feedforward(image);

  /* обратное распространение */
  s21::SimpleMatrix<float> output_desired(sizes[L - 1], 1);
  output_desired((image.getValue() - 1) % sizes[L - 1], 0) = 1;

  for (int i = 0; i < sizes[L - 1]; ++i) {
    neurons[L - 1][i].errTerm =
        (neurons[L - 1][i].activation) * (1 - neurons[L - 1][i].activation) *
        (neurons[L - 1][i].activation - output_desired(i, 0));
  }

  for (int i = L - 1; i >= 1; --i) {
    for (int j = 0; j < sizes[i]; j++) {
      for (int k = 0; k < sizes[i - 1]; k++) {
        (*neurons[i][j].prevLayer[k]).errTerm +=
            neurons[i][j].errTerm * (*neurons[i][j].prevLayer[k]).weights[j] *
            (*neurons[i][j].prevLayer[k]).activation *
            (1 - (*neurons[i][j].prevLayer[k]).activation);
      }
    }
  }
  /* обновляем матрицу весов */
  for (int i = 0; i < L - 1; ++i) {
    for (int j = 0; j < sizes[i]; ++j) {
      for (int k = 0; k < sizes[i + 1]; ++k) {
        neurons[i][j].deltaWeights[k] +=
            neurons[i][j].activation * (*neurons[i][j].nextLayer[k]).errTerm;
      }
    }
  }
  for (int i = 1; i < L; ++i) {
    for (int j = 0; j < sizes[i]; ++j) {
      neurons[i][j].deltaBias += neurons[i][j].errTerm;
    }
  }
}

/**
 * @brief Выполняет 1 итерацию прямого распространения
 *
 * @param image
 * @return s21::SimpleMatrix<float>
 */
s21::SimpleMatrix<float> s21::MlpGraphModel::feedforward(
    const s21::ImageEmnist &image) {
  setDefaultValuesToNeurons();
  /* инициализирует первый слой активации */
  for (int i = 0; i < 28 * 28; i++) {
    neurons[0][i].activation = image.getImg().getElem(i);
    neurons[0][i].activation = neurons[0][i].activation - 128;
    neurons[0][i].activation /= 100;
  }

  /* прямое распространение */
  for (int i = 0; i < L - 1; ++i) {
    for (int j = 0; j < sizes[i]; j++) {
      if (i != 0) {
        neurons[i][j].activation =
            sigmoid(neurons[i][j].activation + neurons[i][j].bias);
      }
      for (int k = 0; k < sizes[i + 1]; k++) {
        (*neurons[i][j].nextLayer[k]).activation +=
            neurons[i][j].activation * neurons[i][j].weights[k];
      }
    }
  }
  for (int i = 0; i < sizes[L - 1]; ++i) {
    neurons[L - 1][i].activation =
        sigmoid(neurons[L - 1][i].activation + neurons[L - 1][i].bias);
  }
  s21::SimpleMatrix<float> ret(26, 1);
  for (int i = 0; i < 26; i++) {
    ret(i, 0) = neurons[L - 1][i].activation;
  }
  return ret;
}

/**
 * @brief Оценивает производительность модели на основе части тестовых данных.
 * Записывает результаты в структуру метрик.
 * Размер фракции задается параметром ratio.
 *
 * @param ratio
 */
void s21::MlpGraphModel::evaluate(float ratio) {
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
    s21::SimpleMatrix<float> a = feedforward(testingData[i]);
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

s21::Metrics s21::MlpGraphModel::getMetrics() {
  metrics.setSizes(sizes);
  metrics.setNumberOfLayers(L);
  return metrics;
}

char s21::MlpGraphModel::classifyImage(const std::vector<float> &image) {
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
}  // namespace s21