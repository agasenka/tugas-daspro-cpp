#include <iostream>

int main() {
  int fakultas, prodi;
  std::cin >> fakultas >> prodi;

  switch (fakultas) {
  case 1:
    switch (prodi) {
    case 1:
      std::cout << "Teknik Informatika\n";
      break;
    case 2:
      std::cout << "Sistem Informasi\n";
      break;
    default:
      std::cout << "Prodi tidak tersedia\n";
      break;
    }
    break;
  case 2:
    switch (prodi) {
    case 1:
      std::cout << "Manajemen\n";
      break;
    case 2:
      std::cout << "Akuntansi\n";
      break;
    default:
      std::cout << "Prodi tidak tersedia\n";
      break;
    }
    break;
  default:
    std::cout << "Fakultas tidak tersedia\n";
    break;
  }

  return 0;
}
