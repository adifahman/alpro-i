#include<iostream>
using namespace std;

int n; // Nilai
int h; // Hadiah
int g; // Ganjil / genap

int main(){
	/* Input */
    cout << "Masukan nilai (1 - 10) : "; cin >> n;
	cout << endl;

	/* Proses && Output */
    g = n % 2;

    if(g == 1){
        h = n * 7;
        cout << "Hadiah = " << h << endl;
    }else if(g == 0){
        h = n * 2;
        cout << "Hadiah = " << h << endl;
    }else{
        cout << "Error !" << endl;
    }
}
