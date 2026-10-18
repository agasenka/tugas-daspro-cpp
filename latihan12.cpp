#include <iostream>

// Studi Kasus 2 - Parkir Kampus
int main() {
  int kode;
  int lama;
  double tarif = 0;
  double total;

  std::cout << "===== PARKIR KAMPUS =====" << std::endl;
  std::cout << "1. Motor (Rp2.000/jam)" << std::endl;
  std::cout << "2. Mobil (Rp5.000/jam)" << std::endl;
  std::cout << "3. Bus   (Rp10.000/jam)" << std::endl;
  std::cout << "Masukkan kode kendaraan (1-3): ";
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
    std::cout << "Kode kendaraan tidak valid" << std::endl;
    return 0; // jangan hitung tarif kalau kode tidak valid
  }

  std::cout << "Masukkan lama parkir (jam): ";
  std::cin >> lama;

  total = tarif * lama;

  // Challenge: diskon 10% jika lama parkir lebih dari 5 jam
  if (lama > 5) {
    double diskon = total * 0.10;
    total = total - diskon;
    std::cout << "Diskon 10%: Rp" << diskon << std::endl;
  }

  std::cout << "Total tarif: Rp" << total << std::endl;

  return 0;
}
