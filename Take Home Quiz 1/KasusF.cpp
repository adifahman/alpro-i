#include<iostream>
using namespace std;

/* Deklarasi */
int lK; 	 // Limit kredit
int tS; 	 // Tagihan sebelumnya
int jB; 	 // Jumlah belanja bulan ini
float b;  	 // Bunga
int d;  	 // Denda
float bT; 	 // Bunga tagihan bulan lalu
float tT; 	 // Total tagihan
float tTemp; // Tagihan sementara

int main(){

    /* Input */
    cout << "Limit kredit (2jt - 15jt) : "; cin >> lK;
    cout << "Sisa tagihan (maks. 10jt) : " ; cin >> tS;
    cout << "Belanja bulan ini (maks. 10jt)  : "; cin >> jB;
    cout << "Bunga (0.99 - 3.5) : "; cin >> b;
    cout << "Denda melebihi limit (maks. 75rb) : "; cin >> d;

    /* Proses */
    bT = tS * (b / 100);
    tTemp = bT + tS + jB;
    if(tTemp > lK){
        tT = tTemp + d;
    }else{
        tT = tTemp;
    }

    /* Output */
    cout << endl;
    cout.precision(0);
    cout << fixed << "Total Tagihan Bulan Ini : " << tT << endl;
}

