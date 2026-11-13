
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengulang teks
string ulang(string teks, int kali) {
    string hasil = "";

    for (int i = 0; i < kali; i++) {
        hasil += teks;
    }

    return hasil;
}

// Fungsi untuk mencetak sebaran
void cetakSebaran(int a, int b, int c, int d, int e) {
    cout << "=== Sebaran Nilai ===" << endl;

    cout << "A : " << ulang("#", a) << endl;
    cout << "B : " << ulang("#", b) << endl;
    cout << "C : " << ulang("#", c) << endl;
    cout << "D : " << ulang("#", d) << endl;
    cout << "E : " << ulang("#", e) << endl;
}

int main() {
    cetakSebaran(5, 4, 3, 2, 1);

    return 0;
}
