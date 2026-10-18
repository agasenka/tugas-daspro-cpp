#include <iostream>

int main() {
  int kode;
  std::cout << "Masukkan kategori kendaraan (1-4): ";
  std::cin >> kode;

  switch (kode) {
  case 1:
    std::cout << "Motor" << std::endl;
    break;
  case 2:
    std::cout << "Mobil" << std::endl;
    break;
  case 3:
    std::cout << "Bus" << std::endl;
    break;
  case 4:
    std::cout << "Truk" << std::endl;
    break;
  default:
    std::cout << "Jenis kendaraan tidak valid" << std::endl;
  }

  return 0;
}
