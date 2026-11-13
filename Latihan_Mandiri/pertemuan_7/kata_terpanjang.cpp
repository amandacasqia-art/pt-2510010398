
#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    string kata;
    string terpanjang;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    int panjang = kalimat.length();

    for (int i = 0; i < panjang; i++) {
        if (kalimat[i] != ' ') {
            kata = kata + kalimat[i];
        } else {
            if (kata.length() > terpanjang.length()) {
                terpanjang = kata;
            }
            kata = "";
        }
    }

    if (kata.length() > terpanjang.length()) {
        terpanjang = kata;
    }

    cout << "Kata terpanjang: " << terpanjang << "\n";

    return 0;
}
