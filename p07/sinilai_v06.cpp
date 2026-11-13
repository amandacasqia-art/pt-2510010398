#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Membaca nilai angka dari satu baris
double bacaNilai(string prompt) {
    string input;
    double nilai;
    char sisa;

    while (true) {
        cout << prompt;
        getline(cin, input);

        stringstream ss(input);

        if (ss >> nilai && !(ss >> sisa) &&
            nilai >= 0 && nilai <= 100) {
            return nilai;
        }

        cout << "Harus angka 0 sampai 100. ";
    }
}

// Memeriksa nama mahasiswa
bool validasiNama(string nama) {
    bool adaHuruf = false;

    if (nama.empty()) {
        cout << "Nama tidak boleh kosong.\n";
        return false;
    }

    for (char karakter : nama) {
        unsigned char c = karakter;

        if (isalpha(c)) {
            adaHuruf = true;
        } else if (karakter != ' ') {
            cout << "Nama tidak boleh mengandung angka.\n";
            return false;
        }
    }

    if (!adaHuruf) {
        cout << "Nama tidak boleh kosong.\n";
        return false;
    }

    return true;
}

// Mengubah nama menjadi huruf kapital di awal kata
void rapikanNama(string &nama) {
    bool awalKata = true;

    for (size_t i = 0; i < nama.length(); i++) {
        unsigned char c = nama[i];

        if (nama[i] == ' ') {
            awalKata = true;
        } else {
            if (awalKata) {
                nama[i] = toupper(c);
                awalKata = false;
            } else {
                nama[i] = tolower(c);
            }
        }
    }
}

int main() {
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    int jumlah_mahasiswa;

    cout << "=== SiNilai v0.6 ===\n";
    cout << "Jumlah mahasiswa (paling sedikit 1): ";

    string inputJumlah;
    while (true) {
        getline(cin, inputJumlah);
        stringstream ss(inputJumlah);
        char sisa;

        if (ss >> jumlah_mahasiswa &&
            !(ss >> sisa) && jumlah_mahasiswa >= 1) {
            break;
        }

        cout << "Jumlah mahasiswa tidak valid. Masukkan lagi "
             << "(paling sedikit 1): ";
    }

    cout << fixed << setprecision(2);

    double total_nilai = 0;
    double nilai_tertinggi = -1;
    string nama_tertinggi = "";

    int jumlah_lulus = 0;
    int jumlah_a = 0;
    int jumlah_b = 0;
    int jumlah_c = 0;
    int jumlah_d = 0;
    int jumlah_e = 0;

    for (int i = 1; i <= jumlah_mahasiswa; i++) {
        string nama, npm;

        double kehadiran, mingguan, uts, uas;

        cout << "\n--- Mahasiswa ke-" << i
             << " dari " << jumlah_mahasiswa << " ---\n";

        // Input dan validasi nama
        while (true) {
            cout << "Nama      : ";
            getline(cin, nama);

            if (validasiNama(nama)) {
                break;
            }
        }

        rapikanNama(nama);

        // Input NPM
        cout << "NPM       : ";
        getline(cin, npm);

        // Input nilai dengan validasi
        kehadiran = bacaNilai("Kehadiran : ");
        mingguan = bacaNilai("Mingguan  : ");
        uts = bacaNilai("UTS       : ");
        uas = bacaNilai("UAS       : ");

        // Menghitung nilai akhir
        double nilai_akhir =
            kehadiran * BOBOT_KEHADIRAN +
            mingguan * BOBOT_MINGGUAN +
            uts * BOBOT_UTS +
            uas * BOBOT_UAS;

        // Menentukan huruf mutu
        string huruf_mutu;

        if (nilai_akhir >= 80) {
            huruf_mutu = "A";
        } else if (nilai_akhir >= 75) {
            huruf_mutu = "B+";
        } else if (nilai_akhir >= 70) {
            huruf_mutu = "B";
        } else if (nilai_akhir >= 65) {
            huruf_mutu = "C+";
        } else if (nilai_akhir >= 60) {
            huruf_mutu = "C";
        } else if (nilai_akhir >= 40) {
            huruf_mutu = "D";
        } else {
            huruf_mutu = "E";
        }

        bool lulus = nilai_akhir >= 60;

        // Menampilkan hasil mahasiswa
        cout << "  " << left << setw(20) << nama
             << right << setw(7) << nilai_akhir
             << "  " << left << setw(3) << huruf_mutu;

        if (lulus) {
            cout << "Lulus\n";
        } else {
            cout << "Belum lulus\n";
        }

        // Menghitung laporan kelas
        total_nilai += nilai_akhir;

        if (lulus) {
            jumlah_lulus++;
        }

        switch (huruf_mutu[0]) {
            case 'A': jumlah_a++; break;
            case 'B': jumlah_b++; break;
            case 'C': jumlah_c++; break;
            case 'D': jumlah_d++; break;
            default: jumlah_e++;
        }

        if (nilai_akhir > nilai_tertinggi) {
            nilai_tertinggi = nilai_akhir;
            nama_tertinggi = nama;
        }
    }

    // Laporan kelas
    cout << "\n=== Laporan Kelas ===\n";
    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Lulus            : " << jumlah_lulus << "\n";
    cout << "Belum lulus      : "
         << jumlah_mahasiswa - jumlah_lulus << "\n";

    cout << "Rata-rata kelas  : "
         << total_nilai / jumlah_mahasiswa << "\n";

    cout << "Tertinggi        : "
         << nama_tertinggi << " ("
         << nilai_tertinggi << ")\n";

    // Sebaran huruf mutu
    cout << "\nSebaran huruf mutu:\n";

    for (char huruf = 'A'; huruf <= 'E'; huruf++) {
        int banyak = 0;

        if (huruf == 'A') banyak = jumlah_a;
        else if (huruf == 'B') banyak = jumlah_b;
        else if (huruf == 'C') banyak = jumlah_c;
        else if (huruf == 'D') banyak = jumlah_d;
        else banyak = jumlah_e;

        cout << huruf << " | ";

        for (int j = 1; j <= banyak; j++) {
            cout << "#";
        }

        cout << " " << banyak << "\n";
    }

    return 0;
}