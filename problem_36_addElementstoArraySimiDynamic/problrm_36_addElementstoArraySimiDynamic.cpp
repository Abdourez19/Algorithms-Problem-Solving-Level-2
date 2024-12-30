#include <iostream>

using namespace std;


int readNumber()
{
    int number;
    cout << "enter a number: ";
    cin >> number;

    return number;
}

void fillArrayElements(int number, int arr[100], int& arrayLength)  
{
    arrayLength++;
    arr[arrayLength-1] = number;
}

void inputUserNumberInArray(int arr[100], int& arrayLength) 
{
    bool oneMore = true;
    do
    {
        fillArrayElements(readNumber(), arr, arrayLength);

        cout << "do you want to add more numbers? [0]:no,[1]:yes! ";
        cin >> oneMore;

    } while (oneMore);
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
    int arr[100], arraylength=0;

    inputUserNumberInArray(arr, arraylength); 

    cout << "\nArray Length: " << arraylength << endl;
    cout << "Array Elements: ";
    printArray(arr, arraylength);

    return 0;
}
