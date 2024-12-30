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

void printArray(int arr[100], int arrarLength)
{
    for (int i = 0; i < arrarLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void copyArray(int arr[100],int arr2[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = i; j <= i; j++)
        {
            arr2[j] = arr[i]; 
        }  
    }
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrayLength, maxValue, array2[100]; 


    fillArrayWithRandomNumbers(arr, arrayLength);
    copyArray(arr, array2, arrayLength );


    cout << endl << "Array Elements: \n";
    printArray(arr, arrayLength);


    cout << "\nArray 2 elements after copy is: \n";
    printArray(array2, arrayLength);

    return 0;
}
