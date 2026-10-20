#include <iostream>

// Praktikum 2 — Kalkulator
int main() {
  double bil1, bil2;
  char op;

  std::cout << "===== PRAKTIKUM 2: KALKULATOR =====" << std::endl;
  std::cout << "Masukkan bilangan pertama : ";
  std::cin >> bil1;
  std::cout << "Masukkan operator (+ - * /): ";
  std::cin >> op;
  std::cout << "Masukkan bilangan kedua   : ";
  std::cin >> bil2;

  switch (op) {
  case '+':
    std::cout << "Hasil: " << bil1 << " " << op << " " << bil2 << " = " << (bil1 + bil2) << std::endl;
    break;
  case '-':
    std::cout << "Hasil: " << bil1 << " " << op << " " << bil2 << " = " << (bil1 - bil2) << std::endl;
    break;
  case '*':
    std::cout << "Hasil: " << bil1 << " " << op << " " << bil2 << " = " << (bil1 * bil2) << std::endl;
    break;
  case '/':
    if (bil2 == 0) {
      std::cout << "Error: Pembagian dengan nol tidak valid (" << bil1 << " / 0)!" << std::endl;
    } else {
      std::cout << "Hasil: " << bil1 << " " << op << " " << bil2 << " = " << (bil1 / bil2) << std::endl;
    }
    break;
  default:
    std::cout << "Error: Operator '" << op << "' tidak valid!" << std::endl;
    break;
  }

  return 0;
}
