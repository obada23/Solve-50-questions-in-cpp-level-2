#include <iostream>
using namespace std;
enum enIsPerfectNumber {Perfect=1,NotPerfect=2};
int readPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    }while(number<=0);
    return number;
}
int sumDividuls(int number)
{
    int sum=0;
    for(int i=1;i<=number/2;i++)
        if(number%i==0)
            sum+=i;
    return sum;
    
}

enIsPerfectNumber checkPerfectOrNot(int number)
{
    return (sumDividuls(number) == number) ?  Perfect :  NotPerfect;
    
}

void printIfTheNumberIsPerfectOrNot(int number)
{
    checkPerfectOrNot(number) == Perfect ? cout << number << " is perfect." << endl
    : cout << number << " is not perfect." << endl;
}
int main()
{
    printIfTheNumberIsPerfectOrNot(readPositiveNumber("Please enter positive number?"));
    return 0;
}