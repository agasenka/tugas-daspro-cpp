#include <iostream>

int main() {
  double saldo = 1000000;
  int pilihan;
  double nominal;

  do {
    std::cout << "\n===== ATM =====\n";
    std::cout << "1. Cek Saldo\n";
    std::cout << "2. Setor Tunai\n";
    std::cout << "3. Tarik Tunai\n";
    std::cout << "4. Transfer\n";
    std::cout << "5. Keluar\n";
    std::cout << "Pilihan: ";
    std::cin >> pilihan;

    switch (pilihan) {
    case 1:
      std::cout << "Saldo saat ini: Rp" << saldo << "\n";
      break;
    case 2:
      std::cout << "Masukkan nominal setor: Rp";
      std::cin >> nominal;
      if (nominal > 0) {
        saldo += nominal;
        std::cout << "Setoran berhasil. Saldo: Rp" << saldo << "\n";
      } else {
        std::cout << "Nominal tidak valid\n";
      }
      break;
    case 3:
      std::cout << "Masukkan nominal tarik: Rp";
      std::cin >> nominal;
      if (nominal > 0 && nominal <= saldo) {
        saldo -= nominal;
        std::cout << "Penarikan berhasil. Saldo: Rp" << saldo << "\n";
      } else if (nominal > saldo) {
        std::cout << "Saldo tidak mencukupi\n";
      } else {
        std::cout << "Nominal tidak valid\n";
      }
      break;
    case 4:
      std::cout << "Masukkan nominal transfer: Rp";
      std::cin >> nominal;
      if (nominal > 0 && nominal <= saldo) {
        saldo -= nominal;
        std::cout << "Transfer berhasil. Saldo: Rp" << saldo << "\n";
      } else if (nominal > saldo) {
        std::cout << "Saldo tidak mencukupi\n";
      } else {
        std::cout << "Nominal tidak valid\n";
      }
      break;
    case 5:
      std::cout << "Terima kasih\n";
      break;
    default:
      std::cout << "Pilihan tidak valid\n";
      break;
    }
  } while (pilihan != 5);

  return 0;
}
