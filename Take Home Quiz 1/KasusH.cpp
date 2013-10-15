#include<iostream>
using namespace std;

/* Deklarasi */
int x;
int r;
float y;
int main(){

	/* Input */
    cout << "Pilih :\n 1. Menghitung keliling lingkaran\n 2. Menghitung luas lingkaran\nPilihan : ";
    cin >> x;
    cout << "Jari - jari lingkaran : "; cin >> r;

	/* Proses && Output */
	cout << endl;
    if(x == 1){
        y = 3.14 * (r + r);
        cout << "Keliling lingkaran = " << y;
    }else if(x == 2){
        y = 3.14 * r * r;
        cout << "Luas lingkaran = " << y;
    }else{
        cout << "Pilihan salah !";
    }
}
