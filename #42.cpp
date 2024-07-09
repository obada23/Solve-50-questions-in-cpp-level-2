#include <iostream>
using namespace std;

int randomNumber(int from, int to)
{
    return rand()%(to-from+1)+from;
}

void fillArrayWithRandomNumber(int arr[],int length)
{
    for(int i=0;i<length;i++)
        arr[i] = randomNumber(1,100);
}

int readPositiveNumber(string message)
{
    int number;
    do{
        cout << message;
        cin >> number;

    }while(number<=0);
    cout << endl;
    return number;
}


void printArray(int arr[],int length)
{
    
    cout << "Array Elements : ";
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
}

int countOddNumber(int arr[],int arrLength)
{
    int count=0;
    for(int i=0;i<arrLength;i++)
        if(arr[i]%2!=0)
            count++;
    return count;

}



int main()
{cout << endl;
    srand((unsigned)time(NULL));

    int arrLength = readPositiveNumber("Please enter the length of the array? ");
    int arr[arrLength];

    fillArrayWithRandomNumber(arr,arrLength);

    printArray(arr,arrLength);

    cout << "Odd Number count is: " << countOddNumber(arr,arrLength) << endl;

    




    cout << endl;
    return 0;
}