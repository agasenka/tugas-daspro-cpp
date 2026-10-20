#include <iostream>

// Studi Kasus 6 — Perpustakaan
int main() {
  int menu;

  std::cout << "===== SISTEM PERPUSTAKAAN =====" << std::endl;
  std::cout << "1. Pinjam Buku" << std::endl;
  std::cout << "2. Kembalikan Buku" << std::endl;
  std::cout << "3. Cek Denda" << std::endl;
  std::cout << "4. Cek Koleksi" << std::endl;
  std::cout << "5. Keluar" << std::endl;
  std::cout << "Pilih menu (1-5): ";
  std::cin >> menu;

  switch (menu) {
  case 1:
    std::cout << "--- Pinjam Buku ---" << std::endl;
    std::cout << "Silakan scan kartu anggota dan barcode buku yang dipinjam."
              << std::endl;
    std::cout << "Batas waktu peminjaman adalah 7 hari." << std::endl;
    break;

  case 2:
    std::cout << "--- Kembalikan Buku ---" << std::endl;
    std::cout << "Buku berhasil dikembalikan. Terima kasih!" << std::endl;
    break;

  case 3: {
    int hari;
    std::cout << "--- Cek Denda Keterlambatan ---" << std::endl;
    std::cout << "Masukkan jumlah hari keterlambatan: ";
    std::cin >> hari;

    if (hari < 0) {
      std::cout << "Jumlah hari tidak valid." << std::endl;
    } else if (hari == 0) {
      std::cout << "Tidak ada keterlambatan. Bebas denda!" << std::endl;
    } else if (hari <= 3) {
      int denda = hari * 1000;
      std::cout << "Keterlambatan " << hari << " hari (Kategori: Ringan)."
                << std::endl;
      std::cout << "Total denda: Rp" << denda << " (Rp1.000/hari)" << std::endl;
    } else if (hari <= 7) {
      int denda = hari * 2000;
      std::cout << "Keterlambatan " << hari << " hari (Kategori: Sedang)."
                << std::endl;
      std::cout << "Total denda: Rp" << denda << " (Rp2.000/hari)" << std::endl;
    } else {
      int denda = hari * 3000;
      std::cout << "Keterlambatan " << hari << " hari (Kategori: Berat)."
                << std::endl;
      std::cout << "Total denda: Rp" << denda << " (Rp3.000/hari)" << std::endl;
    }
    break;
  }

  case 4:
    std::cout << "--- Cek Koleksi Buku ---" << std::endl;
    std::cout << "1. Dasar Pemrograman C++ (Tersedia: 5)" << std::endl;
    std::cout << "2. Struktur Data dan Algoritma (Tersedia: 2)" << std::endl;
    std::cout << "3. Sistem Operasi (Tersedia: 4)" << std::endl;
    break;

  case 5:
    std::cout << "Terima kasih telah mengunjungi perpustakaan." << std::endl;
    break;

  default:
    std::cout << "Pilihan menu tidak valid" << std::endl;
    break;
  }

  return 0;
}
