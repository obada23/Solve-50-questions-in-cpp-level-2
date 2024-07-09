#include <iostream>
using namespace std;

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

void readArrayElements(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout << "Element[" << i+1 <<"] : ";
        cin >> arr[i];
    }
    cout << endl;

}

void printArray(int arr[],int length)
{
    cout << "Original array : ";
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl;
    
}

int timesRepeted(int arr[],int number,int length)
{
    int counter=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]==number)
            counter++;
    }
    return counter;

} 


int main()
{
    int length = readPositiveNumber("Please enter the length of the array?");
    int arr[length];
    readArrayElements(arr,length);
    int number = readPositiveNumber("Read the number do you want to check:");
    printArray(arr,length);
    cout << "\nNumber " << number << " is repeted " << timesRepeted(arr,number,length) << " time(s)."<< endl;
    
    cout << endl;
    return 0;
}