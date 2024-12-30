#include <iostream>
#include <string>

using namespace std;

string readPassword(string message)
{
    string password;
    cout << message << endl;
    getline(cin , password) ;
    return password;
}

string encryptPassword(string password)
{
    int encryptionKey = 2;
    for (int i = 0; i <= password.length(); i++)
    {
        password[i] = char( (int)password [i] + encryptionKey );
    }
    return password;
}

string decryptPassword(string encryptedPw)
{
    int encryptionKey = 2;
    for (int i = 0; i <= encryptedPw.length(); i++)
    {
        encryptedPw[i] = ((int)encryptedPw[i] - 2);
    }
    return encryptedPw;
}

void printEncryptedDecryptedPassword()
{
    string pw = readPassword("Please Enter Password: ") ;
    cout << endl << "text before encryption is: " << pw <<endl;
    cout << "text after encryption is: " << encryptPassword(pw) << endl; 
    cout << "text after decryption is: " << decryptPassword(encryptPassword(pw)) <<endl << endl; 
}


int main()
{

    printEncryptedDecryptedPassword();

    return 0;
}
