#include <iostream>

// Praktikum 7 — Sistem Nilai
int main() {
  int pilihan;
  double nilai = -1; // -1 menandakan belum ada nilai yang diinput

  do {
    std::cout << "\n===== SISTEM PENGELOLAAN NILAI =====" << std::endl;
    std::cout << "1. Input Nilai" << std::endl;
    std::cout << "2. Lihat Nilai" << std::endl;
    std::cout << "3. Tentukan Grade" << std::endl;
    std::cout << "4. Keluar" << std::endl;
    std::cout << "Pilih menu (1-4): ";
    std::cin >> pilihan;

    switch (pilihan) {
    case 1:
      std::cout << "--- Input Nilai Mahasiswa ---" << std::endl;
      std::cout << "Masukkan nilai angka (0 - 100): ";
      std::cin >> nilai;

      if (nilai < 0 || nilai > 100) {
        std::cout
            << "Peringatan: Nilai harus berada dalam rentang 0 hingga 100!"
            << std::endl;
        nilai = -1; // reset karena tidak valid
      } else {
        std::cout << "Nilai " << nilai << " berhasil disimpan." << std::endl;
      }
      break;

    case 2:
      std::cout << "--- Lihat Nilai ---" << std::endl;
      if (nilai < 0) {
        std::cout << "Belum ada nilai yang diinput. Silakan pilih menu 1 "
                     "terlebih dahulu."
                  << std::endl;
      } else {
        std::cout << "Nilai angka saat ini: " << nilai << std::endl;
      }
      break;

    case 3:
      std::cout << "--- Tentukan Grade ---" << std::endl;
      if (nilai < 0) {
        std::cout << "Belum ada nilai yang diinput. Silakan input nilai "
                     "terlebih dahulu di menu 1."
                  << std::endl;
      } else {
        char grade;
        std::string keterangan;

        if (nilai >= 85) {
          grade = 'A';
          keterangan = "Sangat Memuaskan";
        } else if (nilai >= 75) {
          grade = 'B';
          keterangan = "Memuaskan";
        } else if (nilai >= 65) {
          grade = 'C';
          keterangan = "Cukup";
        } else if (nilai >= 50) {
          grade = 'D';
          keterangan = "Kurang";
        } else {
          grade = 'E';
          keterangan = "Gagal";
        }

        std::cout << "Nilai Angka : " << nilai << std::endl;
        std::cout << "Grade Huruf : " << grade << std::endl;
        std::cout << "Keterangan  : " << keterangan << std::endl;
      }
      break;

    case 4:
      std::cout << "Keluar dari sistem pengelolaan nilai. Terima kasih!"
                << std::endl;
      break;

    default:
      std::cout << "Pilihan menu tidak valid. Silakan pilih 1-4." << std::endl;
      break;
    }
  } while (pilihan != 4);

  return 0;
}
