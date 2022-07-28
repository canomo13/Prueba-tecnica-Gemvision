#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>

int main(){
  std::ifstream infile("txt/Input.txt");
  std::vector<int> Numeros;
  int numero;
  while( infile >> numero)
  {
    Numeros.push_back(numero);
  }

  std::copy(Numeros.begin(),Numeros.end(),
            std::ostream_iterator<int>(std::cout," "));
  std::cout << '\n';

  return EXIT_SUCCESS;
}