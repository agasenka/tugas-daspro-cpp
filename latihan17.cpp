#include <iostream>

// Studi Kasus 7 — Layanan Laboratorium
int main() {
  int kode;

  std::cout << "===== LAYANAN LABORATORIUM KOMPUTER =====" << std::endl;
  std::cout << "1. Peminjaman Lab" << std::endl;
  std::cout << "2. Peminjaman Komputer" << std::endl;
  std::cout << "3. Instalasi Software" << std::endl;
  std::cout << "4. Reset Password" << std::endl;
  std::cout << "5. Keluar" << std::endl;
  std::cout << "Masukkan kode layanan (1-5): ";
  std::cin >> kode;

  switch (kode) {
  case 1:
    std::cout << "--- Prosedur Peminjaman Lab ---" << std::endl;
    std::cout << "1. Ajukan surat permohonan ke kepala lab minimal H-3." << std::endl;
    std::cout << "2. Lampirkan daftar peserta dan jadwal kegiatan." << std::endl;
    std::cout << "3. Konfirmasi persetujuan ke teknisi lab." << std::endl;
    break;

  case 2:
    std::cout << "--- Prosedur Peminjaman Komputer ---" << std::endl;
    std::cout << "1. Isi buku tamu laboratorium." << std::endl;
    std::cout << "2. Serahkan KTM (Kartu Tanda Mahasiswa) kepada asisten lab." << std::endl;
    std::cout << "3. Gunakan PC sesuai nomor workstation yang ditentukan." << std::endl;
    break;

  case 3:
    std::cout << "--- Prosedur Instalasi Software ---" << std::endl;
    std::cout << "1. Isi formulir permintaan instalasi software perkuliahan." << std::endl;
    std::cout << "2. Pastikan software memiliki lisensi resmi atau open source." << std::endl;
    std::cout << "3. Teknisi lab akan melakukan instalasi secara terpusat." << std::endl;
    break;

  case 4:
    std::cout << "--- Prosedur Reset Password ---" << std::endl;
    std::cout << "1. Tunjukkan identitas KTM asli ke admin lab." << std::endl;
    std::cout << "2. Admin melakukan verifikasi email kampus (NIM)." << std::endl;
    std::cout << "3. Password baru sementara akan dikirimkan ke email kampus." << std::endl;
    break;

  case 5:
    std::cout << "Terima kasih telah menggunakan layanan laboratorium." << std::endl;
    break;

  default:
    std::cout << "Kode layanan tidak valid. Silakan pilih angka 1-5." << std::endl;
    break;
  }

  return 0;
}
