#include <iostream>

// Challenge 3 — Sistem Antrian
int main() {
  int nomorTerakhir = 0;
  int nomorDipanggil = 0;
  int pilihan;

  do {
    std::cout << "\n===== SISTEM ANTRIAN LAYANAN =====" << std::endl;
    std::cout << "1. Ambil Nomor Antrian" << std::endl;
    std::cout << "2. Panggil Nomor Antrian" << std::endl;
    std::cout << "3. Lihat Nomor Antrian" << std::endl;
    std::cout << "4. Reset Antrian" << std::endl;
    std::cout << "5. Keluar" << std::endl;
    std::cout << "Pilih menu (1-5): ";
    std::cin >> pilihan;

    switch (pilihan) {
    case 1:
      nomorTerakhir++;
      std::cout << "Nomor antrian berhasil diambil!" << std::endl;
      std::cout << "Nomor antrian Anda : [" << nomorTerakhir << "]"
                << std::endl;
      std::cout << "Sisa antrian di depan: "
                << (nomorTerakhir - nomorDipanggil - 1) << " orang"
                << std::endl;
      break;

    case 2:
      if (nomorDipanggil >= nomorTerakhir) {
        std::cout << "Pemberitahuan: Belum ada antrian baru atau semua antrian "
                     "sudah selesai dipanggil."
                  << std::endl;
      } else {
        nomorDipanggil++;
        std::cout << ">>> MEMANGGIL NOMOR ANTRIAN: [" << nomorDipanggil
                  << "] <<<" << std::endl;
        std::cout << "Silakan menuju ke loket layanan." << std::endl;
      }
      break;

    case 3:
      std::cout << "--- Status Antrian Saat Ini ---" << std::endl;
      if (nomorTerakhir == 0) {
        std::cout << "Belum ada antrian yang terdaftar hari ini." << std::endl;
      } else {
        std::cout << "Nomor antrian terakhir diambil : [" << nomorTerakhir
                  << "]" << std::endl;
        std::cout << "Nomor antrian sedang dilayani  : [" << nomorDipanggil
                  << "]" << std::endl;
        std::cout << "Jumlah antrian yang menunggu   : "
                  << (nomorTerakhir - nomorDipanggil) << " orang" << std::endl;
      }
      break;

    case 4: {
      char konfirmasi;
      std::cout << "Apakah Anda yakin ingin mereset seluruh antrian? (y/n): ";
      std::cin >> konfirmasi;
      if (konfirmasi == 'y' || konfirmasi == 'Y') {
        nomorTerakhir = 0;
        nomorDipanggil = 0;
        std::cout << "Sistem antrian berhasil di-reset kembali ke 0."
                  << std::endl;
      } else {
        std::cout << "Reset dibatalkan." << std::endl;
      }
      break;
    }

    case 5:
      std::cout << "Keluar dari sistem antrian. Terima kasih." << std::endl;
      break;

    default:
      std::cout << "Pilihan menu tidak valid. Silakan pilih 1-5." << std::endl;
      break;
    }
  } while (pilihan != 5);

  return 0;
}
