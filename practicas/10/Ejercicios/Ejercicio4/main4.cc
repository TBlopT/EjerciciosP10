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
#include <vector>
#include <cstdlib>
#include "operation4.h"
using namespace std;

/*Propósito del programa*/

void porpouse(){
  cout << "Este programa realiza la sumatoria de elementos de un conjunto" << endl;
}
bool check(const int argc, char *argv[], const int kCorrectNumber){
if (argc!=kCorrectNumber){
  cout<<"Número de parámetros incorrecto"<<endl;
  return false;
}
return true;
}
int main (int argc, char* argv[]){
  if (!check(argc,argv,4)){
    return 345;

  }
  double number_one = atof(argv[1]);
  double number_two = atof(argv[2]);
  double number_three = atof(argv[3]);
  std::vector <double>numbers_vector;
  numbers_vector.push_back (number_one);
  numbers_vector.push_back (number_two);
  numbers_vector.push_back (number_three);
  porpouse();
  double max,min,average;
  operation(numbers_vector,max,min,average);
  std::cout << "Max: " << max << std::endl;
  std::cout << "Min: " << min << std::endl;
  std::cout << "Average: " << average << std::endl;
}
