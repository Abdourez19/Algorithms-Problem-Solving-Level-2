#include <iostream>
#include <cstdlib>

using namespace std;

enum enOddOrEven { odd = 1, even = 2 };


enOddOrEven isOddOrEven(int number)
{
    if (number % 2 == 0)
        return enOddOrEven::even;
    else
        return enOddOrEven::odd;
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

int randomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

void fillArrayWithRandomNumbers(int arr[100], int& arrayLength)
{
    arrayLength = readPositiveNumber("Please enter the length of the Array! (MAX length is 100): ");

    for (int i = 0; i < arrayLength; i++) 
    {
        arr[i] = randomNumber(1, 100); 
    }
}

int countOddNumbersInArray(int arr[100], int arrayLength)
{
    int counter = 0; 
    for (int i = 0; i < arrayLength; i++)
    {
        if (isOddOrEven(arr[i]) == odd)
            counter++;
    }
    return counter;
}

void printArray(int arr[100], int arrarLength)
{
    for (int i = 0; i < arrarLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrayLength;

    fillArrayWithRandomNumbers(arr, arrayLength);
    cout << endl << "Array Elements: ";
    printArray(arr, arrayLength);

    cout << "\nOdd Numbers count is: ";
    cout << countOddNumbersInArray(arr, arrayLength) << endl;

    return 0;
}

