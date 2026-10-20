#include <iostream>

int main() {
  int hari;
  std::cout << "Masukkan hari: ";
  std::cin >> hari;

  switch (hari) {
  case 1:
    std::cout << "Senin\n";
    break;
  case 2:
    std::cout << "Selasa\n";
    break;
  case 3:
    std::cout << "Rabu\n";
    break;
  case 4:
    std::cout << "Kamis\n";
    break;
  case 5:
    std::cout << "Jum'at\n";
    break;
  case 6:
    std::cout << "Sabtu\n";
    break;
  case 7:
    std::cout << "Minggu\n";
    break;
  default:
    std::cout << "Nomor hari tidak valid!\n";
    break;
  }

  return 0;
}
