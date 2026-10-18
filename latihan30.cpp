#include <iostream>

// 10. PRAKTIKUM TESTING
// Program Utama Menu Layanan Mahasiswa
int main() {
  int pilihan;

  std::cout << "===== SISTEM LAYANAN KAMPUS =====" << std::endl;
  std::cout << "1. Layanan Akademik" << std::endl;
  std::cout << "2. Layanan Keuangan" << std::endl;
  std::cout << "3. Layanan Perpustakaan" << std::endl;
  std::cout << "4. Layanan Kemahasiswaan" << std::endl;
  std::cout << "5. Keluar" << std::endl;
  std::cout << "Pilih menu (1-5): ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "Menu 1: Layanan Akademik" << std::endl;
    break;
  case 2:
    std::cout << "Menu 2: Layanan Keuangan" << std::endl;
    break;
  case 3:
    std::cout << "Menu 3: Layanan Perpustakaan" << std::endl;
    break;
  case 4:
    std::cout << "Menu 4: Layanan Kemahasiswaan" << std::endl;
    break;
  case 5:
    std::cout << "Menu 5: Keluar dari sistem" << std::endl;
    break;
  default:
    std::cout << "Error: Pilihan menu tidak valid!" << std::endl;
    break;
  }

  return 0;
}

/*
Test 1
- Input          : 1
- Kondisi        : Valid (Batas Bawah / Boundary Test)
- Expected Output: Menu 1: Layanan Akademik
- Actual Output  : Menu 1: Layanan Akademik
- Status         : PASS

Test 2
- Input          : 3
- Kondisi        : Valid
- Expected Output: Menu 3: Layanan Perpustakaan
- Actual Output  : Menu 3: Layanan Perpustakaan
- Status         : PASS

Test 3
- Input          : 5
- Kondisi        : Valid (Batas Atas / Boundary Test)
- Expected Output: Menu 5: Keluar dari sistem
- Actual Output  : Menu 5: Keluar dari sistem
- Status         : PASS

Test 4
- Input          : 0
- Kondisi        : Invalid (Boundary tepat di bawah batas valid)
- Expected Output: Error: Pilihan menu tidak valid!
- Actual Output  : Error: Pilihan menu tidak valid!
- Status         : PASS

Test 5
- Input          : 6
- Kondisi        : Invalid (Boundary tepat di atas batas valid)
- Expected Output: Error: Pilihan menu tidak valid!
- Actual Output  : Error: Pilihan menu tidak valid!
- Status         : PASS

Test 6
- Input          : 99
- Kondisi        : Invalid (Di luar batas pilihan)
- Expected Output: Error: Pilihan menu tidak valid!
- Actual Output  : Error: Pilihan menu tidak valid!
- Status         : PASS

Test 7
- Input          : -1
- Kondisi        : Invalid (Input Negatif)
- Expected Output: Error: Pilihan menu tidak valid!
- Actual Output  : Error: Pilihan menu tidak valid!
- Status         : PASS

Test 8
- Input          : 9999999
- Kondisi        : Invalid (Input Angka Sangat Besar)
- Expected Output: Error: Pilihan menu tidak valid!
- Actual Output  : Error: Pilihan menu tidak valid!
- Status         : PASS

Test 9
- Input          : -9999
- Kondisi        : Invalid (Input Negatif Besar)
- Expected Output: Error: Pilihan menu tidak valid!
- Actual Output  : Error: Pilihan menu tidak valid!
- Status         : PASS
*/
