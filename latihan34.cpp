#include <iostream>
#include <string>

// 12. MINI PROJECT — SISTEM INFORMASI AKADEMIK MINI
int main() {
  std::string nama = "Mahasigma";
  std::string nim = "267051234";
  std::string prodi = "Informatika";

  std::string daftarKRS =
      "Dasar Pemrograman (3 SKS), Matematika Diskrit (3 SKS)";
  int totalSKS = 6;

  double nilaiAngka = -1;

  long long tagihanUKT = 3500000;
  long long totalTerbayar = 0;

  int pilihanUtama;

  do {
    std::cout << "        SISTEM INFORMASI AKADEMIK         " << std::endl;
    std::cout << "1. Data Mahasiswa" << std::endl;
    std::cout << "2. KRS" << std::endl;
    std::cout << "3. Nilai" << std::endl;
    std::cout << "4. Jadwal Kuliah" << std::endl;
    std::cout << "5. Keuangan" << std::endl;
    std::cout << "6. Keluar" << std::endl;
    std::cout << "Pilih menu (1-6): ";
    std::cin >> pilihanUtama;

    switch (pilihanUtama) {
    case 1: {
      int subData;
      std::cout << "\n--- [1] DATA MAHASISWA ---" << std::endl;
      std::cout << "1. Lihat Data Mahasiswa" << std::endl;
      std::cout << "2. Ubah Data Mahasiswa" << std::endl;
      std::cout << "Pilih (1-2): ";
      std::cin >> subData;

      switch (subData) {
      case 1:
        std::cout << "\n=== PROFIL MAHASISWA ===" << std::endl;
        std::cout << "Nama          : " << nama << std::endl;
        std::cout << "NIM           : " << nim << std::endl;
        std::cout << "Program Studi : " << prodi << std::endl;
        break;
      case 2:
        std::cout << "\n=== UBAH PROFIL MAHASISWA ===" << std::endl;
        std::cout << "Masukkan Nama Baru: ";
        std::cin.ignore();
        std::getline(std::cin, nama);
        std::cout << "Masukkan NIM Baru : ";
        std::cin >> nim;
        std::cout << "Masukkan Prodi    : ";
        std::cin.ignore();
        std::getline(std::cin, prodi);
        std::cout << "Data mahasiswa berhasil diperbarui!" << std::endl;
        break;
      default:
        std::cout << "Pilihan submenu Data Mahasiswa tidak valid!" << std::endl;
        break;
      }
      break;
    }

    case 2: {
      int subKRS;
      std::cout << "\n--- [2] KARTU RENCANA STUDI (KRS) ---" << std::endl;
      std::cout << "1. Lihat KRS" << std::endl;
      std::cout << "2. Tambah Mata Kuliah" << std::endl;
      std::cout << "3. Reset KRS" << std::endl;
      std::cout << "Pilih submenu (1-3): ";
      std::cin >> subKRS;

      switch (subKRS) {
      case 1:
        std::cout << "\n=== DAFTAR KRS MAHASISWA ===" << std::endl;
        std::cout << "Mata Kuliah : " << daftarKRS << std::endl;
        std::cout << "Total Beban : " << totalSKS << " SKS" << std::endl;
        break;
      case 2: {
        int pilihMatkul;
        std::cout << "\n=== PILIH MATA KULIAH TAMBAHAN ===" << std::endl;
        std::cout << "1. Struktur Data (3 SKS)" << std::endl;
        std::cout << "2. Basis Data (3 SKS)" << std::endl;
        std::cout << "3. Algoritma Pemrograman (3 SKS)" << std::endl;
        std::cout << "Pilih (1-3): ";
        std::cin >> pilihMatkul;

        switch (pilihMatkul) {
        case 1:
          daftarKRS += ", Struktur Data (3 SKS)";
          totalSKS += 3;
          std::cout << "Mata kuliah Struktur Data berhasil ditambahkan!"
                    << std::endl;
          break;
        case 2:
          daftarKRS += ", Basis Data (3 SKS)";
          totalSKS += 3;
          std::cout << "Mata kuliah Basis Data berhasil ditambahkan!"
                    << std::endl;
          break;
        case 3:
          daftarKRS += ", Algoritma Pemrograman (3 SKS)";
          totalSKS += 3;
          std::cout << "Mata kuliah Algoritma Pemrograman berhasil ditambahkan!"
                    << std::endl;
          break;
        default:
          std::cout << "Pilihan mata kuliah tidak valid!" << std::endl;
          break;
        }
        break;
      }
      case 3:
        daftarKRS = "Kosong";
        totalSKS = 0;
        std::cout << "Seluruh daftar KRS telah di-reset!" << std::endl;
        break;
      default:
        std::cout << "Pilihan submenu KRS tidak valid!" << std::endl;
        break;
      }
      break;
    }

    case 3: {
      int subNilai;
      std::cout << "\n--- [3] NILAI & GRADE AKADEMIK ---" << std::endl;
      std::cout << "1. Input Nilai Angka" << std::endl;
      std::cout << "2. Lihat Nilai & Transkrip Grade" << std::endl;
      std::cout << "Pilih (1-2): ";
      std::cin >> subNilai;

      switch (subNilai) {
      case 1:
        std::cout << "Masukkan Nilai Angka (0 - 100): ";
        std::cin >> nilaiAngka;
        if (nilaiAngka < 0 || nilaiAngka > 100) {
          std::cout
              << "Error: Nilai tidak valid! Nilai harus di antara 0 sampai 100."
              << std::endl;
          nilaiAngka = -1;
        } else {
          std::cout << "Nilai " << nilaiAngka << " berhasil disimpan!"
                    << std::endl;
        }
        break;
      case 2:
        if (nilaiAngka < 0) {
          std::cout << "Belum ada nilai yang diinput. Silakan input nilai "
                       "terlebih dahulu!"
                    << std::endl;
        } else {
          char grade;
          std::string predikat;

          if (nilaiAngka >= 85) {
            grade = 'A';
            predikat = "Sangat Memuaskan";
          } else if (nilaiAngka >= 75) {
            grade = 'B';
            predikat = "Memuaskan";
          } else if (nilaiAngka >= 60) {
            grade = 'C';
            predikat = "Cukup";
          } else if (nilaiAngka >= 50) {
            grade = 'D';
            predikat = "Kurang";
          } else {
            grade = 'E';
            predikat = "Gagal";
          }

          std::cout << "\n=== TRANSKRIP HASIL STUDI ===" << std::endl;
          std::cout << "Nilai Angka : " << nilaiAngka << std::endl;
          std::cout << "Grade Huruf : " << grade << std::endl;
          std::cout << "Predikat    : " << predikat << std::endl;
        }
        break;
      default:
        std::cout << "Pilihan submenu Nilai tidak valid!" << std::endl;
        break;
      }
      break;
    }

    case 4:
      std::cout << "\n--- [4] JADWAL KULIAH SEMESTER ---" << std::endl;
      std::cout << "Senin   (08.00 - 10.30): Dasar Pemrograman (Lab 2)"
                << std::endl;
      std::cout << "Rabu    (10.00 - 12.30): Matematika Diskrit (R.301)"
                << std::endl;
      std::cout << "Jumat   (13.30 - 15.00): Pengantar TI (R.204)" << std::endl;
      break;

    case 5: {
      int subKeuangan;
      std::cout << "\n--- [5] KEUANGAN MAHASISWA ---" << std::endl;
      std::cout << "1. Cek Rincian Tagihan UKT" << std::endl;
      std::cout << "2. Bayar Tagihan" << std::endl;
      std::cout << "Pilih (1-2): ";
      std::cin >> subKeuangan;

      switch (subKeuangan) {
      case 1: {
        long long sisaTagihan = tagihanUKT - totalTerbayar;
        std::cout << "\n=== RINCIAN TAGIHAN KEUANGAN ===" << std::endl;
        std::cout << "Total Tagihan UKT : Rp" << tagihanUKT << std::endl;
        std::cout << "Total Terbayar    : Rp" << totalTerbayar << std::endl;
        std::cout << "Sisa Tagihan      : Rp" << sisaTagihan << std::endl;
        std::cout << "Status Pembayaran : "
                  << (sisaTagihan == 0 ? "LUNAS" : "BELUM LUNAS") << std::endl;
        break;
      }
      case 2: {
        long long sisaTagihan = tagihanUKT - totalTerbayar;
        if (sisaTagihan <= 0) {
          std::cout << "Tagihan Anda sudah lunas sepenuhnya!" << std::endl;
        } else {
          long long nominalBayar;
          std::cout << "Sisa tagihan yang harus dibayar: Rp" << sisaTagihan
                    << std::endl;
          std::cout << "Masukkan nominal pembayaran: Rp";
          std::cin >> nominalBayar;

          if (nominalBayar <= 0) {
            std::cout << "Error: Nominal pembayaran harus lebih besar dari 0!"
                      << std::endl;
          } else if (nominalBayar > sisaTagihan) {
            std::cout << "Error: Nominal melebihi sisa tagihan! (Maksimal: Rp"
                      << sisaTagihan << ")" << std::endl;
          } else {
            totalTerbayar += nominalBayar;
            std::cout << "Pembayaran sebesar Rp" << nominalBayar
                      << " berhasil diproses!" << std::endl;
            std::cout << "Sisa tagihan sekarang: Rp"
                      << (tagihanUKT - totalTerbayar) << std::endl;
          }
        }
        break;
      }
      default:
        std::cout << "Pilihan submenu Keuangan tidak valid!" << std::endl;
        break;
      }
      break;
    }

    case 6:
      std::cout << "\nKeluar dari Sistem Informasi Akademik. Sampai jumpa!"
                << std::endl;
      break;

    default:
      std::cout
          << "\nError: Pilihan menu utama tidak valid! Silakan pilih angka 1-6."
          << std::endl;
      break;
    }

  } while (pilihanUtama != 6);

  return 0;
}
