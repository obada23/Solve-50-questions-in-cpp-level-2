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
{
    i++;
    cout << "Array " << i << " Elements : ";
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
}

void copyArray(int arr[],int length,int copyArr[])
{
    for(int i=0;i<length;i++)
    copyArr[i] = arr[i];

}

int main()
{cout << endl;
    srand((unsigned)time(NULL));
    int arrLength = readPositiveNumber("Please enter the length of the array?");
    int arr[arrLength];
    fillArrayWithRandomNumber(arr,arrLength);
    printArray(arr,arrLength);
    int copyArr[arrLength];
    copyArray(arr,arrLength,copyArr);
    printArray(copyArr,arrLength);

    cout << endl;
    return 0;
}