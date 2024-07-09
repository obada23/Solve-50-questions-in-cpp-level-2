#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;

    } while (number<=0);
    return number;
}

void numberInReversedOrder(int number)
{
    
    while(number!=0)
    {
        cout << number%10 << endl;
        number = number/10;
    }
}

void printNumberInReversedOrder(int number)
{
    cout << "Reverse is: " << endl;
    numberInReversedOrder(number);
    
}
int main()
{
    printNumberInReversedOrder(readPositiveNumber("Please enter positive number?"));
    return 0;
}