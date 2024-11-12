// Kirolos Dimian
// Lab 11
// 11/12/24

// To include the headerfile for premade functions
#include <iostream>
#include <iomanip>
#include <cmath>

// To make sure I dont use std:: in every instance I had cout, endl.
using namespace std;

int main () // Making function main
{
	const int ARRAY_SIZE = 50; // To make the size 
	double alpha[ARRAY_SIZE];

    int i = 0;
    
    for (i = 0; i < 25; i++)
    {   
        alpha [i] = pow (i,2);

        if (i != 10 && i != 20)
            cout << alpha [i] << " ";       
    
        else 
        {
            cout << endl;
            cout << alpha [i] << " ";  
        }
    }

    for (i = 25; i < 50; i++)
    {
        alpha [i] = i * 3;

        if (i != 30 && i != 40 && i != 50)
            cout << alpha [i] << " ";

        else 
        {
            cout << endl;
            cout << alpha [i] << " ";  
        }
    }

    return 0;
}