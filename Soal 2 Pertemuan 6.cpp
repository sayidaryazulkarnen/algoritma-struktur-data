#include <iostream>
using namespace std;

int main() {
    int sum = 0;  // Variabel untuk menyimpan jumlah
    int n = 10;   // Banyaknya bilangan ganjil yang akan dijumlahkan
    int number = 1;  // Bilangan ganjil pertama

    cout << "Deret bilangan ganjil: ";
    for (int i = 0; i < n; i++) {
        cout << number;
        if (i < n - 1) cout << " + ";  // Menambahkan tanda "+" kecuali di akhir
        sum += number;  // Menambahkan bilangan ganjil ke dalam jumlah
        number += 2;  // Bilangan ganjil berikutnya (naik 2)
    }

    cout << " = " << sum << endl;  // Menampilkan hasil akhir

    re
}

