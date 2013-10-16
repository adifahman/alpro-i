#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s;
    istringstream iss[5];
    
    for(int i = 0; i < 3; i++){
	    getline(cin, s);
	    istringstream iss(s);
    }
    do
    {
        string sub;
        iss[0] >> sub;
        cout << "Substring: " << sub << endl;
    } while (iss);

}
