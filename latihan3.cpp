#include <iostream>

int main() {
  char kode;
  std::cout << "Masukkan kode fakultas (A/B/C/D): ";
  std::cin >> kode;

  switch (kode) {
  case 'A':
    std::cout << "Fakultas Sains dan Teknologi" << std::endl;
    break;
  case 'B':
    std::cout << "Fakultas Ekonomi dan Bisnis Islam" << std::endl;
    break;
  case 'C':
    std::cout << "Fakultas Dakwah dan Komunikasi" << std::endl;
    break;
  case 'D':
    std::cout << "Fakultas Ushuluddin dan Filsafat" << std::endl;
    break;
  default:
    std::cout << "Kode tidak valid" << std::endl;
  }

  return 0;
}
