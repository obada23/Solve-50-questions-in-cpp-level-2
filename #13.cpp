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
void printNormalPattern(int number)
{
    cout << endl;
    for(int i=1;i<=number;i++) 
    {
        for(int j=1;j<=i;j++) 
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl; 

}
int main()
{
    printNormalPattern(readPositiveNumber("Please enter a positive number?"));
    return 0;
}