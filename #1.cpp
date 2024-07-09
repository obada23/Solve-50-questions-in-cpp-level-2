#include <iostream>
using namespace std;
void printTableHeader()
{
    cout << "\n\n\t\t\tMultipliaction Table From 1 to 10" << endl << endl;
    cout << "\t";
    for(int i=1;i<=10;i++)
    {
        cout << i << "\t";
    }
    cout << "\n--------------------------------------------------------------------------------------" << endl;
}
string columSperator(int i)
{
    if(i<10)
        return  "   |";
    else
        return "  |";
}
void printMultiplicationTable()
{
    printTableHeader();
    for(int i=1;i<=10;i++)
    {
        cout << " " << i << columSperator(i) << "\t";
        for(int j=1;j<=10;j++)
            cout << i*j << "\t";
        cout << endl;
    }
}
int main()
{
    printMultiplicationTable();

    cout << "\n\n";
    return 0;
}