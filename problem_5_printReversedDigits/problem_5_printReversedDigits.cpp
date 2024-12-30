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

void getNumberReversed(int number) 
{
    string convertedNumber = to_string( number); 

    for (int i = convertedNumber.length(); i >=0 ; i--) 
    {
        cout << convertedNumber[i] << endl;
    }
  
}


int main()
{
    getNumberReversed(readPositiveNumber("Please enter a positive number: "));
    return 0;
}

