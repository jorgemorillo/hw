//jm4144 - HW3 - Q3
//Write a program that calculates the solutions for the quadratic equation

#include <iostream>
#include <cmath>
using namespace std;

main (){
    
    double inputA, inputB, inputC, disc, sqrtDisc, quadOne, quadNeg, quadPos;
    double xOne, xTwo;

    //user inputs
    cout << "Please enter value of a: ";
    cin >> inputA;

    cout << "Please enter value of b: ";
    cin >> inputB;

    cout << "Please enter value of c: ";
    cin >> inputC;

    //calc
    disc = (inputB * inputB) - (4.0 * inputA * inputC);
    sqrtDisc = sqrt(disc);
    quadOne = (-1.0 * inputB)/(2.0 * inputA); //since discriment is 0. just do -b/2a
    quadNeg = ((-1.0 * inputB) - sqrtDisc)/(2.0 * inputA);
    quadPos = ((-1.0 * inputB) + sqrtDisc)/(2.0 * inputA);

    //output
    if (inputA == 0){
        cout << "This equation has no solution.";
    }
    else if (inputA == 0 && inputB == 0 && inputC == 0){
        cout << "This equation has an infinite number of solutions.";
    }
    else if (disc < 0){
        cout << "This equation has no real solutions";
    }
    else if (disc == 0){
        cout << "This equation has one real solution: x = " << quadOne;
    }
    else if (disc > 0){
        cout << "This equation has two real solution: x = " << quadNeg << " and x = " << quadPos;
    }

    return 0;
}
