#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Masukkan bilangan ketiga: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Bilangan terbesar = " << a;
    } 
    else if (b >= a && b >= c) {
        cout << "Bilangan terbesar = " << b;
    } 
    else {
        cout << "Bilangan terbesar = " << c;
    }

    return 0;
}