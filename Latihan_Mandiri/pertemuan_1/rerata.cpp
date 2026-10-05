// Lab porting: pindahkan rerata.py ke C++.
// Lengkapi tiga bagian bertanda TODO, lalu bangun dengan baseline kelas.
#include <iomanip>
#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;
    double harian = 85;
    double kehadiran = 100;
    double ratarata;

    // TODO 1: hitung jumlah ketiga nilai. Di C++ tipe variabel wajib ditulis.
    double jumlah = tugas + uts + uas + harian + kehadiran;

    // TODO 2: hitung rata-rata. Ingat, int dibagi int membuang pecahannya.
    //         Pakai tipe double dan pastikan pembagiannya bukan pembagian bilangan bulat.
    double rerata = jumlah / 5;

    // TODO 3: cetak hasil dengan dua angka di belakang koma, sama seperti versi Python.
    std::cout << "Jumlah    : " << jumlah << "\n";
    std::cout << "Rata-rata : " << rerata << "\n";
    return 0;
}
//Data yang terpengaruh adalah variabel jumlah dan variabel rerata, karena sebelumnya perhitungan harus disesuaikan agar memasukkan kelima nilai.