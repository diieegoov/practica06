 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file P97156_numbers_in_an_interval.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 23 2023    
   * @brief The program shows the numbers that are between two numbers that
   * enters in the input
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>

int main () {
  int numero_1, numero_2;
  std::cin >> numero_1 >> numero_2;
  if (numero_1 == numero_2) {
    std::cout << numero_1 << std::endl;
  }
  if (numero_1 < numero_2) {
  for (; numero_1 < numero_2; numero_1++) {
    std::cout << numero_1 << ",";
  }
  std::cout << numero_2 << std::endl;
  }

  return 0;
}
