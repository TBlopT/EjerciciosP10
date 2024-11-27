#include <vector>
#include <algorithm>
#include <iostream>
//Realiza sumatorio de cada elemento del vector//
double ReduceSum (std::vector <double>& numbers_set){
  double sum{0};
  for (double number:numbers_set){
  sum+=number;
  }
  std::cout << sum << std::endl;
  return sum;
}


