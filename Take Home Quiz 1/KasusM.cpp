#include<iostream>
using namespace std;

/* Deklarasi */
int hDb[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // J. hari dalam bulan
int h1, h2; // Hari
int b1, b2; // Bulan
int th1, th2; // Tahun
int bThn, bHr; // Beda hari / tahun
int tBln; // Total bulan
int hrReg = 365; // J. hari dalam setahun
int tHari; // Jumlah hari

int main()
{

	/* Output */
	cout << "Tanggal awal : "; cin >> h1 >> b1 >> th1;
	cout << "Tanggal akhir : "; cin >> h2 >> b2 >> th2;
	cout << endl;

    /* Proses Tahun */
	if(th1 == th2){
		bThn = 0;
	}else{
		if(th1 % 4 == 0 && th1 % 100 != 0 || th1 % 400 == 0){
			if(th2 % 4 == 0 && th2 % 100 != 0 || th2 % 400 == 0){
				if(th1 > th2){
					bThn = (th1 - th2) * (hrReg) + 2;
				}else{
					bThn = (th2 - th1) * (hrReg) + 2;
				}if(b2 > b1){
					if(hDb[b1 - 1] > hDb[1]){
						--bThn;
					}
				}
			}else{
				if(th1 > th2){
					bThn = (th1 - th2) * (hrReg) + 1;
				}else{
					bThn = (th2 - th1) * (hrReg) + 1;
				}if(b1 > b2){
					if(hDb[b2 - 1] > hDb[1]){
						--bThn;
					}
				}
			}
		}else{
			if(th1 > th2){
				bThn = (th1 - th2) * (hrReg);
			}else{
				bThn = (th2 - th1) * (hrReg);
			}
		}
	}

    /* Proses Bulan */
	if(b1 == b2){
		tBln = 0;
	}else{
		if(b1 > b2){
			for(int i = (b1 - 1); i > (b2 - 1); i--){
				static int tBln_temp = 0;
				tBln_temp += hDb[i];
				tBln = tBln_temp;
			}
		}else{
			for(int i = (b1 - 1); i < (b2 - 1); i++){
				static int tBln_temp = 0;
				tBln_temp += hDb[i];
				tBln = tBln_temp;
			}
		}
	}

	/* Proses Hari */
	if (h1 == h2){
		bHr = 0;
		tHari = (bThn + tBln) - bHr;
	}else{
		if(h1 > h2){
			bHr = h1 - h2;
			tHari = (bThn + tBln) - bHr;
		}else{
			bHr = h2 - h1;
			tHari = (bThn + tBln) + bHr;
		}
	}


    /* Proses Tahun Kabisat */

    if(th1 > th2){
        for(int i = (th2 + 1); i < th1; i++){
            if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
                cout << endl;
                cout << i << endl;
                ++tHari;
            }
        }
    }else{
        for(int i = (th1 + 1); i < th2; i++){
            if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
                cout << endl;
                cout << i << endl;
                ++tHari;
            }
        }
    }


    /* Output */
	cout << "Jumlah hari : " << tHari << endl;
}
