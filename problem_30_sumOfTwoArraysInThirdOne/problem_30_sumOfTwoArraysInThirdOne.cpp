#include <iostream>
#include <cstdlib>

using namespace std;


int randomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

int readPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

void fillArrayWithRandomNumbers(int arr[100], int arrayLength)
{
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

void sumOfTwoArraysValuesAccordingly(int arr1[100], int arr2[100], int arr3[100], int arrayLength)
{
    
        for (int i = 0; i <= arrayLength ; i++)
        {
            arr3[i] = arr1[i] + arr2[i]; 
        }
}



int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arrayLength, arr2[100], arr3[100];
    arrayLength = readPositiveNumber("How Many Elements?");

    fillArrayWithRandomNumbers(arr1, arrayLength);
    fillArrayWithRandomNumbers(arr2, arrayLength);
    sumOfTwoArraysValuesAccordingly(arr1, arr2, arr3, arrayLength);

    cout << endl << "Array 1 Elements: \n";
    printArray(arr1, arrayLength);

    cout << endl << "Array 2 Elements: \n";
    printArray(arr2, arrayLength);


    cout << "\nsum of the two arrays in the new one is: \n";
    printArray(arr3, arrayLength);

    return 0;
}
