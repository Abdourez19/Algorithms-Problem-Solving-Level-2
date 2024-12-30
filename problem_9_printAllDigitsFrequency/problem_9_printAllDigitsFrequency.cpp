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

int digitFrequency(int number, short digitTocheck)
{
    int remainder = 0, freq = 0;

    while (number > 0)
    {
        //int counter = 0; 
        remainder = number % 10;
        number = number / 10;
        if (digitTocheck == remainder)
            //counter += 1;
            freq += 1;
    }
    return freq;
}

void printAllDigitsFrequency(int number)
{
    for (int i = 0; i < 10; i++)
    {
        if (digitFrequency(number, i) > 0)
            cout << "Frequency of " << i << " is: \"" 
                 << digitFrequency(number, i) << "\"" << " time(s)!" << endl;
    }
}


int main()
{
    printAllDigitsFrequency(readPositiveNumber("Please enter a positive number: "));

    return 0;
}

