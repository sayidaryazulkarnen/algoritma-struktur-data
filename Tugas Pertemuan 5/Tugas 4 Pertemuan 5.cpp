#include <iostream>
using namespace std;

bool isPrime(int e) {
    if (e <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= e; i++) {
        if (e % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int number;
    cout << "Masukkan sebuah bilangan: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " Termasuk bilangan prima" << endl;
    } else {
        cout << number << " Bukan termasuk bilangan prima" << endl;
    }
}
