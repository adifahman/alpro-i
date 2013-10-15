#include<iostream>
using namespace std;

/* Deklarasi */
int jB; // Jumlah bola
int bB; // Bola biru
int bM; // Bola merah
int bP; // Bola putih
int bK; // Bola keluar

int main(){

	/* Input */
    cout << "Jumlah bola yang dimasukan : "; cin >> jB;
    cout << "Jumlah bola biru yang dimasukan : "; cin >> bB;
    cout << "Jumlah bola merah yang dimasukan : "; cin >> bM;

	/* Proses */
    bP = jB - (bB + bM);

    if(bP > bM){
        bK = bP - bM;
    }else if(bM > bP){
        bK = bM - bP;
    }else{
        bK = 0;
    }

	/* Output */
    cout << "\nJumlah bola putih : " << bP << endl;
    cout << "Jumlah bola yang dikeluarkan : " << bK << endl;
}
