
#include <iostream>
using namespace std;

// Fungsi untuk memeriksa bilangan prima
bool prima(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "Bilangan prima dari 2 sampai 100:" << endl;

    for (int i = 2; i <= 100; i++) {
        if (prima(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
