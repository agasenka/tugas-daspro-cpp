#include <iostream>

int main() {
  int menu;
  std::cin >> menu;
  switch (menu) {
  case 1:
    std::cout << "Tambah\n";
    break;
  case 2:
    std::cout << "Hapus\n";
    break;
  case 3:
    std::cout << "Tampil\n";
    break;
  default:
    std::cout << "Menu tidak valid\n";
    break;
  }
  return 0;
}
