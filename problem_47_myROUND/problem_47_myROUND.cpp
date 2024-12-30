#include <iostream>
#include <cmath>

using namespace std;

float readNumber(string message)
{
    float number;
    cout << message << endl;
    cin >> number;
    return number;
}

float getFractionPart(float number)
{
    return number - (int)number;
}

int myROUND (float number)
{
    int inPart = (int)number;
    float fractionPart = getFractionPart(number);

    if (abs(fractionPart) >= .5)
    {
        if (number >= 0)
            return ++inPart;
        else
            return --inPart;
    }
    else
        return inPart; 
}


int main()
{

    float number = readNumber("please enter a FLOAT number: ");

    cout << "My ROUND number is: " << myROUND(number) << endl;
    cout << "C++ round number : " << round(number)<< endl;

    return 0;
}

