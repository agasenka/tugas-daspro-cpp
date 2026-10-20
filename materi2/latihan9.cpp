#include <iostream>

int main() {
  int pilihan;
  std::cout << "Masukkan pilihan (1-3): ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Akademik" << std::endl;
    break;
  case 2:
    std::cout << "Keuangan" << std::endl;
    break;
  case 3:
    std::cout << "Perpustakaan" << std::endl;
    break;
  default:
    std::cout << "Pilihan tidak valid" << std::endl;
  }

  return 0;
}
// Sebuah program memiliki pilihan: 1 Akademik, 2 Keuangan, 3 Perpustakaan. Jika
// pengguna memasukkan 9, apa yang seharusnya dilakukan program? Jelaskan peran
// default Jawab: Masuk ke dalam default karena peran default sebagai pilihan
// cadangan yang tidak ada dipilihan
