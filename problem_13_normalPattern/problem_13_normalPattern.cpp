#include <iostream>

using namespace std;

short readNumberInRange(string message, int from, int to)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 1 || number > 9);
    return number;
}

void printNormalPattern(short number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i ;
        }
        cout << endl;
    }
}



int main()
{
    printNormalPattern(readNumberInRange("enter a number from 1 to 9: ", 1, 9));
    return 0;
}
