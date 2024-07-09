#include <iostream>
using namespace std;

string readName(string message)
{
    string name;
    cout << message << endl;
    getline(cin,name);
    return name;
}
string encriptName(string &name,short key)
{
    for(int i=0;i<name.length();i++)
    {
        name[i] = char((int)name[i]+key);
    }
    return name;
}
string decriptName(string &name,short key)
{
    for(int i=0;i<name.length();i++)
    {
        name[i] = char((int)name[i]-key);
    }
    return name;
}
void printName(string name)
{
    cout << "Text Before Encryption : " << name << endl; 
    cout << "Text After Encryption : " << encriptName(name,2) << endl; 
    cout << "Text After Decryption : " << decriptName(name,2) << endl; 
}

int main()
{
    
    printName(readName("Please enter your name?"));
}