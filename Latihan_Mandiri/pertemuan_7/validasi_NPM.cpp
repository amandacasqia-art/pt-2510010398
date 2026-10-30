#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string npm;
    bool sah;

    do {
        sah = true;

        cout << "Masukkan NPM (10 angka): ";
        cin >> npm;

        if (npm.length() != 10) {
            sah = false;
        } else {
            for (int i = 0; i < static_cast<int>(npm.length()); i++) {
                if (!isdigit(static_cast<unsigned char>(npm[i]))) {
                    sah = false;
                    break;
                }
            }
        }

        if (!sah) {
            cout << "NPM harus tepat 10 karakter dan semuanya angka.\n";
        }

    } while (!sah);

    cout << "NPM valid: " << npm << endl;

    return 0;
}