#include <iostream>

using namespace std;


int readPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0 || number > 100);
    return number;
}

int randomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

void fillArrayWithRandomNumbers(int arr[100], int& arrayLength)
{
    /*cout << "Please enter the length of the Array! (MAX length is 100): \n";
    cin >> arrayLength;*/
    arrayLength = readPositiveNumber("Please enter the length of the Array! (MAX length is 100): \n");

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] = randomNumber(1, 100);
    }
}

void fillArrayElements(int number, int arr[100], int& arrayLength)
{
    arrayLength++;
    arr[arrayLength - 1] = number;
}

void copyArrayElementsUsinAddElementFunction(int arr[100], int arr2[100],int& arrayLength2)
{
    for (int i = arrayLength2; i <= arrayLength2; i++)
        fillArrayElements(arr[i], arr2,arrayLength2);
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
    srand((unsigned)time(NULL));

    int arr[100], arrayLength, arr2[100], arrayLength2 = 0;

    fillArrayWithRandomNumbers(arr, arrayLength);
    copyArrayElementsUsinAddElementFunction(arr, arr2, arrayLength2); 

    cout << "Array 1 Elements: \n";
    printArray(arr, arrayLength);

    cout << "Array 2 Elements: \n";
    printArray(arr2, arrayLength2);


    return 0;
}
