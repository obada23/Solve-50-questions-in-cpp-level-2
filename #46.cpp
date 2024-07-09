#include <iostream>
#include <cmath>
using namespace std;

int readNumber(int number)
{
    cout << "Enter the number? ";
    cin >> number;
    cout << endl;
    return number;
}

float myAbs(float number)
{
    if(number<0)
        return -number;
    else return number;
}

int main()
{cout << endl;

    int number = readNumber(number);;    
    cout << "My abs Result :" << myAbs(number) << endl << endl;
    cout << "C++ abs Result :" << abs(number) << endl;



    cout << endl;

    return 0;
}