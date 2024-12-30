#include <iostream>
#include <string>

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

int sumOfReversedNumbers(int number)
{
    int remainder = 0, sum =0; 

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        sum += remainder;
    }
    return sum;
}


int main()
{
    cout << "the Sum of Reversed Digits is: "
        << sumOfReversedNumbers(readPositiveNumber("Please enter a positive number: "))
        << endl;
    return 0;
}
