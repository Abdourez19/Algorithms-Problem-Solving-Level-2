#include <iostream>

using namespace std;


void fillArrayHardCoded(int arr[100], int& arrayLength)
{
    arrayLength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

}

bool isPalindromeArray(int arr[100], int arrayLength) 
{
    for (int i = 0; i < arrayLength / 2; i++)
    {
        if (arr[i] != arr[arrayLength - 1 - i])
            return false;
    }
    return true;
}

void printArray(int arr[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl << endl;
}

void printResultOfPalindrome(int arr[100], int arrayLength) 
{
    if (!isPalindromeArray (arr , arrayLength))
        cout << "No, Array is not Palindrome! \n ";
    else 
        cout << "Yes, Array is Palindrome! \n ";
}


int main()
{
    int arr[100], arrayLength ; 

    fillArrayHardCoded(arr, arrayLength); 
    cout << "Array 1 Elements: \n";
    printArray(arr, arrayLength);   

    printResultOfPalindrome(arr , arrayLength); 

    return 0;
}