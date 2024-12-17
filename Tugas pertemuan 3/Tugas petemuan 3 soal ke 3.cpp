#include <iostream>
using namespace std;

int main() {

// inisialisasi variabel
int x=50; 		 //variable x punya nilai default 50 
int a,b,c,d,e; 	// menyatakan variable 

// proses
a = x > 5 + 5; 	// hasil dari 5 + 5 itu berapa, jika 50 itu lebih besar dari hasil 5 + 5 maka hasilnya benar 50 > 10 (true)
b = x > 100; 	// jika nilai x lebih besar dari 100 maka hasilnya 0 atau salah
c =a && b; 		// menggunakan perintah && (and) c akan bernilai 1 (benar) hanya jika a dan b sama sama benar, maka c = 0 (salah)
d =a||b; 		// menggunakan operator || (or), d akan bernilai 1 jika salah satu dari a atau b benar, maka d=1 (benar)
e = ! (c); 		// menggunakan perintah ! (NOT), e akan bernilai 1 jika c salah, maka e=1 (true)
// output berupa 1 (benar) dan 0 (salah)
cout<<"\nNilai a = x > 5 + 5 = "<<a<<endl;  //	menampilkan nilai a pada output adalah 1 (benar)
cout<<"\nNilai b = x > 100 = "<<b<<endl;	//  menampilkan nilai b pada output adalah 0 (salah)
cout<<"\nNilai c = a && b = "<<c<<endl;		//  menampilkan nilai c pada output adalah 0 (salah)
cout<<"\nNilai d =a||b = "<<d<<endl;		//  menampilkan nilai d pada output adalah 1 (benar)
cout<<"\nNilai e=! c = "<<e<<endl;			//  menampilkan nilai e pada output adalah 1 (benar)

getchar();   // menunggu input karkater agar jendela pada output tetap terbuka
}
