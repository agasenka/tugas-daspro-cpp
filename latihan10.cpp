#include <iostream>

int main() {
  std::cout << "===== LATIHAN 10: PILIH STRUKTUR =====" << std::endl;
  std::cout << "1. Menu 1-6 -> switch" << std::endl;
  std::cout << "   Alasan: Menggunakan nilai konstan diskrit bertipe integer "
               "dengan perbandingan nilai tunggal."
            << std::endl;
  std::cout << "2. Nilai >= 80 -> if" << std::endl;
  std::cout << "   Alasan: Menggunakan rentang nilai dengan operator "
               "relasional (>=), tidak bisa langsung di-switch."
            << std::endl;
  std::cout << "3. Operator + - * / -> switch" << std::endl;
  std::cout << "   Alasan: Karakter berupa nilai diskrit konstan bertipe char "
               "('+', '-', '*', '/')."
            << std::endl;
  std::cout << "4. IPK >= 3.5 && status aktif -> if" << std::endl;
  std::cout << "   Alasan: Menggunakan kondisi majemuk dengan kombinasi "
               "operator relasional dan logika (&&)."
            << std::endl;
  std::cout << "5. Kode fakultas A-D -> switch" << std::endl;
  std::cout << "   Alasan: Karakter berupa nilai diskrit konstan ('A', 'B', "
               "'C', 'D')."
            << std::endl;

  return 0;
}
