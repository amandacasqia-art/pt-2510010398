
#include <iostream>
using namespace std;

int main() {
    int n;
    bool prima = true;

    cout << "Masukkan bilangan bulat: ";
    cin >> n;

    if (n < 2) {
        prima = false;
    } else {
        for (int pembagi = 2; pembagi < n; pembagi++) {
            if (n % pembagi == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima) {
        cout << n << " adalah bilangan prima.\n";
    } else {
        cout << n << " bukan bilangan prima.\n";
    }

    return 0;
}
