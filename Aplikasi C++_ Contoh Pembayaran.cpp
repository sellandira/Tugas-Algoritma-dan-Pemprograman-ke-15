#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "~ Menerapkan konsep dan membuat algoritma untuk menyelesaikan kasus ~" << endl;
	cout << "======================================================================" << endl;
	cout << "Nama          : Sella Andira Bintang Wulandari" << endl;
  	cout << "NIM           : 5520122013" << endl;
   	cout << "Program Studi : Informatika" << endl;
   	cout << "======================================================================" << endl;
   	
    string nama, prodi;
    int nim, sks;
    double biaya_per_sks, biaya_total, biaya_admin, rata_rata, jumlah;
    int nilai[5];

    // Input data mahasiswa
    cout << "Masukkan Nama Mahasiwa: ";
    getline(cin, nama);

    cout << "Masukkan NIM: ";
    cin >> nim;

    cout << "Masukkan Prodi: ";
    cin >> prodi;

    // Input jumlah SKS dan biaya per SKS
    cout << "Masukkan jumlah SKS yang diambil: ";
    cin >> sks;

    cout << "Masukkan biaya per SKS: ";
    cin >> biaya_per_sks;

    // Hitung biaya kuliah dan biaya administrasi
    biaya_total = sks * biaya_per_sks;
    biaya_admin = biaya_total * 0.1;
    jumlah      = biaya_total + biaya_admin;
 
    // Output data mahasiswa, biaya total dan biaya administrasi
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Nama                      : " << nama << endl;
    cout << "NIM                       : " << nim << endl;
    cout << "Program Studi             : " << prodi << endl;
    cout << "Jumlah SKS                : " << sks << endl;
    cout << "Biaya kuliah              : " << biaya_total << endl;
    cout << "Biaya administrasi        : " << biaya_admin << endl;
    cout << "Jumlah yang harus dibayar : " << jumlah << endl;
    cout << "----------------------------------------------------------------------" << endl;

    return 0;
}
