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
    switch (roundingMethod){
        case FLOOR_ROUND:
            //floor round via cast (- 1 int for neg real numebers)
            if (realInput > 0){
                roundedNumber = int(realInput);
            } else if (realInput < 0){
                realInput = -1 * realInput; 
                roundedNumber = -1 * (int(realInput)-1); 
            } else {
                roundedNumber = 0;
            }
            break;
        case CEILING_ROUND:
            //cieling round
            if (realInput > 0){
                roundedNumber = int(realInput) +1;
            } else if (realInput < 0){
                realInput = -1 * realInput; 
                roundedNumber = -1 * (int(realInput)); 
            } else {
                roundedNumber = 0;
            }
            break;    
        case ROUND:
            //nearest interger
            if (realInput > 0 && (realInput - int(realInput) < 0.5 )){
                roundedNumber = int(realInput);
            } else if (realInput < 0 && ((-1*realInput)-(1*(int(realInput)))) < 0.5 ){
                realInput = -1* realInput;
                roundedNumber = -1 * (int(realInput)-1);
            } else if (realInput > 0 && (realInput - int(realInput) > 0.5)){
                roundedNumber = int(realInput) +1;
            } else if (realInput < 0 && ((-1*realInput)-(1*(int(realInput)))) > 0.5){
                realInput = -1 * realInput;
                roundedNumber = -1 * (int(realInput)); 
            }else {
                roundedNumber = 0;
            }
            break;
        default:
            //error
            cout << "ERROR -- Not a valid rounding method.";
            break;
    }

    //output
    cout << roundedNumber;
    
    return 0;
}