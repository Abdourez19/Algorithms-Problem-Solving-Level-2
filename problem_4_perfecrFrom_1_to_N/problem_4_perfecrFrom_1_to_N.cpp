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

bool checkNumber(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return sum == number;
}

void printPerfectNumbers(int number)
{
    cout << "all Perfect numbers between " << 1 << " and " << number << " are " << endl;

    for (int i = 1; i <= number ; i++)
    {
        if (checkNumber(i))
            cout  << i << endl;
    }
}



int main()
{

    printPerfectNumbers(readPositiveNumber("Enter a Posivtive Number: "));
    return 0 ;
}
