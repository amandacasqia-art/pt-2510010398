
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan tinggi segitiga: ";
    cin >> n;

    cout << "\nSegitiga normal:\n";
    for (int baris = 1; baris <= n; baris++) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\nSegitiga terbalik:\n";
    for (int baris = n; baris >= 1; baris--) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
