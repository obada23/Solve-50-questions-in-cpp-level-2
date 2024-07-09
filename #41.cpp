#include <iostream>
using namespace std;



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

void fillArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
        cin >> arr[i];
    cout << endl;

}


void printArray(int arr[],int length)
{
    
    cout << "Array Elements : ";
    for(int i=0;i<length;i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    
}

bool checkPalindrome(int arr[],int length)
{
    for(int i=0;i<length/2;i++)
    {
        if(arr[i]!=arr[length-1-i])
            return false;
    }
    return true;

}


void isPalindromeArray(int arr[],int length)
{
    (checkPalindrome(arr,length)) ? cout << "Yes array is Palindrome" << endl
    : cout << "No array is not Palindrome" << endl;
}




int main()
{cout << endl;
    srand((unsigned)time(NULL));

    int arrLength = readPositiveNumber("Please enter the length of the array? ");
    int arr[arrLength];

    fillArray(arr,arrLength);

    printArray(arr,arrLength);

    isPalindromeArray(arr,arrLength);

    

    




    cout << endl;
    return 0;
}