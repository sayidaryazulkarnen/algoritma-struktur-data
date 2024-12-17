#include <iostream>
using namespace std;

int main() {
    int sum = 0;  
    int n = 10;  
    int number = 2;  

    cout << "Deret bilangan genap: " << endl;
    for (int i = 0; i < n; i++) {
        cout << number;
        if (i < n - 1) cout << " + ";  
        sum += number;  
        number += 2;  
    }

    cout << " = " << sum << endl;  
}
