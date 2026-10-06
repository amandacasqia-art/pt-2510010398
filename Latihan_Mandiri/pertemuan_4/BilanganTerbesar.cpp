#include <iostream>
using namespace std;

int main() {
    int a, b, c, terbesar;

    cout << "Masukkan tiga bilangan: ";
    cin >> a >> b >> c;

    terbesar = a;

    if (b > terbesar) {
        terbesar = b;
    }

    if (c > terbesar) {
        terbesar = c;
    }

    cout << "Bilangan terbesar = " << terbesar;

    return 0;
}