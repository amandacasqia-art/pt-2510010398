### Penjelasan Nomor 4

Program Parkir Kampus yang sebelumnya dibuat dalam satu bagian kode, kemudian disusun kembali menjadi beberapa fungsi agar lebih teratur. Fungsi tersebut meliputi menampilkan judul program, memasukkan data, menghitung biaya parkir, serta mencetak struk pembayaran. Setiap fungsi memiliki peran tersendiri dalam menjalankan program. Dengan pembagian fungsi ini, kode menjadi lebih rapi, mudah dipahami, dan lebih praktis jika ingin diperbaiki atau digunakan kembali.

### nomer 5
### codingan sebelum diperbaiki

#include <iostream>

using namespace std;

int tarifMotor = 2000; // Variabel global

int hitungBiaya(int lama) {
    return lama * tarifMotor;
}

int main() {
    int lama = 3;

    cout << "Total biaya: Rp"
         << hitungBiaya(lama) << endl;

    return 0;
}

### codingan sesudah di perbaiki

#include <iostream>

using namespace std;

int hitungBiaya(int lama, int tarifMotor) {
    return lama * tarifMotor;
}

int main() {
    int lama = 3;
    int tarifMotor = 2000;

    int total = hitungBiaya(lama, tarifMotor);

    cout << "Total biaya: Rp" << total << endl;

    return 0;
}

### penjelasan Nomor 5
Variabel global tarifMotor yang sebelumnya berada di luar fungsi diubah menjadi variabel lokal di dalam main(). Selanjutnya, nilai variabel tersebut diberikan kepada fungsi hitungBiaya() menggunakan parameter. Dengan perubahan ini, setiap fungsi memiliki tugas yang lebih jelas sehingga susunan program menjadi lebih rapi, terstruktur, dan mudah dimengerti.