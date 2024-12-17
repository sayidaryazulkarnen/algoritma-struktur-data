// PROGRAM MENGHITUNG HARGA TOTAL 
#include <iostream>
#include <conio.h>
#define harga 4500.02 //   menentukan harga dengan define

using namespace std;

int main(){

	float jumlah, total;
	
	cout << "Masukan jumlah barang = ";
	cin >> jumlah, total = harga*jumlah;
	cout << "\nYang harus dibayar = " << total;
	
	getch ();

}
