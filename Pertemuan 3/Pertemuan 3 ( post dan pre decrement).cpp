#include <iostream>
using namespace std;

int main (){
	
	int a = 5;
	
	//	Post-decrement (a--): variable 'a' digunakan dulu, baru dikurang  1
    int b = a--;   // b = 5, a = 4
    
    cout << "Post-decrement : " << endl;
    cout << "Nilai a setelah a-- : " << a << endl ;   // a sekarang 4
    cout << "Nilai b : " << b << endl; //b mengambil nilai sebelum a dikurang, jadi b = 5
    
    int c = 5;
    
	//    Pre-decrement (--c): variable 'c' dikurang dulu, baru digunakan
	int d = --c;  // c = 4,d =4
	
	cout << "\nPre-decrement : " << endl;
	cout << "Nilai c setelah --c : " << c << endl ; //c sekarnag 4
	cout << "Nilai d : " << d << endl; // d mengambil nilai setelah a dikurang, jadi d = 4
	
	return 0;
	
	
	
	
}
