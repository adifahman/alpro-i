#include<iostream>
using namespace std;

int t; // Tanggal lahir
int b; // Bulan lahir

int main(){

	/* Input */
    cout << "Masukkan tanggal lahir : "; cin >> t;
    cout << "Masukkan bulan lahir : "; cin >> b;
    cout << endl;

	/* Proses && Output */
    if(t >= 21 && b == 3 || t <= 19 && b == 4){
        cout << "Zodiak anda Aries" << endl;
    }else if(t >= 20 && b == 4 || t <= 20 && b == 5){
        cout << "Zodiak anda Taurus" << endl;
    }else if(t >= 21 && b == 5 || t <= 20 && b == 6){
        cout << "Zodiak anda Gemini" << endl;
    }else if(t >= 21 && b == 6 || t <= 22 && b == 7){
        cout << "Zodiak anda Cancer" << endl;
    }else if(t >= 23 && b == 7 || t <= 22 && b == 8){
        cout << "Zodiak anda Leo" << endl;
    }else if(t >= 23 && b == 8 || t <= 22 && b == 9){
        cout << "Zodiak anda Virgo" << endl;
    }else if(t >= 23 && b == 9 || t <= 22 && b == 10){
        cout << "Zodiak anda Libra" << endl;
    }else if(t >= 23 && b == 10 || t <= 21 && b == 11){
        cout << "Zodiak anda Scorpio" << endl;
    }else if(t >= 22 && b == 11 || t <= 21 && b == 12){
        cout << "Zodiak anda Sagitarius" << endl;
    }else if(t >= 22 && b == 11 || t <= 19 && b == 1){
        cout << "Zodiak anda Capricorn" << endl;
    }else if(t >= 20 && b == 1 || t <= 18 && b == 2){
        cout << "Zodiak anda Aquarius" << endl;
    }else if(t >= 19 && b == 2 || t <= 20 && b == 3){
        cout << "Zodiak anda Pisces" << endl;
    }else{
        cout << "Anda menginputkan tanggal yang salah!" << endl;
    }
}

