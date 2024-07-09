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

void sortArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
        arr[i] = i+1;
}

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    
}

void printArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
}

void suffleArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        swap(arr[randomNumber(1,length)-1],arr[randomNumber(1,length)-1]);
    }
}



int main()
{cout << endl;
    srand((unsigned)time(NULL));

    int arrLength = readPositiveNumber("Please enter the length of the array?");
    int arr[arrLength];
    sortArray(arr,arrLength);
 
    cout << "Array elements before shuffle : " << endl;
    printArray(arr,arrLength);

    cout << "Array elements after shuffle : " << endl;
    suffleArray(arr,arrLength);
    printArray(arr,arrLength);
    

    cout << endl;
    return 0;
}