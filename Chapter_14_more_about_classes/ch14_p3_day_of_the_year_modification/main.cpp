#include "dayofyear.h" //brings in string
#include <iostream>
#include <limits>
using namespace std;
/*
 Modify the DayOfYear class, written in Programming challenge #2, to add a constructor
 that takes two parameters: a string object representing a month and an integer in
 the range of 0 - 31 representing the day of the month. The constructor should then
 initilize member of the class to represent the day specified by the month and day of month
 parameters. the constructor shouls terminate the program with an appropriate error
 message if the number entered for the day is outside the range of days for the given month
*/

// Didnt see need to modify when this could be redone alot easier / shorter.

int main()
{
    string Months[] = { "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December" };
    string Month_cpy;
    string usrMonth;
    int usrDay;
    int monthNum = 0;
    bool valid_month = false;
    bool leap_year = false;
    char leap;

    /* Well this do while seems to be working fine.
     * Asks the usr to enter the name of the month as a string.
     * Then converts it to all lowercase. Then starts a loop, copying each
     * string from the Months[] array and turning the first letter to lowercase.
     * Now both strings are 100% lowercase and compared. If a match is found, means
     * the user inputted a correctly spelt month so bool valid_month is changed
     * to true, and a break; ends the loop. Otherwise user is prompted to put in
     * a new month string.
     */

    do {
        cout << "Enter the name of the month you want to use (spelling matters)\n";
        cin >> usrMonth;

        monthNum = 0; //caught you, you lil bug!
        for (char& x : usrMonth)
            x = tolower(x);
        for (int count = 0; count < 12; count++) {
            Month_cpy = Months[count];
            Month_cpy[0] = tolower(Month_cpy[0]); //Only need to conver first letter's.

            if (usrMonth == Month_cpy) {
                cout << "Valid month!";
                valid_month = true;
                break;
            }
            monthNum += 1;
        }
    } while (valid_month == false);
    /*
       Asks the user to enter a number for the day.
       If cin.fails() as in if a char is entered or
       the value entered is not between 1 - 31,
       the input is trashed and user is prompted to try again.
    */
    cout << "Enter a value for the day 1 - 31\n";
    cin >> usrDay;
    while (cin.fail() || usrDay < 1 || usrDay > 31) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please try again.\n";
        cout << "Enter a value for the day 1 - 31\n";
        cin >> usrDay;
    }

    /*
        Promps the user to enter a Y or N for if its a leap year.
        Loops untill valid input is entered.
    */
    do {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Is this a leap year?\n";
        cin >> leap;
    } while (toupper(leap) != 'Y' && toupper(leap) != 'N');
    toupper(leap) == 'Y' ? leap_year = true : leap_year = false;

    DayOfYear First(Months[monthNum], usrDay, monthNum, leap_year);

     std::cout<<"\nTesting default copy constructor with prefix ++\n";
    for(int count = 0; count < 10; count++){
    DayOfYear Second = ++First;

    std::cout<<"Second.Dayz is = "<<Second.PrintDayz()<<" ";
    std::cout<<"First.Dayz is = "<<First.PrintDayz()<<std::endl;
    }
    std::cout<<"\n\n";
    std::cout<<"NOw testing the post fix ++\n";
    std::cout<<"Second's Dayz should be +1 greater than First's Dayz\n";
    DayOfYear Second = First;

for(int count = 0; count < 10; count++){
  Second = First++;
    std::cout<<"Second.Dayz = "<<Second.PrintDayz()<<" ";
    std::cout<<"First.Datz = "<<First.PrintDayz()<<std::endl;
}

std::cout<<"Now testing the Prefix -- operator \n";
for(int count = 0; count < 10; count++){
    --First;
   First.print();
   std::cout<<First.PrintDayz()<<std::endl;
}
std::cout<<"Now testing the Postfix --\n";
for(int count = 0; count < 15; count++)
{
    First--;
    First.print();
    std::cout<<First.PrintDayz()<<std::endl;
}

    return 0;
}
