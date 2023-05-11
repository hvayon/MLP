#ifndef IMAGEEMNIST_H
#define IMAGEEMNIST_H
#define EMNIST_SIZE 784
#include <fstream>

#include "simple_matrix.h"

/**
 * @brief Эта структура предназначена для загрузки
 * и хранения 1 изображения из базы данных Emnist (28 x 28 пикселей) из
 * csv-файла
 *
 */
namespace s21 {

class ImageEmnist {
 public:
  ImageEmnist()
      : image(s21::SimpleMatrix<unsigned char>(EMNIST_SIZE, 1)), value(-1) {}

  s21::SimpleMatrix<unsigned char> getImg() const { return image; }
  void setImg(int i, int j, int val) { image(i, j) = val; }
  int getValue() const { return value; }

  bool load(std::fstream &my_file);

 private:
  s21::SimpleMatrix<unsigned char> image;
  int value;
};

}  // namespace s21
#endif
