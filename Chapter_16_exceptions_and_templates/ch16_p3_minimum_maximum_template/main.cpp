#include <iostream>

using namespace std;

template <class T>
T minimum(const T value1,const T value2){
    if(value1 <= value2){
        return value1;
    }else{
        return value2;
    }
}


template <class T>
T maximum(const T value1, const T value2)
{
    if(value1>=value2)
        return value1;
    else
        return value2;
}

int main()
{
    int val1 =-9;
    int val2 =-4;

    double val3 = 8.8;
    double val4 = 2.2;

    char char1 = 'b';
    char char2 = 'c';

    cout<<"using Int Smallest between -9 and -4  is: ";
    cout<<minimum(val2,val1)<<endl;
    cout<<"\n";

    cout<<"using Double Smallest between 8.8 and 2.2  is: ";
    cout<<minimum(val4,val3)<<endl;
     cout<<"\n";

    cout<<"using Char Smallest between 'b' and 'c'  is: ";
    cout<<minimum(char1,char2)<<endl;
    cout<<"\n";

    cout<<"using Int Largest between -9 and -4  is: ";
    cout<<maximum(val1,val2)<<endl;
    cout<<"\n";

    cout<<"using Double Largest between 8.8 and 2.2  is: ";
    cout<<maximum(val4,val3)<<endl;
    cout<<"\n";

    cout<<"using Char Largest between 'b' and 'c'  is: ";
    cout<<maximum(char1,char2)<<endl;
    cout<<"\n";







    return 0;
}

