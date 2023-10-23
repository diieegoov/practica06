 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática
   * Informática Básica 2023-2024
   * @file P34279_Add_one_second.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 15 2023
   * @brief The program adds one second to a clock time, given its hours, minutes and seconds.
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P34279
   */

#include <iostream>
#include <iomanip>
int main() {
  int horas, minutos, segundos;
  std::cin >> horas >> minutos >> segundos;
  if (segundos < 59) {
    std::cout << std::setfill('0') << std::setw(2) << horas << ":" << std::setfill('0') << std::setw(2);
    std::cout << minutos << ":" << std::setfill('0') << std::setw(2) << segundos + 1 << std::endl;
  }
  if ((segundos > 58) && (minutos < 59)) {
    std::cout << std::setfill('0') << std::setw(2) << horas << ":" << std::setfill('0') << std::setw(2) << minutos + 1 << ":" << "00" << std::endl;
  }
  if ((minutos > 58) && (segundos > 58) && (horas < 23)){
      std::cout << std::setfill('0') << std::setw(2) << horas + 1 << ":" << "00" << ":" << "00" << std::endl;
    }
  if ((horas == 23) && (minutos > 58) && (segundos > 58)) {
      std::cout << "00" << ":" << "00" << ":" << "00" << std::endl;
      }

   return 0;
 }
