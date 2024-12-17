#include <iostream>
using namespace std;

int main (){
	
	float r, t, v;
	cout <<"Masukan Jari - Jari Tabung = ";
	cin >> r;
	
	cout <<"Masukan tinggi tabung = ";
	cin >> t;
	
	v = 3.14286 * r * r * t;
	
	cout << "\njari - jari = " << r << endl;
	cout << "Tinggi tabung = " << t << endl;
	cout << "Pi \t = 3.14 ";
	cout << "\nV \t = Pi * r * r * t ";
	cout << "\nV \t = 3.14 * " <<r;
	cout << " * " <<r;
	cout << " * " <<t;
	cout << "\nV \t = " << v;
	cout << "\nVolume Tabung dengan jari-jari "<< r << " x "<< t << " adalah = " << v;
	
	return 0;
}
