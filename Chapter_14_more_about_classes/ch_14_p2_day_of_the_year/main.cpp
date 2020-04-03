
#include <iostream>
#include <limits>
#include "dayofyear.h"

using namespace std;

int main()
{
    int user_input;
    cout<<"Enter a value 1-365, to get its month / day of the year.\n";
    cin>>user_input;
    while(cin.fail() || user_input < 1 || user_input > 365 )
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"User input was not valid.\n";
        cout<<"Please enter a value between 1 - 365\n";
        cin>>user_input;
    }
    DayOfYear dat(user_input);
    dat.Print();


    return 0;
}
