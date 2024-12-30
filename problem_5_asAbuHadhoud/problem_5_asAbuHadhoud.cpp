#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber (string message) 
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

void getNumberReversed(int number)
{
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        cout << remainder << endl;
    }

}


int main()
{
    getNumberReversed(readPositiveNumber("Please enter a positive number: "));
    return 0;
}
