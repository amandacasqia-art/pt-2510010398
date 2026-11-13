// Merapikan nama menjadi Huruf Besar Di Awal Kata: huruf pertama tiap kata dibesarkan, sisanya dikecilkan.
// Kuncinya satu bendera bool: apakah huruf yang sedang dilihat berada di awal kata?
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string nama;
    string hasil;

    cout << "Nama (bebas huruf besar kecil): ";
    getline(cin, nama);

    bool awal_kata = true;
    bool spasi = false;

    int panjang = nama.length();

    for (int i = 0; i < panjang; i++) {
        char c = nama[i];

        if (c == ' ') {
            if (!hasil.empty()) {
                spasi = true;
            }
        } else {
            if (spasi) {
                hasil = hasil + ' ';
                awal_kata = true;
                spasi = false;
            }

            if (awal_kata) {
                hasil = hasil + static_cast<char>(toupper(c));
                awal_kata = false;
            } else {
                hasil = hasil + static_cast<char>(tolower(c));
            }
        }
    }

    cout << "Hasil: " << hasil << "\n";

    return 0;
}

