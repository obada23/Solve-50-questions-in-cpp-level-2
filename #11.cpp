#include <iostream>
using namespace std;
int readPositiveNumber(string message)
{
    int number;
    cout << message << endl;
    cin >> number;
    return number;
    
}
int reverseNumber(int number)
{
    int remainder = 0, reversedNumber =0;
    while(number!=0)
    {
        remainder = number%10;
        number = number/10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    return reversedNumber;
}
bool IsPalindromNumber(int number)
{
    
    return reverseNumber(number)==number;
    
}

void printIfTheNumberIsPalindrom(bool number)
{
    if(number==1)
        cout << "Yes , it is a Palindrome number." << endl;
    else
        cout << "No , it is NOT a Palindrome number." << endl;
}

int main()
{
    printIfTheNumberIsPalindrom(IsPalindromNumber(readPositiveNumber("Please Enter a positive number")));
    return 0;
}