#include<iostream>
using namespace std;

/* Deklarasi */
int jS; // Jumlah siswa
int mS; // Maksimum siswa
int jB; // Jumlah baris
int sS; // Sisa siswa

int main(){

    /* Input */
    cout << "Masukan jumlah siswa (maks. 32) : "; cin >> jS;
    cout << "Maksimum siswa per baris (maks. 10) : " ; cin >> mS;

    /* Proses */
    jB = jS / mS;
    sS = jS % mS;

	/* Output */
    cout << "\nJumlah baris : " << jB << endl;
    cout << "Jumlah siswa baris terakhir : " << sS << endl;
}
