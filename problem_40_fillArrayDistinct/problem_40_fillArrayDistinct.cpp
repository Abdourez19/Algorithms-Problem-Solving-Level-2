#include <iostream>

using namespace std;


void fillArrayHardCoded(int arr[100], int& arrayLength)
{
    arrayLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void addArrayElement(int number, int arr[100], int& arrayLength)
{
    arrayLength++;
    arr[arrayLength - 1] = number;
}

short findNumberPositionInArray(int numberToSearch, int arr[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        if (arr[i] == numberToSearch)
            return i;
    }
    return -1;
}

bool isNumberInArray(int numberToSearch, int arr[100], int arrayLength)
{
    return findNumberPositionInArray(numberToSearch, arr, arrayLength) != -1;
}

void copyDistinctNumbersToArray(int arr[100], int arr2[100] , int arrayLength, int& arrayLength2) 
{
    for (int i = 0; i < arrayLength; i++)
    {
        if (!isNumberInArray(arr[i], arr2, arrayLength2))
            addArrayElement(arr[i], arr2, arrayLength2);
    }
}

void printArray(int arr[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl << endl;
}


int main()
{
    int arr[100], arrayLength = 0 , arr2[100], arrayLength2 = 0; 

    fillArrayHardCoded(arr, arrayLength);
    copyDistinctNumbersToArray(arr, arr2, arrayLength, arrayLength2); 

    cout << "Array 1 Elements: \n";
    printArray(arr,10);

    cout << "Array 2 Distinct Elements: \n";
    printArray(arr2, arrayLength2);  

    return 0;
}

