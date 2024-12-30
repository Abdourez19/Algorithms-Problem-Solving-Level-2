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

    //here are 2 ways to do it ____ the second way is commented, it's using the to_string() function and stoi() //my way.

{
    //string numAsString;
    int remainder = 0, number2 = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        //numAsString += to_string(remainder);
        number2 = number2 * 10 + remainder;
    }
    //return stoi(numAsString); 
    return  number2;
}


int main()
{
    cout <<"Reversed Number = " << reverseNumber(readPositiveNumber("Please enter a positive number: "));
    return 0;
}
