#include <iostream>
#include <cstdlib>

using namespace std;


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
        arr[i] = randomNumber(-100, 100);
    }
}

int negativeNumbersCounter(int arr[100], int arrayLength)
{
    int counter = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        if (arr[i] < 0)
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

    cout << "\nNegative Numbers count is: ";
    cout << negativeNumbersCounter(arr, arrayLength) << endl;

    return 0;
}