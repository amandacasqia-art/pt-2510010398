// if-else bertingkat: syarat diperiksa berurutan dari atas; cabang pertama yang benar dijalankan,
// sisanya dilewati. Urutan syarat menentukan hasilnya.
#include <iostream>

using namespace std;

int main() {
    double nilai = 0;

    cout << "Nilai akhir: ";
    cin >> nilai;

    switch (static_cast<int>(nilai) / 10) {
        case 10:
        case 9:
        case 8:
            cout << "Huruf mutu: A\n";
            break;

        case 7:
            cout << "Huruf mutu: B\n";
            break;

        case 6:
            cout << "Huruf mutu: C\n";
            break;

        default:
            cout << "Huruf mutu: D\n";
    }

    return 0;
}