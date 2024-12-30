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

int sumOfArrayElements(int arr[100], int arrayLength)
{
    int sum = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrayLength, maxValue;


    fillArrayWithRandomNumbers(arr, arrayLength);
    cout << endl << "Array Elements: ";
    printArray(arr, arrayLength);

    cout << "the Sum is: " << sumOfArrayElements(arr , arrayLength) << endl; 

    return 0;
}
