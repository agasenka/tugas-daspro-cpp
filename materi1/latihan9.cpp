#include <iostream>

int main() {
  int hari;
  std::cin >> hari;

  switch (hari) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    std::cout << "Hari Kerja\n";
    break;
  case 6:
  case 7:
    std::cout << "Akhir Pekan\n";
    break;
  default:
    std::cout << "Tidak valid\n";
    break;
  }

  return 0;
}
