#include <iostream>
#include <cstdlib>

using namespace std;

enum enPrimeNumber { prime = 1, notPrime = 2 };

enPrimeNumber isPrimeOrNot(int number)  
{
    for (int counter = 2; counter <= ceil(number / 2); counter++)
    {
        if (number % counter == 0)
            return enPrimeNumber::notPrime;
    }
    return enPrimeNumber::prime;
}

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
    cout << endl;
}

void copyPrimeNumbersArray(int arr[100], int arr2[100], int ArrayLength ,int& array2Length)  
{
    int counter  = 0;

    for (int i = 0; i < ArrayLength; i++)                                
    {
        switch (isPrimeOrNot(arr[i]))
        {
        case (enPrimeNumber::prime):
            arr2[counter] = arr[i];
            counter++;
        }
    }
    array2Length = --counter;
}




int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrayLength;


    fillArrayWithRandomNumbers(arr, arrayLength);

    int array2[100], array2Length = 0;  
    copyPrimeNumbersArray(arr, array2, arrayLength,array2Length); 


    cout << endl << "Array Elements: \n";
    printArray(arr, arrayLength);


    cout << "\nArray of prime numbers after copy is: \n";
    printArray(array2, array2Length);

    return 0;
}

