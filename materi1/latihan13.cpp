#include <iostream>

int main() {
  int operasi;
  float a, b;

  std::cout << "1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n";
  std::cout << "Pilih operasi (1-4): ";
  std::cin >> operasi;
  std::cout << "Masukkan dua bilangan: ";
  std::cin >> a >> b;

  switch (operasi) {
  case 1:
    std::cout << "Hasil: " << a + b << "\n";
    break;
  case 2:
    std::cout << "Hasil: " << a - b << "\n";
    break;
  case 3:
    std::cout << "Hasil: " << a * b << "\n";
    break;
  case 4:
    if (b != 0) {
      std::cout << "Hasil: " << a / b << "\n";
    } else {
      std::cout << "Error: pembagian dengan nol\n";
    }
    break;
  default:
    std::cout << "Operasi tidak valid\n";
    break;
  }

  return 0;
}
