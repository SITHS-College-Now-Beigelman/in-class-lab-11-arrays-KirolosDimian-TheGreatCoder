// Kirolos Dimian
// Lab 11
// 11/12/24

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	const int ARRAY_SIZE = 50;
	double alpha[ARRAY_SIZE];

    int i, p;
        
    for (i = 0; i < 10; i++)
    {
            alpha [i] = pow (i,2);
            cout << alpha [i] << " ";
            
    }
        cout << endl;

    for (i = 10; i < 20; i++)
    {
            alpha [i] = pow (i,2);
            cout << alpha [i] << " ";

    }
        cout << endl;

    for (i = 20; i < 25; i++)
    {
            alpha [i] = pow (i,2);
            cout << alpha [i] << " ";

    }


    for (i = 25; i < 30; i++)
    {
        alpha [i] = i * 3;
        cout << alpha [i] << " ";
    }
    cout << endl;

    for (i = 30; i < 40; i++)
    {
        alpha [i] = i * 3;
        cout << alpha [i] << " ";
    }
    cout << endl;

    for (i = 40; i < 50; i++)
    {
        alpha [i] = i * 3;
        cout << alpha [i] << " ";
    }
    cout << endl;

    return 0;
}