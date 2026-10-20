#include <iostream>

// Debugging 2 — Syntax Error
int main() {
  int menu;
  std::cout << "Masukkan menu (1-2): ";
  std::cin >> menu;

  switch (menu) {
  case 1: // ditambahkan tanda titik dua (:) setelah 'case 1'
    std::cout << "Tambah" << std::endl;
    break;
  case 2:
    std::cout
        << "Hapus"
        << std::endl; // ditambahkan titik koma (;) setelah 'cout << "Hapus"'
    break;
  default:
    std::cout << "Menu tidak valid" << std::endl;
    break;
  }

  return 0;
}
