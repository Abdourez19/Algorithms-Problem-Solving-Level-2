#include <iostream>
#include <cstdlib>

using namespace std;




int randomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

void fillArrayWithRandomNumbers(int arr[100], int& arrayLength)
{
    cout << "Please enter the length of the Array! (MAX length is 100): \n";
    cin >> arrayLength;

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] = randomNumber(1, 100);
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

void copyArrayElementsReversedInOtherOne(int arr[100], int arrayLength, int reversedArray[100])
{
    
    for (int i = 0 ; i < arrayLength ; i++)
    {
        reversedArray[i] = arr[arrayLength - 1 - i];
    }
}


int main() 
{
    srand((unsigned)time(NULL));

    int arr[100], arrayLength , arrReversed[100]; 

    fillArrayWithRandomNumbers (arr, arrayLength);
    cout << "\nArray Eelements BEFORE Shuffle: \n";
    printArray(arr, arrayLength);

    copyArrayElementsReversedInOtherOne(arr, arrayLength, arrReversed); 
    cout << "\nArray Eelements reversed  in other one: \n";
    printArray(arrReversed, arrayLength); 

    return 0;
}
