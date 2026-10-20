#include <iostream>

int main() {
  int menu;
  std::cout << "===== SISTEM AKADEMIK =====\n";
  std::cout << "1. Biodata\n2. KRS\n3. Nilai\n4. Jadwal\n5. Transkrip\n6. Keluar\n";
  std::cout << "Pilih menu (1-6): ";
  std::cin >> menu;

  switch (menu) {
  case 1:
    std::cout << "Menu Biodata Mahasiswa\n";
    break;
  case 2: {
    int subKrs;
    std::cout << "--- Menu KRS ---\n";
    std::cout << "1. Tambah Mata Kuliah\n";
    std::cout << "2. Hapus Mata Kuliah\n";
    std::cout << "3. Lihat KRS\n";
    std::cout << "Pilih submenu (1-3): ";
    std::cin >> subKrs;

    switch (subKrs) {
    case 1:
      std::cout << "Mata kuliah berhasil ditambahkan\n";
      break;
    case 2:
      std::cout << "Mata kuliah berhasil dihapus\n";
      break;
    case 3:
      std::cout << "Daftar KRS ditampilkan\n";
      break;
    default:
      std::cout << "Submenu KRS tidak valid\n";
      break;
    }
    break;
  }
  case 3:
    std::cout << "Menu Nilai\n";
    break;
  case 4:
    std::cout << "Menu Jadwal\n";
    break;
  case 5:
    std::cout << "Menu Transkrip\n";
    break;
  case 6:
    std::cout << "Program selesai\n";
    break;
  default:
    std::cout << "Menu tidak tersedia\n";
    break;
  }

  return 0;
}
