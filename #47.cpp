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

int myRound(float number) 
{
    int integerPart;
    integerPart = int(number);
    float fractionPart = number-int(number);

    if(abs(fractionPart)>=0.5)
    {
        if(number>=0)
            return integerPart+1;
        else
            return integerPart-1;
    }
    
    else
        return integerPart;
        
    
}

int main()
{cout << endl;

    float number = readNumber();  
    cout << "My Round Result :" << myRound(number) << endl << endl;
    cout << "C++ Round Result :" << round(number) << endl;



    cout << endl;

    return 0;
}