#include <iostream>

// Studi Kasus 5 — Sistem Keuangan Mahasiswa
int main() {
  int menu;

  std::cout << "===== SISTEM KEUANGAN MAHASISWA =====" << std::endl;
  std::cout << "1. Cek UKT" << std::endl;
  std::cout << "2. Cek Tagihan" << std::endl;
  std::cout << "3. Pembayaran" << std::endl;
  std::cout << "4. Riwayat Pembayaran" << std::endl;
  std::cout << "5. Keluar" << std::endl;
  std::cout << "Pilih menu (1-5): ";
  std::cin >> menu;

  switch (menu) {
  case 1:
    std::cout << "--- Cek UKT ---" << std::endl;
    std::cout << "Golongan UKT: UKT 3" << std::endl;
    std::cout << "Biaya UKT   : Rp3.500.000" << std::endl;
    break;

  case 2:
    std::cout << "--- Cek Tagihan ---" << std::endl;
    std::cout << "Tagihan UKT Semester ini: Rp3.500.000" << std::endl;
    std::cout << "Status                  : Belum Lunas" << std::endl;
    break;

  case 3: {
    int metode;
    double nominal;

    std::cout << "--- Menu Pembayaran ---" << std::endl;
    std::cout << "1. Tunai" << std::endl;
    std::cout << "2. Transfer" << std::endl;
    std::cout << "3. Virtual Account" << std::endl;
    std::cout << "Pilih metode pembayaran (1-3): ";
    std::cin >> metode;

    switch (metode) {
    case 1:
      std::cout << "Metode: Tunai" << std::endl;
      break;
    case 2:
      std::cout << "Metode: Transfer Bank" << std::endl;
      break;
    case 3:
      std::cout << "Metode: Virtual Account" << std::endl;
      break;
    default:
      std::cout << "Metode pembayaran tidak valid" << std::endl;
      return 0;
    }

    std::cout << "Masukkan nominal pembayaran: Rp";
    std::cin >> nominal;

    // Validasi nominal pembayaran agar tidak negatif atau nol
    if (nominal <= 0) {
      std::cout << "Error: Nominal pembayaran tidak valid (tidak boleh kurang dari atau sama dengan 0)!" << std::endl;
    } else {
      std::cout << "Pembayaran sebesar Rp" << nominal << " berhasil diproses." << std::endl;
    }
    break;
  }

  case 4:
    std::cout << "--- Riwayat Pembayaran ---" << std::endl;
    std::cout << "1. UKT Semester 1 - Rp3.500.000 [Lunas]" << std::endl;
    std::cout << "2. UKT Semester 2 - Rp3.500.000 [Lunas]" << std::endl;
    break;

  case 5:
    std::cout << "Terima kasih telah menggunakan sistem keuangan mahasiswa." << std::endl;
    break;

  default:
    std::cout << "Pilihan menu tidak valid" << std::endl;
    break;
  }

  return 0;
}
