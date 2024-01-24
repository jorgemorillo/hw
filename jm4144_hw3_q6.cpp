/* jm4144 - hw3 - q6
write a program that calculates the cost of a call */

#include <iostream>
using namespace std;

const double MORNING_WEEKDAY_RATE = 0.4;
const double NIGHT_WEEKDAY_RATE = 0.25;
const double WEEKEND_RATE = 0.15;

int main (){
    //varilbles 
    string dayOfWeek; 
    double callLength, rate, cost;
    int hour, minute;
    char colon;
    
    //user inputs 
    cout << "Enter day of the week (Monday = Mo, Tuesday = Th, etc): ";
    cin >> dayOfWeek;
    cout << "Enter the time the call began (24hr HH:MM): ";
    cin >> hour >> colon >> minute;
    cout << "Enter the length of the call in minutes: ";
    cin >> callLength;

    //calc and sort 
    if ((dayOfWeek == "Sa") || (dayOfWeek == "Su")){
        //weekend rate
        rate = WEEKEND_RATE;
    } else if ((dayOfWeek == "Mo") || (dayOfWeek == "Tu") || (dayOfWeek == "We") || (dayOfWeek == "Th") || (dayOfWeek == "Fr")){
        //weekday 
        if ((hour >= 8) && (hour <= 18)){
            //morning
            rate = MORNING_WEEKDAY_RATE;
        } else if ((hour < 8) || ((hour > 18) && (hour < 24))){
            rate = NIGHT_WEEKDAY_RATE;
        } else {
            // 0
            rate = 0;
        }
    } else {
        // error
        rate = 0;
    }

    cost = callLength * rate;
    //output
    if (callLength >= 0){
        cout << "The cost of call : $" << cost;
    } else {
        cout << "invaild inputs";
    }
    return 0;
}