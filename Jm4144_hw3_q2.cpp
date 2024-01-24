//jm4144 - HW3 - Q2
//Write a program that computes a user's class.

#include <iostream>
using namespace std;



int
main (){
    
    string studentName;
    int gradYear, thisYear, yearDiff;
    string classStatus;
    
    //user prompts
    cout << "Please enter your name: ";
    cin >> studentName;
    
    cout << "Please enter your graduation year: ";
    cin >> gradYear;
    
    cout << "Please enter current year: ";
    cin >> thisYear;
    
    //calculate difference
    yearDiff = gradYear - thisYear;
    
    //conditions 
    if (yearDiff == 4) {
        classStatus = "Freshamn";
    }
    else if (yearDiff == 3) {
        classStatus = "Sophomore";
    }
    else if (yearDiff == 2) {
        classStatus = "Junior";
    }
    else if (yearDiff == 1) {
        classStatus = "Senior";
    }
    else if (yearDiff <= 0) {
        classStatus = "Graduate";
    }
    else {
        classStatus = "n/a";
    }
    
    //outputs
    cout << studentName << ", you are a " << classStatus <<endl;
    
    return 0;
}
