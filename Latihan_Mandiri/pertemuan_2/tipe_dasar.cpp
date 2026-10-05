// Lima tipe data yang kita pakai sepanjang semester.
// Bangun, jalankan, lalu ubah nilainya dan lihat apa yang berubah.
#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlah_mahasiswa = 32;          // bilangan bulat
    int nilai = 85.7;
    double nilai_uts = 78.5;            // bilangan pecahan
    char huruf_mutu = 'A';              // satu karakter, diapit kutip tunggal
    bool lulus = false;                  // benar atau salah
    string nama = "Siti Aminah";   // teks, diapit kutip ganda

    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Nilai            : " << nilai << "\n";
    cout << "Nilai UTS        : " << nilai_uts << "\n";
    cout << "Huruf mutu       : " << huruf_mutu << "\n";
    cout << boolalpha;
    cout << "Lulus            : " << lulus << "\n";
    cout << "Nama             : " << nama << "\n";

    cout << "\nUkuran di memori (byte): int " << sizeof(int)
              << ", double " << sizeof(double)
              << ", char " << sizeof(char)
              << ", bool " << sizeof(bool) << "\n";

    return 0;
}

// catatan : 
//int nilai menggunakan tanda {} hasilnya tipe_dasar.cpp: In function 'int main()':
//tipe_dasar.cpp:10:18: error: narrowing conversion of '8.5700000000000003e+1' from 'double' to 'int' [-Wnarrowing]
//  10 |     int nilai = {85.7};
//sedangkan int nilai tidak menggunakan tanda {} saat dijalankan tidak ada pesan error ataupun warning