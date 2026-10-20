#include <iostream>

// Debugging 1 — Missing Break
int main() {
  int pilihan;
  std::cout << "Masukkan pilihan (1-2): ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "A";
    break; // ditambahkan break agar tidak fall-through ke case 2
  case 2:
    std::cout << "B";
    break;
  default:
    std::cout << "Pilihan tidak valid";
    break;
  }

  std::cout << std::endl;
  return 0;
}
