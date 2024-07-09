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

/* string numberInReversedOrder(int number)
{
    
    string reversedNumber="";
    while(number!=0)
    {
        reversedNumber += to_string(number%10);
        number = number/10;
    }
    return reversedNumber;
} */

int ReveseNumber(int number)
{
    int remainder = 0, number2 =0;
    while(number!=0)
    {
        remainder = number%10;
        number = number/10;
        number2 = number2 * 10 + remainder;
    }
    return number2;
}

void printNumberInReversedOrder(int number)
{
    cout << "Revese is : " << endl;
    cout << ReveseNumber(number) << endl;
    
}
int main()
{
    printNumberInReversedOrder(readPositiveNumber("Please enter positive number?"));
    return 0;
}