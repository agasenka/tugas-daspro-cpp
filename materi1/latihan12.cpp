#include <iostream>

int main() {
  int pilihan;
  std::cout << "===== MENU =====\n";
  std::cout << "1. Profil\n";
  std::cout << "2. Nilai\n";
  std::cout << "3. Jadwal\n";
  std::cout << "4. Keluar\n";
  std::cout << "Pilihan: ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Menu Profil\n";
    break;
  case 2:
    std::cout << "Menu Nilai\n";
    break;
  case 3:
    std::cout << "Menu Jadwal\n";
    break;
  case 4:
    std::cout << "Program selesai\n";
    break;
  default:
    std::cout << "Pilihan tidak tersedia\n";
    break;
  }

  return 0;
}
