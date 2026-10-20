#include <iostream>

int main() {
  int pilihan;
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Tambah\n";
    break;
  case 2:
    std::cout << "Lihat\n";
    break;
  default:
    std::cout << "Menu tidak tersedia\n";
    break;
  }

  return 0;
}
