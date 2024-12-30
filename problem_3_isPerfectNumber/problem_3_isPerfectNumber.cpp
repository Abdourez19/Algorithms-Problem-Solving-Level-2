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

    for (int i = 1; i <= number/2 ; i++) 
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return sum == number;
}

void printPerfectOrNot(int number)
{   

    switch (checkNumber(number) )
    {
    case (true):
        system("color 2F");
        cout << "the number " << number << " is: " << "PERFECT \n";
        break;
    case (false):
        system("color 4F");
        cout << "the number " << number << " is: " << "NOT PERFECT \n";
        break;
    }
}



int main()
{

    printPerfectOrNot(readPositiveNumber("Please enter a Positive Number!: "));
    return 0;
}
