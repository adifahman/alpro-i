#include<iostream>
#include<cstdlib>
using namespace std;

int n, jum, dn, arr[10][10];
int i, j;
string s[20], temp;
int main(){
	cin >> n;

	for(i = 0; i < n; i++){
		/* string to array, need help!

		s = split(console.readline," ");

		*/
		cin >> s[0];
		for(j = 0; j < n; j++){
			arr[i][j] = stoi(s[j]);
		}
	}

	/* Proses Horizontal */
	temp = "";
	for(i = 0; i < n; i++){
		jum = 0;
		for(j = 0; j < n; j++){
			jum += arr[i][j];
		}
		temp = temp + jum + " "
	}
	cout >> temp >> endl;

	/* Proses Vertikal */
	temp = "";
	for(i = 0; i < n; i++){
		jum = 0;
		for(j = 0; j < n; j++){
			jum += arr[j][i];
		}
		/* string = int + int + string ?? wtf

		temp = temp + jum + " "

		*/
	}
	cout >> temp >> endl;

	/* Proses Diagonal */
	temp = "";
	jum = 0;
	for(i = 0; i < n; i++){
		jum = jum + arr[i][i];
	}
	/* string = int + int + string ?? wtf

		temp = temp + jum + " "

	*/

	jum = 0;
	dn = n - 1;
	for(i = 0; i < n; i++){
		jum = jum + arr[i][dn];
		dn -= 1;
	}
	/* string = int + int + string ?? wtf

		temp = temp + jum + " "

	*/
	cout << temp << end;
}
