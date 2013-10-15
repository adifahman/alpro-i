#include<iostream>
using namespace std;

/* Deklarasi */
float jTotal, jT1, jT2, jT3; // Jarak Tempuh
int g1, g2, g3;            // Gigi
float wT, w1, w2, w3;      // Waktu

int main(){

    /* Input */
    cout << "Masukan jarak total (max. 10000) : "; cin >> jTotal;
    cout << "Masukan gigi yang dipakai (1 - 4) : "; cin >> g1;
    cout << "Masukan jarak tempuh pertama (max. 10000) : "; cin >> jT1;
    cout << "Masukan gigi yang dipakai (1 - 4) : "; cin >> g2;
    cout << "Masukan jarak tempuh kedua (max. 10000) : "; cin >> jT2;
    cout << "Masukan gigi yang dipakai (1 - 4) : "; cin >> g3;

    /* Proses */
    jT3 = jTotal - (jT1 + jT2);

    switch(g1)
	{
		case 1:
			w1 = jT1 / 40; break;
		case 2:
			w1 = jT1 / 60; break;
		case 3:
			w1 = jT1 / 80; break;
		case 4:
			w1 = jT1 / 100; break;
		default:
			cout << "Gigi yang dimasukan salah !"; break;
	}

	switch(g2)
	{
		case 1:
			w2 = jT2 / 40; break;
		case 2:
			w2 = jT2 / 60; break;
		case 3:
			w2 = jT2 / 80; break;
		case 4:
			w2 = jT2 / 100; break;
		default:
			cout << "Gigi yang dimasukan salah !"; break;
	}

	switch(g3)
	{
		case 1:
			w3 = jT3 / 40; break;
		case 2:
			w3 = jT3 / 60; break;
		case 3:
			w3 = jT3 / 80; break;
		case 4:
			w3 = jT3 / 100; break;
		default:
			cout << "Gigi yang dimasukan salah !"; break;
	}

    wT = w1 + w2 + w3;

	/* Output */
	cout.precision(2);
    cout << fixed << "\nTotal Waktu Perjalanan : " << wT << endl;
}
