/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 25 2024
 * @brief 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */
#include <iostream>
#include <vector>
using namespace std;
int main (){
int size;
int i {0};
int a;
cin >> size;
vector <int> caca;
caca.resize (size);

while (i<=size){
cin>>a;
caca.push_back(i);
i++;
}
for(int ejemplo:caca){

cout << ejemplo;
}
}

