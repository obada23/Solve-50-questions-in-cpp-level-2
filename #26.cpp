#include <iostream>
using namespace std;

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
    cout << "Array Elements : ";
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int printSumArrayElement(int arr[],int length)
{
    int sum=0;
    cout << "Sum of all number : ";
    for(int i=0;i<length;i++)
    {
        sum+=arr[i];
    }
    return sum;

}

int main()
{cout << endl;
    srand((unsigned)time(NULL));
    int arrLength = readPositiveNumber("Please enter the length of the array?");
    int arr[arrLength];
    fillArrayWithRandomNumber(arr,arrLength);
    printArray(arr,arrLength);
    cout << printSumArrayElement(arr,arrLength) << endl;

    cout << endl;
    return 0;
}