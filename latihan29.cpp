#include <iostream>

// Debugging 4 — Logic Error
int main() {
  int jenis;
  int lama;
  int tarifPerJam = 0;

  std::cout << "===== SISTEM PARKIR =====" << std::endl;
  std::cout << "1. Motor (Rp2.000/jam)" << std::endl;
  std::cout << "2. Mobil (Rp5.000/jam)" << std::endl;
  std::cout << "3. Bus   (Rp10.000/jam)" << std::endl;
  std::cout << "Masukkan jenis kendaraan (1-3): ";
  std::cin >> jenis;

  switch (jenis) {
  case 1:
    tarifPerJam = 2000;
    break;
  case 2:
    tarifPerJam = 5000;
    break;
  case 3:
    tarifPerJam = 10000;
    break;
  default:
    std::cout << "Jenis kendaraan tidak valid!" << std::endl;
    return 0;
  }

  std::cout << "Masukkan lama parkir (jam): ";
  std::cin >> lama;

  if (lama <= 0) {
    std::cout << "Error: Lama parkir harus lebih dari 0 jam!" << std::endl;
    return 0;
  }

  // Menghitung total biaya parkir dengan mengalikan tarif per jam dengan lama
  // parkir
  int totalTarif = tarifPerJam * lama;

  std::cout << "--- Rincian Pembayaran ---" << std::endl;
  std::cout << "Tarif per jam : Rp" << tarifPerJam << std::endl;
  std::cout << "Lama parkir   : " << lama << " jam" << std::endl;
  std::cout << "Total tarif   : Rp" << totalTarif << std::endl;

  return 0;
}

// ANALISIS LOGIC ERROR & PERBAIKAN:
// Masalah Awal: Program awal hanya menentukan nilai variabel 'tarif' per jam
// namun langsung mencetaknya, sehingga tidak memperhitungkan variabel
// durasi/lama waktu parkir kendaraan (biaya selalu tetap berapapun lamanya).
// Perbaikan: Ditambahkan input 'lama' (durasi parkir dalam jam) dan variabel
// 'totalTarif = tarifPerJam * lama'.
