#include <iostream>

int main() {
  int bulan;
  std::cout << "Masukkan angka bulan (1-12): ";
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
    std::cout << "Angka yang dimasukkan tidak valid! (Harus 1-12)\n";
    break;
  }

  return 0;
}
