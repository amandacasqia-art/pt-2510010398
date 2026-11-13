#include <iostream>
using namespace std;

int main() {
    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0)) {
        cout << tahun << " adalah tahun kabisat";
    } 
    else {
        cout << tahun << " bukan tahun kabisat";
    }

    return 0;
}