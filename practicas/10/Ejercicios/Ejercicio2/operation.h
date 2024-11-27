/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 23 2024
 * @brief 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

#include <iostream>
#include <random>
#include <vector>
//Número aleatorio de lower hasta upper//
std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::vector<double>Random_numbers;
  int loop_number{size};
    std::uniform_real_distribution <> distrib(lower,upper);
    double Random_number;
    while (loop_number>0){
      Random_number = distrib(gen);
      Random_numbers.push_back(Random_number);
      loop_number--;
  }
  return Random_numbers;
}
