#include <iostream>

int main() {
  int pilihan;
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Akademik";
    break;
  case 2:
    std::cout << "Keuangan";
    break;
  default:
    std::cout << "Tidak valid";
  }

  std::cout << std::endl;
  return 0;
}
