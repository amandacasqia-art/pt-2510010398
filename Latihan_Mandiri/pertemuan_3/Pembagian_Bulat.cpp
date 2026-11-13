#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    if (b == 0) {
        cout << "Kesalahan: Pembagian dengan nol tidak diperbolehkan." << endl;
    } else {
        int hasilBagi = a / b;
        int sisaBagi = a % b;

        cout << "Hasil bagi " << a << " / " << b << " = " << hasilBagi << endl;
        cout << "Sisa bagi " << a << " % " << b << " = " << sisaBagi << endl;
    }

    return 0;
}