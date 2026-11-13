#include <iostream>

int main() {
    std::cout << "Halo dari C++\n";
    return 0;
}
//error pada bagian baris nomer 4 di "Halo dari C++\n;", tertera gelombang merah pada bagian bawah teks
//Error terjadi pada tahap compile karena program menggunakan std::cout, tapi library <iostream> tidak disertakan. Jadinya compiler tidak mengenali std::cout sebagai bagian dari std. Error dapat diperbaiki dengan menambahkan kembali #include <iostream> pada bagian awal program.