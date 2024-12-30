#include <iostream>

using namespace std;

int readNumberInRange(string message, int from, int to)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);
    return number;
}

void printLetterPattern(int number)
{
    for (int i = 64 + number ; i >= 65; i--)       
    {
        for (int j = 64  ; j < i ; j++)             
        {
            cout << char(i);                       
        }
        cout << endl;
    }
}



int main()
{

    printLetterPattern(readNumberInRange("enter a number from 1 to 26: ", 1, 26));
    return 0;
}
