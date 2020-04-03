
#include "number.h"
#include <iostream>
void Number::print()
{
    const int MAX_SIZE = 4;
    int numbers[MAX_SIZE] = {}; //all elements to 0.
    int n = number; //make n hold the same value as number
    int i = 0;

    //while n is a whole number, it will be divided
    //by ten and the remainder saved in a int array
    // [ numbers ]. This breaks up the number
    while (n) {
        numbers[i++] = n % 10;
        n /= 10;
    }

    //if the value in the thousands place is not 0,
    //example 1234 instead of 0123
    if (numbers[3] != 0) {

        std::cout << lessThan20[numbers[3]] << " " << thousands << " ";
    }

    //if the value in the hundreds place is not 0,
    //example 123 not 0023.
    if (numbers[2] != 0) {
        std::cout << lessThan20[numbers[2]] << " " << hundreds << " ";
    }

    //if the value in the tens place is greater than 1
    //and value in the one's place is 0
    //example 20 not 10.
    if (numbers[1] > 1 && numbers[0] == 0) {
        std::cout << tens[numbers[1]] << " ";
    }

    //if the value in the tens place is 1
    //if 1 in the ten place, will make a new int
    //that is the value in the one's place + 10
    //this is to get the correct value between 10-19 to print
    //example 13 not 23
    if (numbers[1] == 1) {
        int combine = 10 + numbers[0];
        std::cout << lessThan20[combine] << " ";
    }

    //if value in the tens place is greater than 1
    //so is not 1 or 0
    //and the value in the one's place is not 0, I.E 1-9
    //example 21,33,99 not 10,19,
    if (numbers[1] > 1 && numbers[0] != 0) {
        std::cout << tens[numbers[1]] << " " << lessThan20[numbers[0]] << " ";
    }

    //if value in the 10s place is 0 and value in ones is not 0
    //this is to catch all numbers below 10
    if (numbers[1] == 0 && numbers[0] != 0) {
        if (number >= 100) //added to add the word "and"
            std::cout << "and "; //if the value of number [private member] is
        std::cout << lessThan20[numbers[0]] << " ";
    }

    //if the value of number == 0, print out zero
    //** number a private variable **
    if (number == 0) {
        std::cout << "Zero ";
    }
}
//end of print().

// start of a bunch of static const strings. First 2 are junk to make
//[num] matching more clear, so [2] == twenty instead of [1].
const std::string Number::tens[] = { "void1", "void2", "twenty", "thirty", "forty", "fifty",
    "sixty", "seventy", "eighty", "ninety" };

const std::string Number::lessThan20[] = { "Zero", "one", "two", "three", "four", "five", "six",
    "seven", "eight", "nine", "ten", "eleven",
    "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
    "eighteen", "nineteen" };

const std::string Number::hundreds = "hundred";
const std::string Number::thousands = "thousand";
