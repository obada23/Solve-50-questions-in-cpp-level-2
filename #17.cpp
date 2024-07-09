#include <iostream>
using namespace std;
string readPassword(string message)
{
    string password;
    cout << message << endl;
    cin >> password;
    return password;
}
bool printGuessPasswork(string pass)
{
    cout << endl;
    string word="";
    int counter=1;
    for(int i=65;i<91;i++) 
    {
        for(int j=65;j<91;j++) 
            for(int k=65;k<91;k++)
            {
                word += char(i);
                word += char(j);
                word += char(k);
                cout << "Trail [" << counter << "] : " << word << endl;
                if(word==pass)
                {
                    cout << "\nPassword is " << word << endl;
                    cout << "Found after " << counter << " Trial(s)" << endl;
                    return true;
                }
                word = "";
                counter++;
            }
        
    }
    return false;

}
int main()
{
    printGuessPasswork(readPassword("Enter the password?"));
    return 0;
}