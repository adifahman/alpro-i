#include<iostream>
using namespace std;

int  tgl, bln, thn; // Tanggal
int hDb[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // J. hari dalam bulan
int jH = 0; // Jumlah hari
int jP; // Jumlah pemain
int P[10]; // Pemain
int x;

int main(){

    /* Input */
    cout << "Tanggal : "; cin >> tgl >> bln >> thn;
    cout << "Jumlah Pemain : "; cin >> jP;
    for(x = 0; x <= jP-1; x++){
        cout << "Jawaban pemain ke-" << x+1 << " : "; cin >> P[x];
    }

    /* Menghitung Jumlah Hari */
    for(x = 0; x <= bln-1; x++){
        jH = jH + hDb[x-1];
    }
    jH = tgl + jH;

    //for(x = 0; x <= bln-1; x++)

}
