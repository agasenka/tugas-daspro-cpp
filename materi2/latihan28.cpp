#include <iostream>

// Debugging 3 — Default Tidak Ada
int main() {
  int pilihan;
  std::cout << "Masukkan pilihan (1-2): ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Akademik";
    break;
  case 2:
    std::cout << "Keuangan";
    break;
  default: // menambahkan default untuk menangani input di luar pilihan 1 dan 2
    std::cout << "Pilihan tidak valid! Silakan masukkan pilihan yang tersedia "
                 "(1 atau 2).";
    break;
  }

  std::cout << std::endl;
  return 0;
}
