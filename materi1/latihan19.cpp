#include <iostream>

int main() {
  int pilihan;
  std::cout << "===== SISTEM LAYANAN KAMPUS =====\n";
  std::cout << "1. Akademik\n";
  std::cout << "2. Keuangan\n";
  std::cout << "3. Perpustakaan\n";
  std::cout << "4. Kemahasiswaan\n";
  std::cout << "5. Laboratorium\n";
  std::cout << "6. Keluar\n";
  std::cout << "Pilihan: ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Layanan Akademik: Pengurusan KRS dan KHS\n";
    break;
  case 2:
    std::cout << "Layanan Keuangan: Pembayaran UKT dan Tagihan\n";
    break;
  case 3:
    std::cout << "Layanan Perpustakaan: Peminjaman dan Pengembalian Buku\n";
    break;
  case 4:
    std::cout << "Layanan Kemahasiswaan: Kegiatan dan Beasiswa\n";
    break;
  case 5:
    std::cout << "Layanan Laboratorium: Praktikum dan Peminjaman Alat\n";
    break;
  case 6:
    std::cout << "Program selesai\n";
    break;
  default:
    std::cout << "Pilihan tidak tersedia\n";
    break;
  }

  return 0;
}
