
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

int myCEIL(float number)
{

    if (abs(getFractionPart(number)) > 0)
        if (number > 0)
            return (int)number + 1;
        else
            return (int)number;
    else
        return (int)number;
}



int main()
{

    float number = readNumber("please enter a FLOAT number: ");

    cout << "My CEIL  is: " << myCEIL(number) << endl;
    cout << "C++ ceil is : " << ceil(number) << endl;

    return 0;
}

