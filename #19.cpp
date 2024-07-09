#include <iostream>
#include <cstdlib>
using namespace std;
void printRandomNumber(int from, int to)
{
    cout << rand()%(to-from+1)+from << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    
    
    return 0;
}