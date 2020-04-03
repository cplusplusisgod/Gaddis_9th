
#include "number.h"
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number between 0 - 9999:\n";
    cin >> num;
    while (cin.fail() || num < 0 || num > 9999) {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore last input
        cout << "You can only enter numbers 0 - 9999!\n";
        cout << "Enter a number.\n";
        cin >> num;
    }

    //initialize the number class with the user input num.
    Number number(num);
    number.print();

    return 0;
}
