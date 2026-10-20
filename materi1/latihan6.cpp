#include <iostream>

int main() {
  float a, b;
  char op;
  std::cin >> a >> op >> b;

  switch (op) {
  case '+':
    std::cout << a + b << "\n";
    break;
  case '-':
    std::cout << a - b << "\n";
    break;
  case '*':
    std::cout << a * b << "\n";
    break;
  case '/':
    if (b != 0) {
      std::cout << a / b << "\n";
    } else {
      std::cout << "Tidak dapat membagi dengan nol\n";
    }
    break;
  default:
    std::cout << "Operator tidak valid\n";
    break;
  }

  return 0;
}
