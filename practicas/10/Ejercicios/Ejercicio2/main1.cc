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
#include <string>
#include <unistd.h>
#include "operation.h"
#include "output.h"

void porpouse(){ 
  std::cout << "Este programa introduce números aleatorios entre dos números" << std::flush;  
  sleep(2);
}
void inecesary(){
  system ("clear");
  sleep (1);
  std::cout << "Creando números aleatorios " <<std::flush;
  for (int i{0};i<3;i++){
   sleep (1);
   std::cout << "." << std::flush;
  }
 std::cout << " " << std::endl;
}
bool check(const int argc, char *argv[], const int kCorrectNumber){
  if (argc!=kCorrectNumber){
    std::cout<<"Número de parámetros incorrecto"<<std::endl;
  return false;
}
return true;
}
int main (int argc, char* argv[]){
  if (!check(argc,argv,4)){
  return 345;
  }
double size = atof(argv[1]);
double lower = atof(argv[2]);
double upper = atof(argv[3]);
porpouse();
inecesary();
std::vector <double> Random_numbers = GenerateVector (size,lower,upper);
std::cout << output(Random_numbers) << std::endl;
}

