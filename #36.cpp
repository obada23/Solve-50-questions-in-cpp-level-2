#include <iostream>
using namespace std;
int i=0;

int readPositiveNumber(string message)
{
    int number;
    cout << message;
    cin >> number;
    cout << endl;
    return number;
}

void addArrayElement(int number, int arr[], int &length)
{
    length++;
    arr[length-1] = number;

}


void readArrayNumbersSimiDynamic(int arr[],int &length)
{
    bool addMore;
    do
    {
        addArrayElement(readPositiveNumber("Please enter a number? "),arr,length);
        cout << "Do you want to add more numbers? [0]:No, [1]:Yes? ";
        cin >> addMore;
        cout << endl;

    }while(addMore);

}

void printArray(int arr[],int length)
{i++;
    cout << "Array " << i << " Elements : ";
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl<<endl;
}



int main()
{cout << endl;
    int arr[100],length=0;
    readArrayNumbersSimiDynamic(arr,length);
   
    cout << "\nArray Length: " << length << endl<<endl;
    printArray(arr,length);
    
   

    

    cout << endl;
    return 0;
}