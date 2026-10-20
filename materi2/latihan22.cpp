#include <iostream>

// Praktikum 4 — Menu Akademik dengan Submenu
int main() {
  int menu;

  std::cout << "===== SISTEM INFORMASI KAMPUS =====" << std::endl;
  std::cout << "1. Akademik" << std::endl;
  std::cout << "2. Keuangan" << std::endl;
  std::cout << "3. Perpustakaan" << std::endl;
  std::cout << "4. Kemahasiswaan" << std::endl;
  std::cout << "5. Keluar" << std::endl;
  std::cout << "Pilih menu utama (1-5): ";
  std::cin >> menu;

  switch (menu) {
  case 1: {
    int submenu;
    std::cout << "--- Submenu Akademik ---" << std::endl;
    std::cout << "1. KRS" << std::endl;
    std::cout << "2. Nilai" << std::endl;
    std::cout << "3. Jadwal" << std::endl;
    std::cout << "4. Transkrip" << std::endl;
    std::cout << "Pilih submenu (1-4): ";
    std::cin >> submenu;

    switch (submenu) {
    case 1:
      std::cout << "Menu KRS: Kartu Rencana Studi semester aktif." << std::endl;
      break;
    case 2:
      std::cout << "Menu Nilai: Kartu Hasil Studi (KHS) semester ini." << std::endl;
      break;
    case 3:
      std::cout << "Menu Jadwal: Jadwal perkuliahan mingguan." << std::endl;
      break;
    case 4:
      std::cout << "Menu Transkrip: Transkrip nilai kumulatif mahasiswa." << std::endl;
      break;
    default:
      std::cout << "Submenu akademik tidak valid." << std::endl;
      break;
    }
    break;
  }

  case 2:
    std::cout << "--- Menu Keuangan ---" << std::endl;
    std::cout << "Informasi tagihan UKT dan riwayat pembayaran kuliah." << std::endl;
    break;

  case 3:
    std::cout << "--- Menu Perpustakaan ---" << std::endl;
    std::cout << "Peminjaman, pengembalian, dan pencarian katalog buku perpustakaan." << std::endl;
    break;

  case 4:
    std::cout << "--- Menu Kemahasiswaan ---" << std::endl;
    std::cout << "Layanan beasiswa, kegiatan ormawa, dan surat keterangan aktif." << std::endl;
    break;

  case 5:
    std::cout << "Terima kasih telah menggunakan sistem informasi kampus." << std::endl;
    break;

  default:
    std::cout << "Pilihan menu utama tidak valid." << std::endl;
    break;
  }

  return 0;
}
