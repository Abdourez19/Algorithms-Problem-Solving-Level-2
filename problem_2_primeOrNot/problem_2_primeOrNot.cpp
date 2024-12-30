#include <iostream>

using namespace std;

enum enPrimeNumber { prime = 1, notPrime = 2 };


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

enPrimeNumber isPrimeOrNot(int number)
{
    for (int counter = 2; counter <= ceil(number / 2); counter++)
    {
        if (number % counter == 0)
            return enPrimeNumber::notPrime;
    }
    return enPrimeNumber::prime;
}

void printPrimeOrNot(int number)
{
    cout << "the prime number for " << 1 << " to " << number << " are: \n";

    for (int i = 1; i <= number; i++)
    {
        if (isPrimeOrNot(i)==enPrimeNumber::prime)
        {
            cout << i << endl; 
        }
    }
}


int main()
{

    printPrimeOrNot(readPositiveNumber("enter a positive number: "));
    return 0;
}