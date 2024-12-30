
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

int myFLOOR(float number)
{
    int inPart = (int)number;

    if (number >= 0)
        return inPart;
    else
        return --inPart;
}
    


int main()
{

    float number = readNumber("please enter a FLOAT number: ");

    cout << "My FLOOR number is: " << myFLOOR(number) << endl;
    cout << "C++ floor number : " << floor(number) << endl;

    return 0;
}

