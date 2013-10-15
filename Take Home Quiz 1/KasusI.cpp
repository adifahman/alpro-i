#include<iostream>
using namespace std;

/* Deklarasi */
int t; // Tinggi
int a; // Atmosfer
int c; // Kondisi
int main(){
    /* Input */
    cout << "Ketinggian : "; cin >> t; //Input gigi yang digunakan
    cout << "Lapisan atmosfer : "; cin >> a;     //Input kecepatan motor

    c = 0; // Kondisi Awal

    /* Proses */
    switch(a){
        case 1:
            if(t > 0 && t < 10){
                c = 1;
            }else{
                c = 0;
            }
            break;
        case 2:
            if(t >= 10 && t < 30){
                c = 1;
            }else{
                c = 0;
            }
            break;
        case 3:
            if(t >= 30 && t < 50){
                c = 1;
            }else{
                c = 0;
            }
            break;
        case 4:
            if(t >= 50 && t < 400){
                c = 1;
            }else{
                c = 0;
            }
            break;
        case 5:
            if(t >= 400){
                c = 1;
            }else{
                c = 0;
            }
            break;
    }

    /* Output */
    cout << endl;
    if(c == 1){
        cout << "T : Jawaban benar" << endl;
    }else{
        cout << "F : Jawaban salah!" << endl;
    }
}
