#include <iostream>
using namespace std;

int main() {
    int totalDetik;
    cout << "Masukkan jumlah detik: ";
    cin >> totalDetik;

    int jam = totalDetik / 3600;
    int sisaDetik = totalDetik % 3600;
    int menit = sisaDetik / 60;
    int detik = sisaDetik % 60;

    cout << totalDetik << " detik = " 
         << jam << " jam, " 
         << menit << " menit, " 
         << detik << " detik." << endl;

    return 0;
}