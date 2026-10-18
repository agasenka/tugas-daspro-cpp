#include <iostream>

// Studi Kasus 4 — Kalkulator Akademik
int main() {
  int pilihan;
  double bil1, bil2;

  std::cout << "===== KALKULATOR AKADEMIK =====" << std::endl;
  std::cout << "1. Penjumlahan" << std::endl;
  std::cout << "2. Pengurangan" << std::endl;
  std::cout << "3. Perkalian" << std::endl;
  std::cout << "4. Pembagian" << std::endl;
  std::cout << "Pilih operasi (1-4): ";
  std::cin >> pilihan;

  if (pilihan < 1 || pilihan > 4) {
    std::cout << "Pilihan operasi tidak valid" << std::endl;
    return 0;
  }

  std::cout << "Masukkan bilangan pertama: ";
  std::cin >> bil1;
  std::cout << "Masukkan bilangan kedua  : ";
  std::cin >> bil2;

  switch (pilihan) {
  case 1:
    std::cout << "Hasil Penjumlahan: " << bil1 + bil2 << std::endl;
    break;
  case 2:
    std::cout << "Hasil Pengurangan: " << bil1 - bil2 << std::endl;
    break;
  case 3:
    std::cout << "Hasil Perkalian: " << bil1 * bil2 << std::endl;
    break;
  case 4:
    if (bil2 == 0) {
      std::cout << "Error: Pembagi tidak boleh sama dengan nol" << std::endl;
    } else {
      std::cout << "Hasil Pembagian: " << bil1 / bil2 << std::endl;
    }
    break;
  default:
    std::cout << "Pilihan operasi tidak valid" << std::endl;
    break;
  }

  return 0;
}
