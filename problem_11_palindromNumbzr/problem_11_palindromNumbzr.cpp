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

int reverseNumber(int number)

{
    int remainder = 0, number2 = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        number2 = number2 * 10 + remainder;
    }
    return  number2;
}

bool checkPalindromeNumber(int number)
{
    return (number == reverseNumber(number));
}

string printIfPalindromeNumberOrNot(int number, int reversedNumber)
{
    bool palindrome = checkPalindromeNumber(number); 

    if (palindrome) 
        return "Yes, the Number " + to_string(number) + " is PALINDROME!";
    else 
        return "No,the number " + to_string(number) + " is NOT PALINDROME!";
}



int main()
{
    int number = readPositiveNumber("Please enter a positive number: ");
    int reversedNum = reverseNumber(number);
    cout << endl << printIfPalindromeNumberOrNot(number, reversedNum) << endl;
    return 0;
}