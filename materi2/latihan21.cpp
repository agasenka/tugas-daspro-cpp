#include <iostream>

// Praktikum 3 — Sistem Parkir Kampus
int main() {
  int kode;
  int lama;
  double tarif = 0;
  double total;

  std::cout << "===== SISTEM PARKIR KAMPUS =====" << std::endl;
  std::cout << "1. Motor (Rp2.000/jam)" << std::endl;
  std::cout << "2. Mobil (Rp5.000/jam)" << std::endl;
  std::cout << "Masukkan kode jenis kendaraan (1-2): ";
  std::cin >> kode;

  switch (kode) {
  case 1:
    tarif = 2000;
    break;
  case 2:
    tarif = 5000;
    break;
  case 3:
    tarif = 10000;
    break;
  default:
    std::cout << "Error: Kode kendaraan tidak valid!" << std::endl;
    return 0; // Berhenti kalau kendaraan gak valid
  }

  std::cout << "Masukkan lama parkir (dalam jam): ";
  std::cin >> lama;

  if (lama < 1) {
    std::cout << "Error: Lama parkir minimal adalah 1 jam!" << std::endl;
    return 0;
  }

  total = tarif * lama;

  if (lama > 5) {
    double diskon = total * 0.10;
    total = total - diskon;
    std::cout << "Diskon parkir lama (>5 jam) 10%: Rp" << diskon << std::endl;
  }

  std::cout << "Total tarif parkir yang harus dibayar: Rp" << total
            << std::endl;

  return 0;
}
