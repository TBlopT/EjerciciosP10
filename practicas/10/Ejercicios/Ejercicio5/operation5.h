#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
//Desordenado vector, haciendo swap a localización predefinida por número aleatorio//
std::vector <double> vector1 (std::vector <double>& original_vector){

int a {0};
int b {3};
std::srand(static_cast<unsigned int>(std::time(0)));

for (int i{0};i<3;i++){
  int aleatory =a + std::rand() % (b - a);
  std::swap(original_vector[i],original_vector[aleatory]);
}
for (double number:original_vector){
	std::cout<<number;
}
std::cout<<""<<std::endl;
return original_vector;
}
