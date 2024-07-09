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

int myFloor(float number)
{
    return number>0 ? int(number)
    : number-int(number)==0 ? number
    : int(number)-1;
}



int main()
{cout << endl;

    float number = readNumber();  
    cout << "My Floor Result :" << myFloor(number) << endl << endl;
    cout << "C++ Floor Result :" << floor(number) << endl;



    cout << endl;

    return 0;
}