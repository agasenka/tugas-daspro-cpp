#include <iostream>

int main() {
  char kode;
  std::cin >> kode;

  switch (kode) {
  case 'A':
    std::cout << "Fakultas Teknik\n";
    break;
  case 'B':
    std::cout << "Fakultas Ekonomi\n";
    break;
  case 'C':
    std::cout << "Fakultas Ilmu Komputer\n";
    break;
  case 'D':
    std::cout << "Fakultas Pendidikan\n";
    break;
  default:
    std::cout << "Kode tidak dikenal\n";
    break;
  }

  return 0;
}
