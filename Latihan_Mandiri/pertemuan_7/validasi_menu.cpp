#include <iostream>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Tambah data\n";
        cout << "2. Lihat data\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";

        cin >> pilihan;

        while (cin.fail() || pilihan < 1 || pilihan > 3) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Input harus berupa angka. ";
            } else {
                cout << "Pilihan harus 1 sampai 3. ";
            }

            cout << "Pilih menu lagi: ";
            cin >> pilihan;
        }

        switch (pilihan) {
            case 1:
                cout << "Anda memilih Tambah data.\n";
                break;

            case 2:
                cout << "Anda memilih Lihat data.\n";
                break;

            case 3:
                cout << "Program selesai.\n";
                break;
        }

    } while (pilihan != 3);

    return 0;
}