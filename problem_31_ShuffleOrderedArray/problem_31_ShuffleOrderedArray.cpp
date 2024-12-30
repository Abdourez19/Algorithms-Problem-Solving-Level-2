#include <iostream>
#include <cstdlib>

using namespace std;


void fillArrayFrom1ToN(int arr[100], int& arrLength) 
{
    cout << "How many Elements you want in Array!?: \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i + 1;
    }
}

int randomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

void swap(int& A, int& B)
{
    int temp;

    temp = A; 
    A = B;
    B = temp;
}

void printArray(int arr[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl << endl;
}

void shuffleArray(int arr[100], int arrayLength )
{
    for (int i = 0; i < arrayLength ; i++) 
    {
        swap(arr[randomNumber(0, arrayLength-1) ], arr[randomNumber(0, arrayLength-1)]);
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrayLength;

    fillArrayFrom1ToN(arr, arrayLength);
    cout << "\nArray Eelements BEFORE Shuffle: \n";
    printArray(arr, arrayLength); 

    shuffleArray(arr, arrayLength);
    cout << "\nArray Eelements AFTER Shuffle: \n";
    printArray(arr, arrayLength);  

    return 0;
}
