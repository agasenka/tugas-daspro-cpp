#include <iostream>

// Studi Kasus 1
int main() {
  int menu;

  std::cout << "===== SISTEM AKADEMIK =====" << std::endl;
  std::cout << "1. Biodata" << std::endl;
  std::cout << "2. KRS" << std::endl;
  std::cout << "3. Nilai" << std::endl;
  std::cout << "4. Jadwal" << std::endl;
  std::cout << "5. Transkrip" << std::endl;
  std::cout << "6. Keluar" << std::endl;
  std::cout << "Pilih menu (1-6): ";
  std::cin >> menu;

  switch (menu) {
  case 1:
    std::cout << "--- Biodata ---" << std::endl;
    std::cout << "Nama: Reza Audiore" << std::endl;
    std::cout << "NIM : 123456789" << std::endl;
    break;

  case 2: {
    int submenu;
    std::cout << "--- KRS ---" << std::endl;
    std::cout << "1. Tambah Mata Kuliah" << std::endl;
    std::cout << "2. Hapus Mata Kuliah" << std::endl;
    std::cout << "3. Lihat KRS" << std::endl;
    std::cout << "Pilih submenu (1-3): ";
    std::cin >> submenu;

    switch (submenu) {
    case 1:
      std::cout << "Mata kuliah berhasil ditambahkan." << std::endl;
      break;
    case 2:
      std::cout << "Mata kuliah berhasil dihapus." << std::endl;
      break;
    case 3:
      std::cout << "Daftar KRS: Pemrograman, Algoritma." << std::endl;
      break;
    default:
      std::cout << "Submenu tidak valid" << std::endl;
    }
    break;
  }

  case 3:
    std::cout << "--- Nilai ---" << std::endl;
    std::cout << "Pemrograman: A" << std::endl;
    std::cout << "Algoritma : B+" << std::endl;
    break;

  case 4:
    std::cout << "--- Jadwal ---" << std::endl;
    std::cout << "Senin  : Pemrograman" << std::endl;
    std::cout << "Rabu   : Algoritma" << std::endl;
    break;

  case 5:
    std::cout << "--- Transkrip ---" << std::endl;
    std::cout << "IPK: 3.75" << std::endl;
    break;

  case 6:
    std::cout << "Program selesai." << std::endl;
    break;

  default:
    std::cout << "Menu tidak valid" << std::endl;
  }

  return 0;
}
