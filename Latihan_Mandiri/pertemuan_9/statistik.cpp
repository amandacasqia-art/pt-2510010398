
#include <iostream>
using namespace std;

// Fungsi menggunakan pass by reference
void statistik(double a, double b, double c,
               double& terbesar,
               double& terkecil,
               double& rerata) {

    terbesar = a;
    terkecil = a;

    if (b > terbesar) {
        terbesar = b;
    }

    if (c > terbesar) {
        terbesar = c;
    }

    if (b < terkecil) {
        terkecil = b;
    }

    if (c < terkecil) {
        terkecil = c;
    }

    rerata = (a + b + c) / 3;
}

// Fungsi return untuk menghitung rata-rata
double hitungRerata(double a, double b, double c) {
    return (a + b + c) / 3;
}

int main() {
    double terbesar, terkecil, rerata;

    statistik(80, 90, 70, terbesar, terkecil, rerata);

    cout << "Nilai terbesar : " << terbesar << endl;
    cout << "Nilai terkecil : " << terkecil << endl;
    cout << "Nilai rata-rata : " << rerata << endl;

    cout << "Rata-rata menggunakan return : "
         << hitungRerata(80, 90, 70) << endl;

    return 0;
}
