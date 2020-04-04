#include "dayofyear.h"
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int user_input;
    int numOfDays = 365; //used so it can be +1'ed if its a
    char user_choice; //gets user choice for bool year or not
    bool b = false; //used for if its a year or not.

    cout << "Is this a leap year? N / Y \n";
    cin >> user_choice;
    while (cin.fail() || (toupper(user_choice) != 'Y' && toupper(user_choice) != 'N')) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Please enter either N or Y for leap year.\n";
        cin >> user_choice;
    }
    //for if its a leap year, makes the bool true and adds 1 to the num of days.
    if (toupper(user_choice) == 'Y') {
        b = true;
        numOfDays = 366;
    } else
        b = false;

    cout << "Enter a value 1 - " << numOfDays << ","
         << " to get its month / day of the year.\n";
    cin >> user_input;
    while (cin.fail() || user_input < 1 || user_input > numOfDays) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "User input was not valid.\n";
        cout << "Please enter a value between 1 - " << numOfDays << endl;
        cin >> user_input;
    }

    DayOfYear dat(user_input, b);
    dat.Print();

    return 0;
}
