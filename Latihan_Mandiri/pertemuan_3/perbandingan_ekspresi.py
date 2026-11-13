# Nomor 4: Eksperimen 3 ekspresi dari prioritas.cpp ke Python

# Ekspresi 1: 2 * 3 / 4 (dari baris 12 prioritas.cpp)
e1 = 2 * 3 / 4
print("1. Hasil 2 * 3 / 4 di Python :", e1)
# Alasan Beda: Di C++ hasilnya adalah 1 (karena 6 / 4 melakukan pembagian bulat integer).
# Di Python hasilnya adalah 1.5 (karena operator / di Python menghasilkan float desimal).

# Ekspresi 2: 2 / 4 * 3 (dari baris 13 prioritas.cpp)
e2 = 2 / 4 * 3
print("2. Hasil 2 / 4 * 3 di Python :", e2)
# Alasan Beda: Di C++ hasilnya adalah 0 (karena 2 / 4 = 0 pada integer, lalu 0 * 3 = 0).
# Di Python hasilnya adalah 1.5 (karena 2 / 4 = 0.5, lalu 0.5 * 3 = 1.5).

# Ekspresi 3: 17 % 5 * 2 (dari baris 14 prioritas.cpp)
e3 = 17 % 5 * 2
print("3. Hasil 17 % 5 * 2 di Python:", e3)
# Alasan Sama: Hasilnya sama-sama 4 di C++ maupun Python.
# Sifat urutan evaluasi dari kiri ke kanan (17 % 5 = 2, lalu 2 * 2 = 4) berlaku sama.