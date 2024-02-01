#include <iostream>
using namespace std;

int main (){
    char output;
    int counter, input, outterSpace, innerSpace, charCounter1, charCounter2;
    cout << "enter a number: "<< endl;
    cin >> input;
    output = 'a';
    for (counter = 0; counter < input; counter++){
        for (outterSpace = input - 1; outterSpace > counter; outterSpace--){
            cout << " ";
        } 
        cout << output;
        if (output != 'a'){
            for (innerSpace = 1; innerSpace <= (2 * counter)-1; innerSpace++){
                cout << " ";
            }
            cout << output;
        }
        output += 1;
        cout << endl;
    }
    output = 'a' + input -2;
    for (counter = 1; counter < input; counter++){
        for (outterSpace = 0; outterSpace <= counter-1; outterSpace++){
            cout << " ";
        }
        cout << output;
        if (output != 'a'){
            for (innerSpace = 1; innerSpace <=  2*(input -counter)-3; innerSpace++){
                cout <<" ";
            }
            cout << output;
        }
        output -= 1;
        cout << endl;
    }
    return 0;
}