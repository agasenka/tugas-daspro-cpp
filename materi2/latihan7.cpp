#include <iostream>

int main() {
  int menu = 1;

  switch (menu) {
  case 1:
    std::cout << "Tambah";
    break; // ditambahkan break agar tidak fall-through ke case 2
  case 2:
    std::cout << "Edit";
    break;
  case 3:
    std::cout << "Hapus";
    break;
  }

  std::cout << std::endl;
  return 0;
}
