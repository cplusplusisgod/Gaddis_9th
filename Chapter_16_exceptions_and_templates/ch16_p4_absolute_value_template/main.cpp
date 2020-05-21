#include <iostream>
#include <cmath>
using namespace std;

template <class T>
T absoluteValue(const T& val)
{
    T temp_val = abs(val);
    return temp_val;
}

int main()
{

    int test1 = -5;
    double test2 = -6.6;

    cout<<"First test1 = "<<test1<<" The absolute value is = "<<
        absoluteValue(test1)<<" After test1 still contains original value "<<test1<<endl;

    cout<<"Next test2 = "<<test2<<" The absolute value is = "<<
        absoluteValue(test2)<<" After test2 still contains original value "<<test2<<endl;

    //unsure what a negative char even means or does but it takes it -_0
//    char test = -35;
//    cout<<test<<endl;
//    cout<<absoluteValue(test)<<endl;
 //works just dont like it since there is no real negative char/ascii

    return 0;
}
