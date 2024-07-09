#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType {SmallLetter=1, CapitalLetter=2, SpecialCharacter=3, Digit=4};

int randomNumber(int from, int to)
{
    return rand()%(to-from+1)+from;
}

char getRandomChar(enCharType charType)
{
    switch(charType)
    {
        case SmallLetter : { return char(randomNumber(97,122)); }
        case CapitalLetter : { return char(randomNumber(65,90)); }
        case SpecialCharacter : { return char(randomNumber(33,47)); }
        default : { return char(randomNumber(48,57)); }
    }
    
}

int main()
{
    srand((unsigned)time(NULL));
    
    cout << getRandomChar(SmallLetter) << endl;
    cout << getRandomChar(CapitalLetter) << endl;
    cout << getRandomChar(SpecialCharacter) << endl;
    cout << getRandomChar(Digit) << endl;

    return 0;
}