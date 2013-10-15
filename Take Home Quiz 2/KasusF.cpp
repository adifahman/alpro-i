#include<iostream>
using namespace std;

int i, j, tinggi , bil;

int main(){
    cout << "Masukan tinggu segitiga : "; cin >> tinggi;
    for(i = 1; i <= tinggi; i++){
		bil = i;
		for(j = 1; j <= i; j++){
			cout << bil << " ";
			bil = bil + tinggi - j;
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
