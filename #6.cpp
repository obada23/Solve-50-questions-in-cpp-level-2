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

int SumDigits(int number)
{
    int sum=0;
    while(number>0)
    {
        sum+=number%10;
        number = number/10;
    }
    return sum;
}

void printSumDigits(int number)
{
    cout << "Sum of digits = ";
    cout << SumDigits(number) << endl;
    
}
int main()
{
    printSumDigits(readPositiveNumber("Please enter positive number?"));
    return 0;
}