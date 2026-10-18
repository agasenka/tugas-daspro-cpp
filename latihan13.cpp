#include <iostream>

// Studi Kasus 3 - Kode Fakultas dan Program Studi
int main() {
  int fakultas;
  int prodi;

  std::cout << "===== PILIHAN FAKULTAS =====" << std::endl;
  std::cout << "1. Teknik" << std::endl;
  std::cout << "2. Ekonomi" << std::endl;
  std::cout << "Pilih fakultas (1-2): ";
  std::cin >> fakultas;

  switch (fakultas) {
  case 1:
    std::cout << "--- Fakultas Teknik ---" << std::endl;
    std::cout << "1. Teknik Informatika" << std::endl;
    std::cout << "2. Sistem Informasi" << std::endl;
    std::cout << "Pilih prodi (1-2): ";
    std::cin >> prodi;

    switch (prodi) {
    case 1:
      std::cout << "Anda memilih: Teknik Informatika" << std::endl;
      break;
    case 2:
      std::cout << "Anda memilih: Sistem Informasi" << std::endl;
      break;
    default:
      std::cout << "Prodi tidak valid" << std::endl;
      break;
    }
    break;

  case 2:
    std::cout << "--- Fakultas Ekonomi ---" << std::endl;
    std::cout << "1. Manajemen" << std::endl;
    std::cout << "2. Akuntansi" << std::endl;
    std::cout << "Pilih prodi (1-2): ";
    std::cin >> prodi;

    switch (prodi) {
    case 1:
      std::cout << "Anda memilih: Manajemen" << std::endl;
      break;
    case 2:
      std::cout << "Anda memilih: Akuntansi" << std::endl;
      break;
    default:
      std::cout << "Prodi tidak valid" << std::endl;
      break;
    }
    break;

  default:
    std::cout << "Fakultas tidak valid" << std::endl;
    break;
  }

  return 0;
}
