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

float mySqrt(float number)
{
    return pow(number,0.5);
}

int main()
{
    float number = readNumber();
    cout << "My sqrt result : " << mySqrt(number) << endl;
    cout << "C++ sqrt result : " << sqrt(number) << endl;

    return 0;
}