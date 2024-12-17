#include <iostream>
using namespace std;
int main() {
    int alas, tinggi;
    double luas;
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    if (alas % 2 == 0) {
        alas += 9;  
    } else {
        alas += 2;  
    }
    if (tinggi < 10) {
        tinggi *= 3;  
    } else if (tinggi > 30) {
        tinggi /= 2;  
    }
    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga adalah: " << luas << endl;
}
