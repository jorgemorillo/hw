/* jm4144 hw3 q4
Write a program that asks the user to enter a Real number, then it asks the user to enter the
method by which they want to round that number (floor, ceiling or to the nearest integer).
The program will then print the rounded result. */

#include <iostream>

using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main()
{
    //vairbles
    double realInput, roundedNumber;
    int roundingMethod;

    //user inputs
    cout << "Please enter a Real number: \n";
    cin >> realInput;
    cout << "Choose your rounding method: \n";
    cout << "1. Floor round \n";
    cout << "2. Ceiling round \n";
    cout << "3. Round to the nearest whole number \n";
    cin >> roundingMethod;

    //calc
    roundedNumber = 4;

    //output
    cout << realInput;
    
    return 0;
}