#include <iostream>
#include <cstdlib>

using namespace std;


//stringType readEnumType()
//{
//    int number;
//    do
//    {
//        cout << "********************************** \n";
//        cout << "type \"1\": for Small Letters\n";
//        cout << "type \"2\": for Capital Letters\n";
//        cout << "type \"3\": for Special Characters\n";
//        cout << "type \"4\": for Digits\n";
//        cout << "********************************** \n";
//        cout << endl << "Please choose a number form 1 to 4: \n";
//        cin >> number; 
//    } while (number < 1 || number > 4);
//    
//    return (stringType)number;
//}

enum stringType { smallLetter = 1, capitalLetter = 2, specialCharater = 3, digit = 4 };

int randomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

char getRandomCharacter(stringType message)
{

    switch (message)
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
        return  char(randomNumber(48, 57)) ;
        break;
    }
}



int main()
{
    srand((unsigned)time(NULL));

    cout << getRandomCharacter(stringType::smallLetter) << endl;  
    cout << getRandomCharacter(stringType::capitalLetter) << endl;  
    cout << getRandomCharacter(stringType::specialCharater) << endl; 
    cout << getRandomCharacter(stringType::digit ) << endl; 

    return 0;
}
