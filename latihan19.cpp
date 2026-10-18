#include <iostream>

// Praktikum 1 — Menu Sederhana
int main() {
  int pilihan;

  std::cout << "===== MENU LAYANAN MAHASISWA =====\n";
  std::cout << "1. Profil Mahasiswa\n";
  std::cout << "2. Nilai & KHS\n";
  std::cout << "3. Jadwal Perkuliahan\n";
  std::cout << "4. Kartu Rencana Studi (KRS)\n"; // Menu baru 1
  std::cout << "5. Tagihan Pembayaran\n";        // Menu baru 2
  std::cout << "6. Keluar\n";
  std::cout << "Pilihan: ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Anda membuka: Halaman Profil Mahasiswa\n";
    break;
  case 2:
    std::cout << "Anda membuka: Daftar Nilai Akademik & KHS Semester\n";
    break;
  case 3:
    std::cout << "Anda membuka: Jadwal Perkuliahan Mingguan\n";
    break;
  case 4:
    std::cout
        << "Anda membuka: Pengisian & Perubahan Kartu Rencana Studi (KRS)\n";
    break;
  case 5:
    std::cout
        << "Anda membuka: Informasi Rincian Tagihan & Status Pembayaran UKT\n";
    break;
  case 6:
    std::cout << "Sesi selesai. Terima kasih telah menggunakan aplikasi!\n";
    break;
  default:
    std::cout << "Pilihan tidak tersedia! Harap masukkan angka yang valid.\n";
    break;
  }

  return 0;
}
