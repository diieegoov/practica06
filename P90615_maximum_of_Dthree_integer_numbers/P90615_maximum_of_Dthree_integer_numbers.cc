 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file Maximum_of_three_integer_numbers_P90615.cc 
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 15 2023    
   * @brief The program prints the maximum number between three
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P90615
   */

#include <iostream>

int main() {
  int numero_1, numero_2, numero_3;
  std::cin >> numero_1 >> numero_2 >> numero_3;
  if ((numero_1 >= numero_2) && (numero_1 >= numero_3)) {
    std::cout << numero_1 << std::endl;
  }
  else {
   if ((numero_2 >= numero_1) && (numero_2 >= numero_3)) {
    std::cout << numero_2 << std::endl;
   }
  else {
   if ((numero_3 >= numero_1) && (numero_3 >= numero_2)) {
    std::cout << numero_3 << std::endl;
   }
  }
  }
  return 0;
}

