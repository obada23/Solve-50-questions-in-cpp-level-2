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


int orderedDigits(int number)
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

void printDigitInOrder(int number)
{
   cout << "Digit in order : " << endl;
   while(number>0)
   {
        cout << number%10 << endl;
        number = number/10;
   }  
    
}
int main()
{
    printDigitInOrder(orderedDigits(readPositiveNumber("Please enter the main number?")));
    
    return 0;
} 