#include <iostream>

int main() {
  int pilihan;
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "A";
  case 2:
    std::cout << "B";
  case 3:
    std::cout << "C";
  }

  std::cout << "\n";
  return 0;
}
