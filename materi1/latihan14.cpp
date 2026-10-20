#include <iostream>
#include <string>

int main() {
  int menu;
  std::cout << "===== SISTEM AKADEMIK =====\n";
  std::cout << "1. Biodata\n2. KRS\n3. Nilai\n4. Jadwal\n5. Transkrip\n6. Keluar\n";
  std::cout << "Pilih menu (1-6): ";
  std::cin >> menu;

  std::string nama = "Mahasiswa";
  std::string nim = "12345678";
  std::string prodi = "Informatika";
  int semester = 3;

  switch (menu) {
  case 1:
    std::cout << "Nama     : " << nama << "\n";
    std::cout << "NIM      : " << nim << "\n";
    std::cout << "Prodi    : " << prodi << "\n";
    std::cout << "Semester : " << semester << "\n";
    break;
  case 2:
    std::cout << "Menu KRS Mahasiswa\n";
    break;
  case 3:
    std::cout << "Menu Nilai Semester\n";
    break;
  case 4:
    std::cout << "Menu Jadwal Kuliah\n";
    break;
  case 5:
    std::cout << "Menu Transkrip Akademik\n";
    break;
  case 6:
    std::cout << "Program selesai\n";
    break;
  default:
    std::cout << "Menu tidak tersedia\n";
    break;
  }

  return 0;
}
