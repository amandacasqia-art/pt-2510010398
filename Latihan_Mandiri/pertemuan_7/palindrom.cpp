
#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;
    bool palindrom = true;

    cout << "Masukkan kata: ";
    cin >> kata;

    int panjang = kata.length();

    for (int i = 0; i < panjang / 2; i++) {
        if (kata[i] != kata[panjang - 1 - i]) {
            palindrom = false;
        }
    }

    if (palindrom) {
        cout << kata << " adalah palindrom.\n";
    } else {
        cout << kata << " bukan palindrom.\n";
    }

    return 0;
}
