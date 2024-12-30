#include <iostream>
#include <cstdlib>

using namespace std;

enum stringType { smallLetter = 1, capitalLetter = 2, specialCharater = 3, digit = 4 };

int readPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

int randomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

char getRandomCharacter(stringType chartype )
{

    switch (chartype)
    {
    case (stringType::smallLetter):
        return  char(randomNumber(97, 122));
        break;
    case (stringType::capitalLetter):
        return  char(randomNumber(65, 90));
        break;
    case (stringType::specialCharater):
        return  char(randomNumber(33, 47));
        break;
    case (stringType::digit):
        return  char(randomNumber(48, 57));
        break;
    }
}

string GenerateWord(stringType charType, short length)
{
    string word;
    for (int i = 1; i <=length; i++)
    {
        word += getRandomCharacter(charType); 
    }
    return word;
}

string generateKey() 
{
    string theKey = "";
    
    theKey += GenerateWord(capitalLetter, 4) + '-';
    theKey += GenerateWord(capitalLetter, 4) + '-';
    theKey += GenerateWord(capitalLetter, 4) + '-';
    theKey += GenerateWord(capitalLetter , 4);
           
    return theKey;
}

void generateKeys(int number)
{
    int counter = 1;
    do
    {
        cout << "Key [" << counter << "] : " << generateKey() << endl;
        counter++;
    } while (counter <= number);
}



int main()
{
    srand((unsigned)time(NULL));
    generateKeys(readPositiveNumber("Please enter The Number of Keys: "));
    return 0;
}
