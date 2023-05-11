#include "trainworker.h"
TrainWorker::TrainWorker(s21::Controller *c, QObject *parent)
    : QObject{parent} {
  controller = c;
  endNowRequested = false;
}

TrainWorker::~TrainWorker() {}

void TrainWorker::run() {
  emit updateStatus("Начался процесс обучения...");
  emit updateStatus(
      "Инициализация модели и загрузка источников обучения и тестирования...");
  controller->initModel(isMatrixModel);
  if (!needEndNow()) emit updateStatus("Модель успешно инициализирована.");
  for (int i = 0; i < epochesAmount; i++) {
    if (!needEndNow()) {
      std::string message;
      emit updateStatus("Обучение эпохе #" + std::to_string(i + 1) + "...");
      message = controller->trainModelForOneEpoch(
          isMatrixModel, evaluateModelAfterEachEpoch, 1, i + 1, miniBatchSize,
          learningConstant);
      emit updateStatus("Эпоха закончилась.");
      emit updateStatus(message);
    }
  }
  emit finished();
}

void TrainWorker::setParameters(bool isMatrixM, bool evalModel, float tRatio,
                                int eAmount, int mBatchSize, float lConstant) {
  evaluateModelAfterEachEpoch = evalModel;
  isMatrixModel = isMatrixM;
  testingRatio = tRatio;
  epochesAmount = eAmount;
  miniBatchSize = mBatchSize;
  learningConstant = lConstant;
}

void TrainWorker::delay(int millisecondsWait) {
  QEventLoop loop;
  QTimer t;
  t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
  t.start(millisecondsWait);
  loop.exec();
}

bool TrainWorker::needEndNow() {
  QMutexLocker locker(&m);
  return endNowRequested;
}

void TrainWorker::requestEndNow() {
  QMutexLocker locker(&m);
  endNowRequested = true;
}
