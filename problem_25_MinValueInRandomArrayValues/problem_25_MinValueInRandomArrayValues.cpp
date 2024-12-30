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

int minNumberINArray(int arr[100] , int ArrayLength )
{
    int minValue = arr[0] ;
    
    for (int i = 0; i < ArrayLength; i++)
    {
        if (arr[i] < minValue)                      
            minValue = arr[i];
    }
    return minValue; 
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrayLength , maxValue;


    fillArrayWithRandomNumbers(arr, arrayLength);
    cout << endl << "Array Elements: ";
    printArray(arr, arrayLength);

    cout << "Min Number is: " << minNumberINArray(arr , arrayLength ) << endl;

    return 0;
}
