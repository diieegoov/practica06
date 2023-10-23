 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file P57548.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program sums two numbers
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>
#include <iomanip>

int main() {
  long long numero;
  std::cin >> numero;
  long double harmonico;
  if (numero > 0) {
   for (int i = 1; i <= numero; i++) {
    harmonico += (1.0000 / i);
  }
  std::cout << std::fixed << std::setprecision(4) << harmonico << std::endl;
  }
  if (numero == 0) {
    std::cout << std::fixed << std::setprecision(4) << 0.0000 << std::endl;
  }

  return 0; 
} 
