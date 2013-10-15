#include<iostream>
using namespace std;

/* Deklarasi */
int g; // Variabel gigi
int k; // Variabel kecepatan
int c; // Variabel kondisi

int main(){

	/* Input */
    cout << "Masukan gigi yang digunakan (1 - 4) : "; cin >> g;
    cout << "Masukan kecepatan motor (max. 180) : "; cin >> k;

    c = 0; // Kondisi Awal

    /* Proses */
    switch(g){
        case 1:
            if(k > 0 && k <= 40){
                c = 1;
            }else{
                c = 0;
            }
            break;
        case 2:
            if(k > 40 && k <= 60){
                c = 1;
            }else{
                c = 0;
            }
            break;
        case 3:
            if(k > 60 && k <= 80){
                c = 1;
            }else{
                c = 0;
            }
            break;
        case 4:
            if(k > 80){
                c = 1;
            }else{
                c = 0;
            }
            break;
    }

    /* Output */
    cout << endl;

    if(c == 1){
        cout << c << " : Gigi yang dimasukan benar" << endl;
    }else{
        cout << c << " : Gigi yang dimasukan salah" << endl;
    }
}
