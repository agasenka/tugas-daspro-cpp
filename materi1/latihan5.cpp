#include <iostream>

int main() {
  int hari;
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
    std::cout << "Jumat\n";
    break;
  case 6:
    std::cout << "Sabtu\n";
    break;
  case 7:
    std::cout << "Minggu\n";
    break;
  default:
    std::cout << "Tidak valid\n";
    break;
  }

  int bulan;
  std::cin >> bulan;

  switch (bulan) {
  case 1:
    std::cout << "Januari\n";
    break;
  case 2:
    std::cout << "Februari\n";
    break;
  case 3:
    std::cout << "Maret\n";
    break;
  case 4:
    std::cout << "April\n";
    break;
  case 5:
    std::cout << "Mei\n";
    break;
  case 6:
    std::cout << "Juni\n";
    break;
  case 7:
    std::cout << "Juli\n";
    break;
  case 8:
    std::cout << "Agustus\n";
    break;
  case 9:
    std::cout << "September\n";
    break;
  case 10:
    std::cout << "Oktober\n";
    break;
  case 11:
    std::cout << "November\n";
    break;
  case 12:
    std::cout << "Desember\n";
    break;
  default:
    std::cout << "Bulan tidak valid\n";
    break;
  }

  return 0;
}
