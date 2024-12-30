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
        arr[i] = randomNumber(1,100);
    }
}

short findNumberPositionInArray(int numberToSearch,int arr[100], int arrayLength )
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
        cout << arr[i] <<' ';
    }
    cout << endl << endl;
}

void printArrayDetails(int arr[100], int arrayLength, int numberToSearch) 
{
    short numberPosition = findNumberPositionInArray(numberToSearch, arr, arrayLength ); 

    if (findNumberPositionInArray(numberToSearch, arr, arrayLength ) == -1 )
        cout << "\nthe number is not found :-( ! \n\n";
    else
    {
        cout << "\nnumber you are looking for is: " << numberToSearch << endl; 
        cout << "The Number found at position: " << numberPosition << endl; 
        cout << "The Number found its order: " <<numberPosition + 1 << endl; 
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

    printArrayDetails(arr, arrayLength, numberToSearch);
    

    return 0;
}
