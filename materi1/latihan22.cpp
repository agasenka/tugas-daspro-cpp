#include <iostream>
#include <string>

int main() {
  std::string nama = "Mahasiswa";
  std::string nim = "2400018001";
  std::string prodi = "Informatika";

  std::string daftarKRS = "Dasar Pemrograman (3 SKS)";
  int totalSKS = 3;

  double nilai = -1;
  long long tagihanUKT = 3000000;
  long long terbayar = 0;

  int menu;

  do {
    std::cout << "\n===== SISTEM INFORMASI AKADEMIK =====\n";
    std::cout << "1. Data Mahasiswa\n";
    std::cout << "2. KRS\n";
    std::cout << "3. Nilai\n";
    std::cout << "4. Jadwal\n";
    std::cout << "5. Keuangan\n";
    std::cout << "6. Keluar\n";
    std::cout << "Pilihan: ";
    std::cin >> menu;

    switch (menu) {
    case 1:
      std::cout << "\nNama  : " << nama << "\n";
      std::cout << "NIM   : " << nim << "\n";
      std::cout << "Prodi : " << prodi << "\n";
      break;

    case 2: {
      int subKrs;
      std::cout << "\n1. Tambah Mata Kuliah\n2. Lihat KRS\nPilihan: ";
      std::cin >> subKrs;
      switch (subKrs) {
      case 1: {
        int pilihMatkul;
        std::cout << "1. Algoritma (3 SKS)\n2. Basis Data (3 SKS)\nPilihan: ";
        std::cin >> pilihMatkul;
        switch (pilihMatkul) {
        case 1:
          daftarKRS += ", Algoritma (3 SKS)";
          totalSKS += 3;
          std::cout << "Berhasil menambahkan Algoritma\n";
          break;
        case 2:
          daftarKRS += ", Basis Data (3 SKS)";
          totalSKS += 3;
          std::cout << "Berhasil menambahkan Basis Data\n";
          break;
        default:
          std::cout << "Mata kuliah tidak valid\n";
          break;
        }
        break;
      }
      case 2:
        std::cout << "KRS: " << daftarKRS << "\nTotal SKS: " << totalSKS << "\n";
        break;
      default:
        std::cout << "Pilihan KRS tidak valid\n";
        break;
      }
      break;
    }

    case 3: {
      int subNilai;
      std::cout << "\n1. Input Nilai\n2. Lihat Nilai\nPilihan: ";
      std::cin >> subNilai;
      switch (subNilai) {
      case 1:
        std::cout << "Masukkan nilai (0-100): ";
        std::cin >> nilai;
        if (nilai < 0 || nilai > 100) {
          std::cout << "Nilai tidak valid\n";
          nilai = -1;
        } else {
          std::cout << "Nilai disimpan\n";
        }
        break;
      case 2:
        if (nilai < 0) {
          std::cout << "Nilai belum diinput\n";
        } else {
          char grade;
          if (nilai >= 85) grade = 'A';
          else if (nilai >= 75) grade = 'B';
          else if (nilai >= 60) grade = 'C';
          else if (nilai >= 50) grade = 'D';
          else grade = 'E';
          std::cout << "Nilai: " << nilai << " (Grade: " << grade << ")\n";
        }
        break;
      default:
        std::cout << "Pilihan nilai tidak valid\n";
        break;
      }
      break;
    }

    case 4:
      std::cout << "\nJadwal:\n- Senin: Dasar Pemrograman (08.00)\n- Rabu: Algoritma (10.00)\n";
      break;

    case 5: {
      long long sisa = tagihanUKT - terbayar;
      std::cout << "\nTagihan: Rp" << tagihanUKT << "\nTerbayar: Rp" << terbayar << "\nSisa: Rp" << sisa << "\n";
      if (sisa > 0) {
        long long bayar;
        std::cout << "Masukkan nominal bayar: Rp";
        std::cin >> bayar;
        if (bayar > 0 && bayar <= sisa) {
          terbayar += bayar;
          std::cout << "Pembayaran berhasil. Sisa tagihan: Rp" << (tagihanUKT - terbayar) << "\n";
        } else {
          std::cout << "Nominal pembayaran tidak valid\n";
        }
      }
      break;
    }

    case 6:
      std::cout << "Keluar dari program\n";
      break;

    default:
      std::cout << "Pilihan tidak valid\n";
      break;
    }

  } while (menu != 6);

  return 0;
}
