#include <iostream>
using namespace std;
enum enNumber {Prime=1, NotPrime=2};

enNumber checkIfPrime(int number)
{
    int i;
    for(i=number-1;i>1;i--)
    {
        if(number%i==0)
            break;
    }
    if(i==1)
        return Prime;
    return NotPrime;
    
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


int copyPrimeNumberArray(int arr[],int length,int copyArr[])
{
    int counter=0;
    for(int i=0;i<length;i++)
    {
        if(checkIfPrime(arr[i])==Prime)
        {
            copyArr[counter] = arr[i];
            counter++;
        }
             
    }
    return counter;
}


int main()
{cout << endl;
    srand((unsigned)time(NULL));

    int arrLength = readPositiveNumber("Please enter the length of the array?");
    int arr[arrLength];
    fillArrayWithRandomNumber(arr,arrLength);

    int copyArr[arrLength];
    int arrLength2=copyPrimeNumberArray(arr, arrLength, copyArr);

    cout << "Array 1 Element : ";
    printArray(arr,arrLength);
    
    cout << "Prime Number On Array 2 : ";
    printArray(copyArr,arrLength2);

    cout << endl;
    return 0;
}