#include <iostream>

int main() {
  int menu;
  std::cin >> menu;

  switch (menu) {
  case 1:
    std::cout << "Biodata\n";
    break;
  case 2:
    std::cout << "KRS\n";
    break;
  case 3:
    std::cout << "Nilai\n";
    break;
  case 4:
    std::cout << "Jadwal\n";
    break;
  case 5:
    std::cout << "Transkrip\n";
    break;
  default:
    std::cout << "Menu tidak tersedia\n";
    break;
  }

  return 0;
}
