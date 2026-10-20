#include <iostream>

int main() {
  int jenis, lama, tarif = 0;
  std::cin >> jenis >> lama;

  switch (jenis) {
  case 1:
    tarif = 2000 * lama;
    std::cout << "Motor\n";
    break;
  case 2:
    tarif = 5000 * lama;
    std::cout << "Mobil\n";
    break;
  case 3:
    tarif = 10000 * lama;
    std::cout << "Bus\n";
    break;
  default:
    std::cout << "Jenis tidak valid\n";
    break;
  }

  std::cout << "Tarif: Rp" << tarif << "\n";
  return 0;
}
