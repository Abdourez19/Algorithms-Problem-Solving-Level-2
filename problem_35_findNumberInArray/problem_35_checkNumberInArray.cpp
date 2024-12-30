#include <iostream>
#include <cstdlib>
#include <string>

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

void fillArrayWithRandomNumbers(int arr[100], int arrayLength)
{

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] = randomNumber(1, 100);
    }
}

short findNumberPositionInArray(int numberToSearch, int arr[100], int arrayLength )
{
    for (int i = 0; i < arrayLength; i++)
    {
        if (arr[i] == numberToSearch)
            return i;
    }
    return -1;
}

void printArray(int arr[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl << endl;
}

bool isNumberInArray(int numberToSearch, int arr[100], int arrayLength )
{
    return findNumberPositionInArray(numberToSearch, arr, arrayLength) != -1;
}

void printResult(int arr[100], int arrayLength, int numberToSearch)
{
    short numberPosition = findNumberPositionInArray(numberToSearch, arr, arrayLength );

    if (!isNumberInArray(numberToSearch,arr, arrayLength )) 
        cout << "No, the number is not found :-( ! \n\n";
    else
    {
        cout << "Yes, the number is  found :-) ! \n\n";
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrayLength = readPositiveNumber("How many elements you want in the Array!?");

    fillArrayWithRandomNumbers(arr, arrayLength);
    cout << "\nArray Eelements: \n\n";
    printArray(arr, arrayLength);

    int numberToSearch = readPositiveNumber("Please enter a number to search for!: ");

    printResult(arr, arrayLength, numberToSearch); 


    return 0;
}
