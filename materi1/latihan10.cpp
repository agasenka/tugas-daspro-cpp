#include <iostream>

int main() {
  int semester;
  std::cin >> semester;

  switch (semester) {
  case 1:
  case 2:
    std::cout << "Semester Awal\n";
    break;
  case 3:
  case 4:
    std::cout << "Semester Menengah\n";
    break;
  case 5:
  case 6:
    std::cout << "Semester Lanjutan\n";
    break;
  case 7:
  case 8:
    std::cout << "Semester Akhir\n";
    break;
  default:
    std::cout << "Semester tidak valid\n";
    break;
  }

  return 0;
}
