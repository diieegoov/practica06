 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file P98960_uppercase_and_lowercase_letters.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 50 2023    
   * @brief The program reads a letter and prints it in lowercase if it was uppercase, or prints it in uppercase if it was lowercase. 
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P98960
   */

#include <iostream>

int main() {
  char letra;
  std::cin >> letra;
  if (static_cast<int>(letra) > 96) {
    std::cout << char(static_cast<int>(letra) - 32) << std::endl;  }
  if (static_cast<int>(letra) < 91) {
    std::cout << char(static_cast<int>(letra) + 32) << std::endl;  }

 return 0;
} 
