#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::string output (std::vector <double>& Random_numbers){
  std::string Total_random_numbers;
  for (auto Number:Random_numbers){
    Total_random_numbers += std::to_string(Number) + " ";
  }
  return Total_random_numbers;
}
