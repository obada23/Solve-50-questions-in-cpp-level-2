#include <iostream>
#include <cmath>
using namespace std;

float readNumber()
{
    float number;
    cout << "Enter the number? ";
    cin >> number;
    cout << endl;
    return number;
}

int myCeil(float number)
{
    return number-int(number)==0 ? number
    : number>0 ? int(number)+1 : int(number);
}



int main()
{cout << endl;

    float number = readNumber();  
    cout << "My Ceil Result :" << myCeil(number) << endl << endl;
    cout << "C++ Ceil Result :" << ceil(number) << endl;



    cout << endl;

    return 0;
}