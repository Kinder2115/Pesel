#include <iostream>
using namespace std;

int main() {
	
    int pesel[11];
    string stringPesel;
    int testy;
    cin>>testy;
    while(testy--)
    {
        cin>>stringPesel;
        for (int i=0; i<stringPesel.length(); i++)
        {
            pesel[i]=stringPesel[i]; 
        }
        int suma = pesel[0]*1 + pesel[1]*3 + pesel[2]*7 + pesel[3]*9 + pesel[4]*1 + pesel[5]*3 +
                   pesel[6]*7 + pesel[7]*9 + pesel[8]*1 + pesel[9]*3 + pesel[10]*1;

        if(suma > 0)
        {
            if (suma % 10 == 0)
            {
                cout << "D" << endl;
            }
            else
            {
                cout << "N" << endl;
            }
        }
        else
        {
            cout << "N" << endl;
        }
    }
	return 0;
}
