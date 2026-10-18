#include <iostream>

// Praktikum 6 — ATM Sederhana
int main() {
  double saldo = 1000000; // Saldo awal Rp1.000.000
  int pilihan;
  double nominal;

  do {
    std::cout << "\n===== ATM SEDERHANA =====" << std::endl;
    std::cout << "1. Cek Saldo" << std::endl;
    std::cout << "2. Setor Tunai" << std::endl;
    std::cout << "3. Tarik Tunai" << std::endl;
    std::cout << "4. Transfer" << std::endl;
    std::cout << "5. Keluar" << std::endl;
    std::cout << "Pilih transaksi (1-5): ";
    std::cin >> pilihan;

    switch (pilihan) {
    case 1:
      std::cout << "--- Cek Saldo ---" << std::endl;
      std::cout << "Saldo rekening Anda saat ini: Rp" << saldo << std::endl;
      break;

    case 2:
      std::cout << "--- Setor Tunai ---" << std::endl;
      std::cout << "Masukkan nominal setoran: Rp";
      std::cin >> nominal;
      if (nominal <= 0) {
        std::cout << "Error: Nominal setoran harus lebih besar dari 0!" << std::endl;
      } else {
        saldo += nominal;
        std::cout << "Setoran berhasil! Saldo baru Anda: Rp" << saldo << std::endl;
      }
      break;

    case 3:
      std::cout << "--- Tarik Tunai ---" << std::endl;
      std::cout << "Masukkan nominal penarikan: Rp";
      std::cin >> nominal;
      if (nominal <= 0) {
        std::cout << "Error: Nominal penarikan harus lebih besar dari 0!" << std::endl;
      } else if (nominal > saldo) {
        std::cout << "Error: Saldo tidak mencukupi! (Saldo: Rp" << saldo << ")" << std::endl;
      } else {
        saldo -= nominal;
        std::cout << "Penarikan berhasil! Sisa saldo: Rp" << saldo << std::endl;
      }
      break;

    case 4: {
      long long noRek;
      std::cout << "--- Transfer Dana ---" << std::endl;
      std::cout << "Masukkan nomor rekening tujuan: ";
      std::cin >> noRek;
      std::cout << "Masukkan nominal transfer: Rp";
      std::cin >> nominal;
      if (nominal <= 0) {
        std::cout << "Error: Nominal transfer harus lebih besar dari 0!" << std::endl;
      } else if (nominal > saldo) {
        std::cout << "Error: Saldo tidak mencukupi untuk transfer!" << std::endl;
      } else {
        saldo -= nominal;
        std::cout << "Transfer ke rekening " << noRek << " sebesar Rp" << nominal << " berhasil!" << std::endl;
        std::cout << "Sisa saldo Anda: Rp" << saldo << std::endl;
      }
      break;
    }

    case 5:
      std::cout << "Terima kasih telah bertransaksi di ATM kami. Jangan lupa ambil kartu Anda." << std::endl;
      break;

    default:
      std::cout << "Pilihan menu tidak valid. Silakan pilih 1-5." << std::endl;
      break;
    }
  } while (pilihan != 5);

  return 0;
}
