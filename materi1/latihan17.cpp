#include <iostream>

int main() {
  int pilihan = 2;
  switch (pilihan) {
  case 1:
    std::cout << "A\n";
    break;
  case 2:
    std::cout << "B\n";
    break;
  case 3:
    std::cout << "C\n";
    break;
  default:
    std::cout << "D\n";
    break;
  }
  return 0;
}
