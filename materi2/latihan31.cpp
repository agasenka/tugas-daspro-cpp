#include <iostream>
#include <string>

// Challenge 1 — Menu Restoran Kampus
int main() {
  int pilihan;
  int jumlah;
  int harga = 0;
  std::string namaMenu;

  std::cout << "===== RESTORAN KAMPUS =====" << std::endl;
  std::cout << "1. Nasi Goreng  : Rp15.000" << std::endl;
  std::cout << "2. Mie Ayam     : Rp12.000" << std::endl;
  std::cout << "3. Soto         : Rp13.000" << std::endl;
  std::cout << "4. Es Teh       : Rp5.000" << std::endl;
  std::cout << "Pilih menu (1-4): ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    namaMenu = "Nasi Goreng";
    harga = 15000;
    break;
  case 2:
    namaMenu = "Mie Ayam";
    harga = 12000;
    break;
  case 3:
    namaMenu = "Soto";
    harga = 13000;
    break;
  case 4:
    namaMenu = "Es Teh";
    harga = 5000;
    break;
  default:
    std::cout << "Error: Pilihan menu tidak valid!" << std::endl;
    return 0;
  }

  std::cout << "Masukkan jumlah porsi: ";
  std::cin >> jumlah;

  if (jumlah <= 0) {
    std::cout << "Error: Jumlah porsi harus lebih dari 0!" << std::endl;
    return 0;
  }

  int subtotal = harga * jumlah;
  double diskon = 0;

  if (subtotal >= 50000) {
    diskon = subtotal * 0.10;
  }

  double totalAkhir = subtotal - diskon;

  std::cout << "\n===== STRUK PEMBAYARAN =====" << std::endl;
  std::cout << "Menu yang dipilih : " << namaMenu << std::endl;
  std::cout << "Harga satuan      : Rp" << harga << std::endl;
  std::cout << "Jumlah            : " << jumlah << " porsi" << std::endl;
  std::cout << "Subtotal          : Rp" << subtotal << std::endl;
  if (diskon > 0) {
    std::cout << "Diskon (10%)      : Rp" << diskon << std::endl;
  } else {
    std::cout << "Diskon            : Rp0" << std::endl;
  }
  std::cout << "----------------------------" << std::endl;
  std::cout << "Total Akhir       : Rp" << totalAkhir << std::endl;
  std::cout << "============================" << std::endl;

  return 0;
}
