#include<iostream>
using namespace std;

/* Deklarasi */
int pP;   // Panjang persegi
int lP;   // Lebar persegi
int LP;   // Luas persegi
float aS; // Alas segitiga
float tS; // Tinggi segitiga
float jS; // Jumlah segitiga
float LS; // Luas total segitiga
int lK;   // Luas kosong

int main(){

	/* Input */
    cout << "Panjang persegi : "; cin >> pP;
    cout << "Lebar persegi : "; cin >> lP;
    cout << "Alas segitiga : "; cin >> aS;
    cout << "Tinggi segitiga : "; cin >> tS;
    cout << "Jumlah segitiga : "; cin >> jS;

	/* Proses */
    LP = pP * lP;
    LS = aS * tS / 2 * jS;

    if(LS > LP){
        lK = 0;
    }else{
        lK = LP - LS;
    }
	
	/* Output */
    cout <<"\nLuas Kosong : " << lK << endl;
}

