#include<iostream>
using namespace std;

int gaji; // Gaji
int pTHR; // Persentase THR
float tp1, tp2; // Tamat puasa
float tTHR, THR1, THR2; // THR


int main(){

	/* Input */
    cout << "Jumlah gaji (300rb - 5jt) : "; cin >> gaji;
    cout << "Persentase THR (15% - 30%) : "; cin >> pTHR;
    cout << "J. hari tamat puasa adik ke-1 (maks. 30) : "; cin >> tp1;
    cout << "J. hari tamat puasa adik ke-2 (maks. 30) : "; cin >> tp2;

	/* Proses */
    tTHR = gaji * pTHR / 100;

    if (tp1 >= 15){
        THR1 = tTHR * (tp1 / 60);
    }else if(tp2 < 15){
        THR1 = 0;
    }

    if (tp2 >= 15){
        THR2 = tTHR * (tp2 / 60);
    }else if(tp2 < 15){
        THR2 = 0;
    }

	/* Output */
    cout << endl;
    cout.precision(0);
    cout << fixed << "THR adik ke-1 : " << THR1 << endl;
    cout << fixed << "THR adik ke-2 : " << THR2 << endl;
}
