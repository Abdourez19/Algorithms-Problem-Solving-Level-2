#include <iostream>

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

void readArray(int arr[100] ,int &arrLength)
{
    cout << "please enter the size of the array!: ";
    cin >> arrLength;

    cout << "\nenter array elements: \n"<<endl;

    for (int i = 0; i <= arrLength -1 ; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

void printArray(int arr[100], int arrLength)
{
    for (int i = 0; i <= arrLength - 1; i++)
    {
        cout << arr[i] << ' ';
    }
}

int timesRepeated(int arr[100] , int arrLength,int numberToCheck)
{

    int counter = 0;

    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (arr[i] == numberToCheck)
            counter++;
    }

    return counter ; 
}


void printResult(int returnedCounter, int arr[100], int arrLength,int numberTocheck) 
{
    
    if (returnedCounter) 
        cout << endl << endl << ' ' <<  numberTocheck << " is repeated " << returnedCounter << " time(s)!" << endl;
}



int main()
{
    int arr[100], arrLeng , numberToCheck ;

    readArray(arr, arrLeng);

    numberToCheck = readPositiveNumber("enter a number you want to check!: ");

    cout << " Original Array: ";
    printArray(arr, arrLeng);
    printResult(timesRepeated(arr, arrLeng, numberToCheck), arr, arrLeng, numberToCheck); 


    return 0;
}