NOT DONE YET, MUST ASK IF " Initialize the array so that the first 25 components are equal to the square of the counter (or index) variable and the last 25 
components are equal to 3 times the index variable." APPLIES TO THE OTHER PARTS
// Kirolos Dimian
// Lab 11
// 11/12/24

// To include the headerfile for premade functions
#include <iostream>
#include <iomanip>
#include <cmath>

// Headerfiles needed to be included for part 2
#include <cstdlib>
#include <ctime>


// To make sure I dont use std:: in every instance I had cout, endl.
using namespace std;

int main () // Making function main
{
	const int ARRAY_SIZE = 50; // To make the size of the array 50
	double alpha[ARRAY_SIZE]; // To make the array be named alpha

    int i = 0; // creates an int i to be equal to 0 (acts as a counter)
    
    // Parts 1 and 2 
    cout << endl; // skips a line for organization
    cout << "Parts 1 & 2" << endl; // To specify which parts to avoid confusion
    cout << endl; // skips a line for organization

    for (i = 0; i < 25; i++) // creating a for loop for it to skip lines
    {   
        alpha [i] = pow (i,2); // for every number 1-24, it would square the number

        if (i != 10 && i != 20) // When the number isnt 10 or 20 (since this is when the new line should be)
            cout << alpha [i] << " "; // just print the number with a space
    
        else // else statement so for 10 and 20
            cout << endl << alpha [i] << " ";  // Makes a new line and then prints the value for either 10 or 20 respectivly
    }

    for (i = 25; i < 50; i++) // creates a loop fr the numbers 25-49
    {
        alpha [i] = i * 3; // for every number in the loop it would multiply by 3

        if (i != 30 && i != 40) // When the number isnt 30 or 40(since this would be on a new line )
            cout << alpha [i] << " "; // just print the number with a space

        else // else part for 30 or 40
            cout << endl <<  alpha [i] << " "; // skip a line and print the number on a new line
    }

    // Parts 3, 4 and 5
    cout << endl; // skips a line for organization
    cout << endl; // skips a line for organization
    cout << "Parts 3, 4, and 5" << endl; // prints out which parts to avoid confusion
    cout << endl; // skips a line for organization

    srand(time(0)); // makes it so that every time I run my code, I get different group of random numbers

	const int Size_Of_ARRAY = 100; // To make the size of the array 100
	double new_Array[Size_Of_ARRAY]; // To make the array be named new_Array
    double sum_Of_Scores = 0; // declaring a double variable to represent the sum of the scores for later average calculation
    double how_Many_100 = 0; // declaring a double variable to represent how many times the number '100' appeared in the array

    for (int s = 0; s < Size_Of_ARRAY; s++) // for loop to print the array
    {
        new_Array[s] = (rand() % 100) + 1; // random number between 1 and 100
        sum_Of_Scores += new_Array[s]; // constantly adds the random number to the sum variable so at the end, the variable has the total score

        if (new_Array [s] == 100) // makes an if statement so that each time it runs, if the random number is exactly equal to 100
            how_Many_100 += 1; // it would add one to this variable and the total is printed in the end
    }

    // Print each element in new_Array
    for (int s = 0; s < Size_Of_ARRAY; s++) // for loop for the array
        // if the number in the spot 10, 20, 30, etc. it would put it on a new line to print the array in the same way as the last parts
        if (s != 10 && s != 20 && s != 30 && s != 40 && s != 50 && s != 60 && s != 70 && s != 80 && s != 90)
            cout << new_Array[s] << " "; // prints with a space

        else 
            cout << endl << new_Array[s] << " "; // to print it on the new line
    
    cout << endl; // skips a line for organization

    // To calculate the Average
    double average_Score = sum_Of_Scores / Size_Of_ARRAY;
    cout << endl; // skips a line for organization
    cout << "The average of the scores in the array is " << average_Score << endl; // Print statement for the average scores

    // To print how many 100
    cout << endl; // skips a line for organization
    cout << "The number 100 was randomly selected " << how_Many_100 << " times" << endl; // Print statement for the amount of times '100' appeared. 


    return 0; // exits the code
}

/* Output
Parts 1 & 2

0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361 
400 441 484 529 576 75 78 81 84 87 
90 93 96 99 102 105 108 111 114 117 
120 123 126 129 132 135 138 141 144 147 

Parts 3, 4, and 5

52 78 20 32 49 45 32 59 15 11 
51 24 26 11 72 42 19 63 95 60 
92 77 73 55 28 18 49 15 9 48 
15 43 49 26 51 32 62 30 24 37 
74 38 58 46 34 82 97 82 66 98 
9 31 82 60 74 21 13 39 36 18 
81 40 31 21 59 55 41 33 28 30 
79 70 99 72 100 83 53 80 91 23 
92 14 12 42 21 56 94 58 74 6 
100 49 99 74 85 35 13 48 10 81 

The average of the scores in the array is 49.79

The number 100 was randomly selected 2 times
*/