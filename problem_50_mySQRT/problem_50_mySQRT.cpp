
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

float mySQRT(float number)
{
    return pow(number, 0.5);
}



int main()
{

    float number = readNumber("please enter a FLOAT number: ");

    cout << "My SQRT  is: " << mySQRT(number) << endl;
    cout << "C++ sqrt is : " << sqrt(number) << endl; 

    return 0;
}