#include <iostream>

int main() {
  int pilihan;
  double nilai, hasil;

  std::cout << "1. Meter -> Kilometer\n";
  std::cout << "2. Kilometer -> Meter\n";
  std::cout << "3. Meter -> Centimeter\n";
  std::cout << "4. Centimeter -> Meter\n";
  std::cout << "Pilihan: ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Masukkan nilai (Meter): ";
    std::cin >> nilai;
    hasil = nilai / 1000.0;
    std::cout << nilai << " m = " << hasil << " km\n";
    break;
  case 2:
    std::cout << "Masukkan nilai (Kilometer): ";
    std::cin >> nilai;
    hasil = nilai * 1000.0;
    std::cout << nilai << " km = " << hasil << " m\n";
    break;
  case 3:
    std::cout << "Masukkan nilai (Meter): ";
    std::cin >> nilai;
    hasil = nilai * 100.0;
    std::cout << nilai << " m = " << hasil << " cm\n";
    break;
  case 4:
    std::cout << "Masukkan nilai (Centimeter): ";
    std::cin >> nilai;
    hasil = nilai / 100.0;
    std::cout << nilai << " cm = " << hasil << " m\n";
    break;
  default:
    std::cout << "Pilihan tidak valid\n";
    break;
  }

  return 0;
}
