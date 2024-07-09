#include <iostream>
using namespace std;

void fillArray(int arr[],int &length)
{
    for(int i=0;i<3;i++)
    {
        arr[i] = 10;
        length++;
    }
    for(int i=3;i<5;i++)
    {
        arr[i] = 50;
        length++;
    }
    for(int i=5;i<9;i++)
    {
        arr[i] = 70;
        length++;
    }
    for(int i=9;i<10;i++)
    {
        arr[i] = 90;
        length++;
    }
}

void printArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
}

void addArrayElement(int number,int copyArr[],int &copyLength)
{
    copyLength++;
    copyArr[copyLength-1] = number;

}

bool isNumberInArray(int number,int copyArr[],int copyLength)
{
    for(int i=0;i<copyLength;i++)
        if(copyArr[i]==number)
            return true;
    return false;
    
}

void copyDistinctNumbersOfArray(int arr[],int length,int copyArr[],int &copyLength)
{
    
    for(int i=0;i<length;i++)
        if(!isNumberInArray(arr[i],copyArr,copyLength))
            addArrayElement(arr[i],copyArr,copyLength);
        

}


int main()
{cout << endl;
    srand((unsigned)time(NULL));

    
    int arr[100],arrLength=0;

    fillArray(arr,arrLength);

    int copyArr[100],copyLength=0;

    cout << "Array 1 elements : ";
    printArray(arr,arrLength);
    
    copyDistinctNumbersOfArray(arr,arrLength,copyArr,copyLength);

    cout << "Array 2 distinct elements : ";
    printArray(copyArr,copyLength);

    cout << endl;
    return 0;
}