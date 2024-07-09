#include <iostream>
using namespace std;
enum enNumber {Odd=1, Even=2};

enNumber checkIfOdd(int number)
{
    if(number%2==0)
        return Even;
    return Odd;
    
}

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
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
}

void addArrayElement(int number,int copyArr[],int &length)
{
    length++;
    copyArr[length-1] = number;

}

void copyOddNumbersOfArray(int arr[],int length,int copyArr[],int &copyLength)
{
    
    for(int i=0;i<length;i++)
    {
        if(checkIfOdd(arr[i])==Odd)
            addArrayElement(arr[i],copyArr,copyLength);
    }
        


}


int main()
{cout << endl;
    srand((unsigned)time(NULL));

    int arrLength = readPositiveNumber("Please enter the length of the array?");
    int arr[arrLength];

    fillArrayWithRandomNumber(arr,arrLength);

    int copyArr[100],copyLength=0;

    cout << "Array 1 elements : ";
    printArray(arr,arrLength);
    
    copyOddNumbersOfArray(arr,arrLength,copyArr,copyLength);

    cout << "Array 2 Odd numbers : ";
    printArray(copyArr,copyLength);

    cout << endl;
    return 0;
}