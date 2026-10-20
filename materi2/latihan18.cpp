#include <iostream>

// Studi Kasus 8 — Sistem Kemahasiswaan
int main() {
  int menu;

  std::cout << "===== SISTEM INFORMASI KEMAHASISWAAN =====" << std::endl;
  std::cout << "1. Beasiswa" << std::endl;
  std::cout << "2. Organisasi Mahasiswa" << std::endl;
  std::cout << "3. Surat Aktif Kuliah" << std::endl;
  std::cout << "4. Kegiatan Mahasiswa" << std::endl;
  std::cout << "5. Konseling Akademik" << std::endl;
  std::cout << "6. Keluar" << std::endl;
  std::cout << "Pilih menu layanan (1-6): ";
  std::cin >> menu;

  switch (menu) {
  case 1:
    std::cout << "--- Layanan Beasiswa ---" << std::endl;
    std::cout << "Informasi: Pendaftaran Beasiswa KIP-Kuliah dan Prestasi dibuka hingga akhir bulan." << std::endl;
    std::cout << "Syarat   : Minimal IPK 3.25, scan transkrip nilai, dan surat rekomendasi fakultas." << std::endl;
    break;

  case 2:
    std::cout << "--- Organisasi Mahasiswa ---" << std::endl;
    std::cout << "Informasi: Terdapat 15 UKM dan lembaga kemahasiswaan (BEM, DEMA, HIMA)." << std::endl;
    std::cout << "Pendaftaran anggota baru dibuka setiap awal semester ganjil melalui portal Ormawa." << std::endl;
    break;

  case 3:
    std::cout << "--- Pengajuan Surat Aktif Kuliah ---" << std::endl;
    std::cout << "Informasi: Surat aktif kuliah diproses secara online maksimal 2 hari kerja." << std::endl;
    std::cout << "Dokumen  : Bukti pembayaran UKT semester berjalan dan KRS yang sudah disetujui DPA." << std::endl;
    break;

  case 4:
    std::cout << "--- Informasi Kegiatan Mahasiswa ---" << std::endl;
    std::cout << "Informasi: Agenda terdekat adalah Seminar Kewirausahaan dan Lomba Karya Tulis Ilmiah." << std::endl;
    std::cout << "Poin SKPI: Setiap partisipasi kegiatan akan terdata pada Sistem Kredit Prestasi." << std::endl;
    break;

  case 5:
    std::cout << "--- Konseling Akademik & Psikologi ---" << std::endl;
    std::cout << "Informasi: Layanan bimbingan gratis bersama psikolog dan dosen pembimbing." << std::endl;
    std::cout << "Jadwal   : Senin - Kamis, pukul 09.00 - 15.00 WIB (Gedung Student Center Lt. 2)." << std::endl;
    break;

  case 6:
    std::cout << "Terima kasih telah menggunakan Sistem Kemahasiswaan." << std::endl;
    break;

  default:
    std::cout << "Pilihan menu layanan tidak valid! Silakan masukkan angka 1-6." << std::endl;
    break;
  }

  return 0;
}
