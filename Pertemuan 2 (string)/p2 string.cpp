#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string x, y, z;
	
	cout << "Masukan NPM Anda : ";
	cin >> x;
	cin.ignore();
	cout << "Masukan Nama Anda : ";
	getline(cin, y);
	cout << "Masukan Alamat Anda : ";
	getline(cin, z);
	
	cout << endl;
	cout << "NPM Anda Adalah : " << x << endl;
	cout << " Nama Anda Adalah : " << y << endl;
	cout << " Alamat Amda Adalah : " << z;
	
	return 0;	
}
