#include <iostream>
using namespace std;
enum enNumber {Prime=1, NotPrime=2};
int readNumber(string message)
{
    int n;
    do
    {
        cout << message << endl;
        cin >> n;
    }while(n<=0);
    
    return n;

}

enNumber checkIfPrime(int number)
{
    int i;
    for(i=number-1;i>1;i--)
    {
        if(number%i==0)
            break;
    }
    if(i==1)
        return Prime;
    return NotPrime;
    
}

void printPrimeFrom1ToN(int number)
{
    for(int i=1;i<=number;i++)
    {
        if(checkIfPrime(i) == Prime)
            cout << i << endl;
    }
}

int main()
{
    printPrimeFrom1ToN(readNumber("Enter the number?"));
    return 0;
}