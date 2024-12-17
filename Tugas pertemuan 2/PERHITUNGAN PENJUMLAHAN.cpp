#include <iostream>
using namespace std;

int main (){
	
	int a, b;
	double hasil;
	
//	PENJUMLAHAN
//	input pengguna
	cout << "Nomor 1 - Penjumlahan " << endl;
	cout << "Masukan dua angka " << endl;
	cout << "A = ";
	cin >> a;
	
	cout << "B = ";
	cin >> b;
//	Perhitungan Penjumlahan
	hasil = a + b;
	cout << "A + B = " << hasil << endl;
	cout << "Hasil dari A + B = " << hasil << endl;
	
	
//	PERKALIAN
//	input pengguna
	cout << "\nNomor 2 - Perkalian " << endl;
	cout << "Masukan dua angka " << endl;
	cout << "A = ";
	cin >> a;
	
	cout << "B = ";
	cin >> b;
//	Perhitungan Perkalian
	hasil = a*b;
	cout << "A x B = " << hasil << endl;
	cout << "Hasil dari A x B = " << hasil << endl;
	
	
//	PEMBAGIAN
//	input pengguna
	cout << "\nNomor 3 - Pembagian " << endl;
	cout << "Masukan dua angka " << endl;
	cout << "A = ";
	cin >> a;
	
	cout << "B = ";
	cin >> b;
//	Perhitungan Pembagian
	hasil = a/b;
	cout << "A : B = " << hasil << endl;
	cout << "Hasil dari A : B = " << hasil << endl;
	
	return 0;
}
