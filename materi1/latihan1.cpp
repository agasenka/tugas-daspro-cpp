#include <iostream>

int main() {
  int pilihan;
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Menu 1\n";
    break;
  case 2:
    std::cout << "Menu 2\n";
    break;
  case 3:
    std::cout << "Menu 3\n";
    break;
  default:
    std::cout << "Pilihan tidak tersedia\n";
    break;
  }

  return 0;
}
