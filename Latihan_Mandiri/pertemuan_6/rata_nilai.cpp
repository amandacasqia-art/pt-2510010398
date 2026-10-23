#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    double nilai, total = 0;
    int jumlah_sah = 0;
    int data_tidak_sah = 0;
    string input;
    string sisa;

    cout << "Masukkan jumlah nilai: ";
    getline(cin, input);

    stringstream ss(input);

    if (!(ss >> n) || (ss >> sisa) || n <= 0) {
        cout << "Jumlah nilai harus bilangan bulat positif!\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nilai ke-" << i << ": ";

        if (!(cin >> nilai)) {
            cout << "Input harus berupa angka!\n";
            return 0;
        }

        if (nilai < 0 || nilai > 100) {
            cout << "Nilai tidak sah! Masukkan nilai 0-100.\n";
            data_tidak_sah++;
            continue;
        }

        total += nilai;
        jumlah_sah++;
    }

    cout << fixed << setprecision(2);

    if (jumlah_sah > 0) {
        cout << "\nRata-rata nilai sah: "
             << total / jumlah_sah << "\n";
    } else {
        cout << "\nTidak ada nilai yang sah.\n";
    }

    cout << "Jumlah nilai sah: " << jumlah_sah << "\n";
    cout << "Data tidak sah: " << data_tidak_sah << "\n";

    return 0;
}