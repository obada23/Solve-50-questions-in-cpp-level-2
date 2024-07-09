#include <iostream>
using namespace std;

enum enCharType {SmallLetter=1, CapitalLetter=2, SpecialCharacter=3, Digit=4};

int randomNumber(int from, int to)
{
    return rand()%(to-from+1)+from;
}
int readHowManyKeysDoYouWant(string message)
{
    int keys;
    do
    {
        cout << message << endl;
        cin >> keys;
    }while(keys<=0);
    return keys;
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

string generateWords(enCharType charType,int length)
{
    string word="";
    for(int i=0;i<length;i++) 
    {
        word = word + getRandomChar(charType);
    }
    return word; 
}
string generateKey()
{
    string key ="";
    key = generateWords(CapitalLetter,4)+'-';
    key = key + generateWords(CapitalLetter,4)+'-';
    key = key + generateWords(CapitalLetter,4)+'-';
    key = key + generateWords(CapitalLetter,4);
    return key;
}

void generateKeys(short numberOfKeys)
{
    for(int i=0;i<numberOfKeys;i++)
    {
        cout << "K[" << i+1 << "] : ";
        cout << generateKey() << endl;
    }
        
}



int main()
{
    srand((unsigned)time(NULL));
    short keysNumber = readHowManyKeysDoYouWant("Please enter how many keys do you want to genrate?");
    generateKeys(keysNumber);
    return 0;
}
