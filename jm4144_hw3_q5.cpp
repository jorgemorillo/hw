/* jm4144 - hw3 - q5
bmi calulator */

#include <iostream>
using namespace std;

int main() {
    double weightLb, heightIn, weightKg, heightM, bmi;
    string weightStatus;
    
    //prompt
    cout << "Please enter weight (in pounds): ";
    cin >> weightLb;
    cout << "Please enter height (in inches): ";
    cin >> heightIn;

    //calc
    weightKg = weightLb * (0.453592);
    heightM = heightIn * (0.0254);
    bmi = weightKg / (heightM * heightM);

    if (bmi < 18.5){
        weightStatus = "Underweight";
    } else if (bmi >= 18.5 && bmi <= 25){
        weightStatus = "Normal";
    } else if (bmi > 25 && bmi < 30){
        weightStatus = "Overweight";
    } else {
        weightStatus = "Obese";
    }

    //output
    cout << "The weight status is: " << weightStatus; 

    return 0;
}