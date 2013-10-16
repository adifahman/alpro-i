#include<iostream>
using namespace std;
int x, y, B, K, N, pos, b_asal, b_tujuan;
string temp,s,delimiter;
int main(){
	cout<<"Kasus B"<<endl;
    cin >> N;
    cin >> K >> B;
    string arr[B][K];
   	for(x=0;x<B;x++){
		for(y=0;y<K;y++)
		cin >> arr[x][y];
    }
	cin >> b_asal >> b_tujuan;
	cout << endl;
	string tampung[K];
	//proses tukar
	for(x=0;x<K;x++){
		tampung[x] = arr[b_tujuan-1][x];
		arr[b_tujuan-1][x] = arr[b_asal-1][x];
		arr[b_asal-1][x] = tampung[x];
	}
	//output tukar
	for(x=0;x<B;x++){
		for(y=0;y<K;y++){
			cout << arr[x][y] << " ";
		}	
		cout << endl;
	}
	return 0;
}
