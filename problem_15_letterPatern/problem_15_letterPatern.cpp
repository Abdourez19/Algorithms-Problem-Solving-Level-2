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
    for (int i = 65 ; i <= 65 + number - 1; i++)        
    {           
        for (int j = 1; j <= i - 65 + 1; j++)
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
