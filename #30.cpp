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
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
}


void sum2ArrayToThirdOne(int arr[], int arr2[], int arr3[] ,int length)
{
    for(int i=0;i<length;i++)
        arr3[i] = arr[i]+arr2[i];
}


int main()
{cout << endl;
    srand((unsigned)time(NULL));

    int arrLength = readPositiveNumber("Please enter the length of the array?");
    int arr[arrLength], arr2[arrLength], arr3[arrLength];
    fillArrayWithRandomNumber(arr,arrLength);
    fillArrayWithRandomNumber(arr2,arrLength);

        

    cout << "Array 1 elements : " << endl;
    printArray(arr,arrLength);
    
    cout << "Array 2 elements : " << endl;
    printArray(arr2,arrLength);

    sum2ArrayToThirdOne(arr,arr2,arr3,arrLength);

    cout << "Sum of array1 and array2 elements : " << endl;
    printArray(arr3,arrLength);

    cout << endl;
    return 0;
}