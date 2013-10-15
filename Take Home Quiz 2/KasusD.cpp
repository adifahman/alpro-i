#include<iostream>
using namespace std;

int i, n, hn;
string h;

int main(){
	cin >> n;
	cin >> h;
	for(i = 0; i < n; i++){
		if(h == "Senin"){
			h = "Selasa";
		}else if(h == "Selasa"){
			h = "Rabu";
		}else if(h == "Rabu"){
			h = "Kamis";
		}else if(h == "Kamis"){
			h = "Jumat";
		}else if(h == "Jumat"){
			h = "Sabtu";
		}else if(h == "Sabtu"){
			h = "Minggu";
		}else if(h == "Minggu"){
			h = "Senin";
		}
		cout << h << endl;
	}
}
