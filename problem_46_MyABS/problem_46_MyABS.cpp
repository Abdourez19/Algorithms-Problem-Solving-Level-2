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

float MyABS(float number)
{
    if (number < 0)
        return -1 * number;
    else 
        return number;
}

int main()
{

    float number = readNumber("Please enter a number!: ");

    cout << "my ABS result: "<< MyABS(number)<<endl;
    cout << "C++ abs result: "<<abs(number)<<endl; 

	return 0;
}