#include <iostream>

int main() {
  int jenis, lama;
  int tarif = 0;

  std::cout << "1. Motor (Rp2.000/jam)\n";
  std::cout << "2. Mobil (Rp5.000/jam)\n";
  std::cout << "3. Bus   (Rp10.000/jam)\n";
  std::cout << "Pilih jenis kendaraan (1-3): ";
  std::cin >> jenis;
  std::cout << "Masukkan lama parkir (jam): ";
  std::cin >> lama;

  switch (jenis) {
  case 1:
    tarif = 2000 * lama;
    std::cout << "Jenis: Motor\n";
    break;
  case 2:
    tarif = 5000 * lama;
    std::cout << "Jenis: Mobil\n";
    break;
  case 3:
    tarif = 10000 * lama;
    std::cout << "Jenis: Bus\n";
    break;
  default:
    std::cout << "Jenis kendaraan tidak valid\n";
    return 0;
  }

  std::cout << "Lama parkir: " << lama << " jam\n";
  std::cout << "Total tarif: Rp" << tarif << "\n";

  return 0;
}
