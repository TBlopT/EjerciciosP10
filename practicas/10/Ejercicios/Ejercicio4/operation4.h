#include <iostream>
#include <vector>
#include <algorithm>
//Calcula max, min y media de los elementos del vector//
void operation (const std::vector <double>& vector, double& max, double& min, double& average){
  if (vector.empty()){
  return;
  }
  max = *std::max_element (vector.begin(),vector.end());
  min = *std::min_element (vector.begin(),vector.end());
  double sum {0};
  for (double number:vector){
  sum+=number;
  }
  average = sum/vector.size();
}	
