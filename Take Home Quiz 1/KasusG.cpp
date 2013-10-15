#include<iostream>
using namespace std;

/* Deklarasi */
int nBI;  // Nilai B. Ind
int nMTK; // Nilai Matematika
int nIPA; // Nilai IPA
int nBIg; // Nilai B.Ing
int sN;	  // Standar nilai
string rBI, rMTK, rIPA, rBIg;


int main(){

	/* Input */
    cout << "Nilai B. Indonesia : "; cin >> nBI;
    cout << "Nilai Matematika : "; cin >> nMTK;
    cout << "Nilai IPA : "; cin >> nIPA;
    cout << "Nilai B. Inggris : "; cin >> nBIg;
    cout << "Standar Nilai : "; cin >> sN;

	/* Proses */
    if(nBI < sN){
        rBI = " - Bahasa Indonesia";
    }
    if(nMTK < sN){
        rMTK = " - Matematika";
    }
    if(nIPA < sN){
        rIPA = " - IPA";
    }
    if(nBIg < sN){
        rBIg = " - Bahasa Inggris";
    }

	/* Output */
    if(rBI == "" && rMTK == "" && rIPA == "" && rBIg == ""){
        cout << "\nTidak ada mata pelajaran yang harus diremedial" << endl;
    }else{
        cout << "\nMata pelajaran yang harus di remedial" << rBI << rMTK << rIPA << rBIg << endl;
    }
}

