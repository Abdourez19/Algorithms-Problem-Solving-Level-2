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

int digitFrequency(int number, int digitTocheck) 
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


int main()
{
    int number = readPositiveNumber("please enter a number: "); 
    short frequencyDigit= readPositiveNumber("enter the number that you want it's frequency: ");

    cout << endl << "The frequency of " << frequencyDigit << " is: " 
         << digitFrequency(number, frequencyDigit) << " Time (s)!" << endl;
	return 0;
}
