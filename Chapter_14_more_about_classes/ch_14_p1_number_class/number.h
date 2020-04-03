#ifndef NUMBER_H
#define NUMBER_H
#include <string>

class Number {
    int number;

public:

    Number(int n) { number = n; };
    void print();
    static const std::string tens[];
    static const std::string lessThan20[];
    static const std::string hundreds;
    static const std::string thousands;
    //~Number() { delete[] arr_ptr; }
};

#endif // NUMBER_H
