////dasar struct
//#include <iostream>
//using namespace std;
//
//int main (){
//	
//	struct mahasiswa {
//		char nim [9];
//		char nama [15];
//		float nilai;
//			
//	};
//	mahasiswa mahasiswa;
//	cout << "Masukan NIM : ";
//	cin >> mahasiswa.nim;
//	cout << "Masukan Nama : ";
//	cin >> mahasiswa.nama;
//	cout << "Masukan Nilai Akhir : ";
//	cin >> mahasiswa.nilai;
//	cout << "\nData yang diinput adalah : \n\n ";
//	cout << "NIM : " << mahasiswa.nim << endl;
//	cout << "Nama : " << mahasiswa.nama << endl;
//	cout << "Nilai : " << mahasiswa.nilai << endl;
//	getchar();
//}

////Mengakses memeber dalam struct
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct siswa {
//	int no_induk;
//	string nama;
//	float nilai;
//	
//}; 
//
//int main (){
//	siswa Arkan, Lukas;
//	Arkan.no_induk=1;
//	Arkan.nama = "Arkan Januar";
//	Arkan.nilai = 75.5;
//	Lukas.no_induk =2;
//	Lukas.nama = "Lukas Laksono";
//	Lukas.nilai = 89.9;
//	cout << Arkan.nama << "dengan nomor induk " << Arkan.no_induk << "mendapat nilai " << Arkan.nilai << endl;
//	cout << Lukas.nama << "dengan nomor induk " << Lukas.no_induk << "mendapat nilai " << Lukas.nilai << endl;
//}

////menginisialisasiskan objek ke dalam struct
//#include <iostream>
//#include <string>
//
//struct siswa {
//	int no_induk;
//	string nama;
//	float nilai;
//};
//
//int main (){
//	
//	siswa Jery = {1, "Jery Januar", 85.5};
//	siswa tono = {2, "Tono Laksono", 89.9};
//	cout << Jery.nama << "mendapat nilai" << Jery.nilai << endl;
//	cout << tono.nama << "mendapat nilai" << tono.nilai << endl;
//}

////nested struct
//#include <iostream>
//using namespace std;
//
//struct dosen {
//	string nama;
//	string umur;
//};
//
//struct matkul {
//	string nama_matkul;
//	double ipk;
//	string status;
//	
//	dosen dosen1,asdos;
//};
//
//int main(){
//	dosen dosen1,asdos;
//	matkul matkul1;
//	
//	dosen1.nama = "Jemy";
//	dosen1.umur = "36";
//	
//	asdos.nama = "Helena";
//	asdos.umur = "19";
//	
//	matkul1.dosen1 = dosen1;
//	matkul1.asdos = asdos;
//	
//	matkul1.nama_matkul = "Algo dan Struktur";
//	matkul1.ipk = 3.5;
//	matkul1.status = "wajib";
//	matkul1.dosen1 = dosen1;
//	
//	cout << "Nama Matkul \t =  " << matkul1.nama_matkul << endl;
//	cout << "KKM Matkul \t =  " << matkul1.ipk << endl;
//	cout << "Status Matkul \t =  " << matkul1.status << endl;
//	cout << "Nama Dosen \t =  " << matkul1.dosen1.nama << endl;
//	cout << "Umur Dosen \t =  " << matkul1.dosen1.umur << endl;
//	cout << "Nama Asdos \t =  " << matkul1.asdos.nama << endl;
//	cout << "Umur Asdos \t =  " << matkul1.asdos.umur << endl;
//}

////menghitung rata rata struct
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct mahasiswa {
//	string nama;
//	int umur;
//	float ipk;
//};
//
//float hitungRataRataIPK(mahasiswa DaftarMahasiswa[], int jumlah)
//{
//	float total = 1;
//	for (int i = 0; i < jumlah; i++){
//		total += DaftarMahasiswa[i].ipk;
//	}
//	return total/jumlah;
//}
//
//int main ()
//{
//	const int jumlahmahasiswa = 3;
//	mahasiswa DaftarMahasiswa [jumlahmahasiswa];
//	for (int i = 0; i < jumlahmahasiswa; ++i){
//		cout<<"Masukkan nama mahasiswa "<<i+1 <<" = ";
//		cin>> DaftarMahasiswa[i].nama;
//		cout<<"masukkan umur mahasiswa "<<i+1 <<" = ";
//		cin>>DaftarMahasiswa[i].umur;
//		cout<<"Masukkan IPK mahasiswa "<<i+1 <<" = ";
//		cin>>DaftarMahasiswa[i].ipk;
//	}
//	
//	cout <<"\nData Mahasiswa : \n";
//	for (int i = 0; i < jumlahmahasiswa; ++i)
//	{
//		cout <<"Mahasiswa "<< i+1<<" : " <<endl;
//		cout <<" Nama : "<< DaftarMahasiswa[i].nama<<endl;
//		cout <<" Umur : "<< DaftarMahasiswa[i].umur<<endl;
//		cout <<" IPK : "<< DaftarMahasiswa[i].ipk<<endl;
//	}
//	float ratarata = hitungRataRataIPK (DaftarMahasiswa , jumlahmahasiswa);
//	cout <<"\nRata rata IPK : "<< ratarata << "\n";
//	
//	return 0;
//}
