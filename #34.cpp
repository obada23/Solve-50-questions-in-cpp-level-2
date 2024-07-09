#include <iostream>
using namespace std;
int i=0;
int randomNumber(int from, int to)
{
    return rand()%(to-from+1)+from;
}

int readPositiveNumber(string message)
{
    int number;
    do{
        cout << message << endl;
        cin >> number;

    }while(number<=0);
    cout << endl;
    return number;
}

void fillArrayWithRandomNumber(int arr[],int length)
{
    for(int i=0;i<length;i++)
        arr[i] = randomNumber(1,100);
}

void printArray(int arr[],int length)
{i++;
    cout << "Array " << i << " Elements : ";
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl<<endl;
}

int searchArray(int arr[],int arrLength,int searchNumber)
{
    cout << "Number you are looking for is : " << searchNumber << endl;
    for(int i=0;i<arrLength;i++)
    {
        if(arr[i]==searchNumber)
            return i;
    }

    return -1;
    
}



int main()
{cout << endl;
    srand((unsigned)time(NULL));

    int arrLength = readPositiveNumber("Please enter the length of the array?");
    int arr[arrLength];

    fillArrayWithRandomNumber(arr,arrLength);

    printArray(arr,arrLength);

    int searchNumber = readPositiveNumber("Please enter a number to search for?");
    int i = searchArray(arr,arrLength,searchNumber);
    if(i==-1)
        cout << "The number is not found :-(" << endl;
    else
    {
        cout << "The number found at position  : " << i << endl;
        cout << "The number found its order    : " << i+1 << endl;
    }

    

    cout << endl;
    return 0;
}