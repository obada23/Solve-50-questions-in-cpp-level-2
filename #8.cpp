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


int frequencyNumber(int number,int digitToCheck)
{
    int counter=0;
    while(number!=0)
    {
        if(number%10==digitToCheck)
            counter++;
        number = number/10;
    }
    return counter;
}

void printFrequencyNumber(int number,int digitToCheck)
{
    cout << "Digit " << digitToCheck << " Frequency is " << frequencyNumber(number,digitToCheck) << " Times(s)." << endl;
    
}
int main()
{
    int number = readPositiveNumber("Please enter the main number?");
    short digitToCheck = readPositiveNumber("Please enter one digit to check?");
    printFrequencyNumber(number,digitToCheck);
    
    return 0;
} 