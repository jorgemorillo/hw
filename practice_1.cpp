#include <iostream>
using namespace std;

int main (){
    int input, counter, spaceCount1, spaceCount2, pound1, dollar1, pound2, dollar2;
    cout << "enter a postive number: " << endl;
    cin >> input;

    for (counter = 1; counter <= input; counter++){
        cout << "#";
    }
    cout << endl;

    for (counter = 0; counter <= (input/2) -2; counter++) {
        cout << "#";
        for (spaceCount1 = 1; spaceCount1 <= counter; spaceCount1++){
            cout << " ";
        }
        cout << "$";
        for (spaceCount1 = input-4; spaceCount1 > counter*2; spaceCount1--){
            cout << " ";
        }
        cout << "$";
        for (spaceCount1 = 1; spaceCount1 <= counter; spaceCount1++){
            cout << " ";
        }
        cout << "#";
         cout << endl;
    }
    for (counter = 0; counter <= (input/2)-2; counter++){
        cout << "#";
        for (spaceCount1 = input/2; spaceCount1 >= 2*(counter); spaceCount1-=2){
            cout << " ";
        }
        cout << "$";
        for (spaceCount1 = 1; spaceCount1 <= 2*counter; spaceCount1++){
            cout << " ";
        }
        cout << "$";
        for (spaceCount1 = counter; spaceCount1 < (input/2); spaceCount1++){
            cout << " ";
        }
        cout << "#";
         cout << endl;
    }
    for (counter = 1; counter <= input; counter++){
        cout << "#";
    }
    cout << endl;

    return 0;
}