#include <iostream>

int main() {
  double a, b;
  char op;

  std::cout << "Masukkan bilangan pertama: ";
  std::cin >> a;
  std::cout << "Masukkan operator (+ - * /): ";
  std::cin >> op;
  std::cout << "Masukkan bilangan kedua: ";
  std::cin >> b;

  switch (op) {
  case '+':
    std::cout << "Hasil: " << a + b << std::endl;
    break;
  case '-':
    std::cout << "Hasil: " << a - b << std::endl;
    break;
  case '*':
    std::cout << "Hasil: " << a * b << std::endl;
    break;
  case '/':
    if (b == 0) {
      std::cout << "Error: pembagian dengan nol tidak valid" << std::endl;
    } else {
      std::cout << "Hasil: " << a / b << std::endl;
    }
    break;
  default:
    std::cout << "Operator tidak valid" << std::endl;
  }

  return 0;
}
