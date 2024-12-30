#include<iostream>
#include <cstdlib>

using namespace std;

int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}


int main() 
{ //Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));

	cout << randomNumber(10, 20) << endl;
	cout << randomNumber(100, 105) << endl;
	cout << randomNumber(1000, 1010)<<endl;
	
	
	return 0; 
}