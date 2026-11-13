// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, dan empat komponen nilai, lalu menampilkannya sebagai kartu.
// Lengkapi bagian TODO. Versi ini belum menghitung apa-apa; itu tugas Pertemuan 3.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string npm;
    string kelas;
    int semester;
    // TODO 1: deklarasikan variabel untuk nama dan NPM.
    //         Nama bisa lebih dari satu kata. NPM adalah deretan angka yang tidak pernah
    //         dihitung, dan bisa diawali 0, jadi pikirkan tipe yang tepat.

    // TODO 2: deklarasikan empat variabel nilai: kehadiran, mingguan, uts, uas.
    //         Nilai bisa berisi pecahan seperti 85.5.
    double kehadiran, mingguan, uts, uas;

    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);
    // TODO 3: baca nama. Ingat, nama bisa mengandung spasi.

    cout << "NPM       : ";
    getline(cin, npm);
    // TODO 4: baca NPM.

    cout << "Kelas     : ";
    getline(cin, kelas);
    // TODO 5: baca kelas.

    cout << "Semester     : ";
    cin >> semester;
    // TODO 6: baca Semester.

    cout << "Kehadiran : ";
    cin >> kehadiran;

    cout << "Mingguan  : ";
    cin >> mingguan;

    cout << "UTS       : ";
    cin >> uts;

    cout << "UAS       : ";
    cin >> uas;
    // TODO 7: baca keempat komponen nilai, satu per satu, dengan prompt seperti di atas.

    cout << "\n--- Kartu Data Mahasiswa ---\n";

    cout << "Nama       : " << nama << "\n";
    cout << "NPM        : " << npm << "\n";
    cout << "Kelas      : " << kelas << "\n";
    cout << "Semester      : " << semester << "\n";
    cout << "Kehadiran  : " << kehadiran << "\n";
    cout << "Mingguan   : " << mingguan << "\n";
    cout << "UTS        : " << uts << "\n";
    cout << "UAS        : " << uas << "\n";
    // TODO 8: tampilkan semua data yang tadi dibaca, satu baris per data, rata seperti prompt.

    return 0;
}