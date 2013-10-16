#include<iostream>
using namespace std;
int x, y, K, B, I1 ,I2;
int main(){
	cout << "Kasus A"<<endl;
	cout << "Input Baris : "; cin >> B;
	cout << "Input Kolom : "; cin >> K;
	cout << "Bilangan 1 : "; cin >> I1;
	cout << "Bilangan 2 : "; cin >> I2;
	cout <<endl;
	string arr[B][K];
	for(int x = 0; x < B; x++){
		for(int y = 0; y < K; y++){
			if((((x+1)+(y+1)) % I1 == 0) or (((x+1)+(y+1)) % I2 == 0)){
				arr[x][y] = "M ";
			}else{
				arr[x][y] = "A ";
			}
		}
	}	
	for(int x = 0; x < B; x++){
		for(int y = 0; y < K; y++){
			cout <<arr[x][y];
		}
		cout << endl;
	}	
	cout <<endl;
	return 0;
}
