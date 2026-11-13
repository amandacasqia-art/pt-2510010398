#include <iostream>
using namespace std;

int main() {
    double nilai, tertinggi = 0;
    int banyak = 0;

    cout << "Masukkan nilai (negatif untuk berhenti): ";
    cin >> nilai;

    while (nilai >= 0) {
        if (banyak == 0 || nilai > tertinggi) {
            tertinggi = nilai;
        }

        banyak++;

        cout << "Masukkan nilai (negatif untuk berhenti): ";
        cin >> nilai;
    }

    if (banyak > 0) {
        cout << "Nilai tertinggi = " << tertinggi << endl;
    } else {
        cout << "Tidak ada nilai yang dimasukkan." << endl;
    }

    return 0;
}