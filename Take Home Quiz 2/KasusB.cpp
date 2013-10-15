#include<iostream>
using namespace std;

/* Deklarasi */
int p, l, kosong, isi, j;
string temp;

int main(){
	/* Input luas lahan*/
	cout << "Masukan panjang lahan : "; cin >> p;
	cout << "Masukan lebar lahan : "; cin >> l;
	
	/* Proses & Input */
	for(int i = 1; i <= l; i++){
		cout << "Isi lahan baris ke-" << i << " : "; // Input data lahan
		cin >> temp;
		for(int j = 1; j <= p; j++){
			string sub1 = temp.substr(j-1, 1);
			if(sub1 == "1"){
				isi += 1;
			}else{
				kosong += 1;
			}	
		}	
	}
	
	/* Output */
	cout << "\nLahan berisi : " << isi << endl;
	cout << "Lahan kosong : " <<  kosong << endl;
}
