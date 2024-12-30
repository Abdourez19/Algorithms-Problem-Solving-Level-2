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

void invertedPattern(short number)
{
    
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

}



int main()
{

    invertedPattern(readNumberInRange("enter a number from 1 to 9: ", 1, 9));

    return 0;
}
