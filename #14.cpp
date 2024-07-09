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
void printInvertedLetterPattern(int number)
{
    cout << endl;
    for(int i=number;i>0;i--) 
    {
        for(int j=1;j<=i;j++) 
        {
            cout << char(i+64);
        }
        cout << endl;
    }
    cout << endl;

}
int main()
{
    printInvertedLetterPattern(readPositiveNumber("Please enter a positive number?"));
    return 0;
}