#include <iostream>

int main() {
  int pilihan = 2;

  switch (pilihan) {
  case 1:
    std::cout << "A";
    // sengaja tanpa break jadi fall-through ke case 2
  case 2:
    std::cout << "B";
    // sengaja tanpa break jadi fall-through ke case 3
  case 3:
    std::cout << "C";
    break;
  default:
    std::cout << "D";
  }

  std::cout << std::endl;
  return 0;
}
