#include <iostream>

// Praktikum 5 — Konversi Satuan
int main() {
  int pilihan;
  double nilai, hasil;

  std::cout << "===== KONVERSI SATUAN PANJANG =====" << std::endl;
  std::cout << "1. Meter -> Kilometer" << std::endl;
  std::cout << "2. Kilometer -> Meter" << std::endl;
  std::cout << "3. Meter -> Centimeter" << std::endl;
  std::cout << "4. Centimeter -> Meter" << std::endl;
  std::cout << "Pilih konversi (1-4): ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Masukkan nilai dalam Meter: ";
    std::cin >> nilai;
    hasil = nilai / 1000.0;
    std::cout << "Hasil konversi: " << nilai << " m = " << hasil << " km" << std::endl;
    break;

  case 2:
    std::cout << "Masukkan nilai dalam Kilometer: ";
    std::cin >> nilai;
    hasil = nilai * 1000.0;
    std::cout << "Hasil konversi: " << nilai << " km = " << hasil << " m" << std::endl;
    break;

  case 3:
    std::cout << "Masukkan nilai dalam Meter: ";
    std::cin >> nilai;
    hasil = nilai * 100.0;
    std::cout << "Hasil konversi: " << nilai << " m = " << hasil << " cm" << std::endl;
    break;

  case 4:
    std::cout << "Masukkan nilai dalam Centimeter: ";
    std::cin >> nilai;
    hasil = nilai / 100.0;
    std::cout << "Hasil konversi: " << nilai << " cm = " << hasil << " m" << std::endl;
    break;

  default:
    std::cout << "Pilihan menu konversi tidak valid." << std::endl;
    break;
  }

  return 0;
}
