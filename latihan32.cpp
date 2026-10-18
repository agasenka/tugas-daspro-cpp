#include <iostream>
#include <string>

// Challenge 2 — Tiket Fasilitas Kampus
int main() {
  int pilihan;
  int lama;
  long long tarifPerJam = 0;
  std::string namaFasilitas;

  std::cout << "===== RESERVASI FASILITAS KAMPUS =====" << std::endl;
  std::cout << "1. Lapangan Olahraga (Rp50.000 / jam)" << std::endl;
  std::cout << "2. Auditorium         (Rp250.000 / jam)" << std::endl;
  std::cout << "3. Laboratorium Komp (Rp100.000 / jam)" << std::endl;
  std::cout << "4. Ruang Seminar      (Rp150.000 / jam)" << std::endl;
  std::cout << "Pilih fasilitas (1-4): ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    namaFasilitas = "Lapangan Olahraga";
    tarifPerJam = 50000;
    break;
  case 2:
    namaFasilitas = "Auditorium";
    tarifPerJam = 250000;
    break;
  case 3:
    namaFasilitas = "Laboratorium Komputer";
    tarifPerJam = 100000;
    break;
  case 4:
    namaFasilitas = "Ruang Seminar";
    tarifPerJam = 150000;
    break;
  default:
    std::cout << "Error: Pilihan fasilitas tidak valid!" << std::endl;
    return 0;
  }

  std::cout << "Masukkan lama penggunaan (jam): ";
  std::cin >> lama;

  if (lama <= 0) {
    std::cout << "Error: Lama penggunaan harus minimal 1 jam!" << std::endl;
    return 0;
  }

  long long totalBiaya = tarifPerJam * lama;

  // Diskon khusus jika peminjaman lebih dari 4 jam (diskon 10%)
  double diskon = 0;
  if (lama > 4) {
    diskon = totalBiaya * 0.10;
  }
  double totalBayar = totalBiaya - diskon;

  std::cout << "\n===== BUKTI TIKET RESERVASI =====" << std::endl;
  std::cout << "Fasilitas Kampus : " << namaFasilitas << std::endl;
  std::cout << "Tarif per jam    : Rp" << tarifPerJam << std::endl;
  std::cout << "Lama peminjaman  : " << lama << " jam" << std::endl;
  std::cout << "Subtotal         : Rp" << totalBiaya << std::endl;
  if (diskon > 0) {
    std::cout << "Diskon (>4 jam)  : Rp" << diskon << std::endl;
  }
  std::cout << "---------------------------------" << std::endl;
  std::cout << "Total Pembayaran : Rp" << totalBayar << std::endl;
  std::cout << "=================================" << std::endl;

  return 0;
}
