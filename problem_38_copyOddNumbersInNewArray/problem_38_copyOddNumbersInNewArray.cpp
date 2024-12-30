#include <iostream>

using namespace std;

enum enNumberType { odd = 1, even = 2 };


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

enNumberType checkNumberType(int num)
{
    int result = num % 2;
    if (result == 0) {
        return enNumberType::even;
    }
    else {
        return enNumberType::odd;
    }
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

void copyOddNumbersInNewArray(int arr[100], int arrayLength, int arr2[100], int& arrayLength2)
{
    for (int i = 0; i < arrayLength; i++)
    {
        if (checkNumberType(arr[i]) == enNumberType::odd)
            fillArrayElements(arr[i], arr2, arrayLength2);
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
    srand((unsigned)time(NULL));

    int arr[100], arrayLength, arr2[100], arrayLength2 = 0;

    fillArrayWithRandomNumbers(arr, arrayLength);
    copyOddNumbersInNewArray(arr,arrayLength, arr2, arrayLength2); 

    cout << "Array 1 Elements: \n";
    printArray(arr, arrayLength);

    cout << "Array 2 ODD numbers: \n";
    printArray(arr2, arrayLength2);


    return 0;
}

