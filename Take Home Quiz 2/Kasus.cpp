#include<iostream>
using namespace std;

int x, y, n, A[10], bonus, jumlah, sisa;
int main(){
    cin >> y;
    cin >> n;

    for(x = 0; x < n; x++){
        cin >> A[x];
        jumlah += A[x];
    }

    if(y == 1){
        bonus = 20;
    }else if(y == 2){
        bonus = 35;
    }else if(y == 3){
        bonus = 60;
    }else if(y == 4){
        bonus = 100;
    }else if(y == 0){
        bonus = 0;
    }else{
        cout << "Inputan salah";
    }

    sisa = bonus - jumlah;

    cout << "Sisa bonus : " << sisa;
}
