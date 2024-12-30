#include <iostream>

using namespace std;

string readPassword(string message)
{
    string pw;
    do
    {
        cout << message << endl;
        cin >> pw;
    } while (pw.length() != 3);

    return pw;
}

bool guessPassword( string password) 
{
    int counter = 0;
    string word = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                counter++; 
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                cout << "trial [" << counter << "]: " << word << endl; 

                if (word == password) 
                {
                    cout << endl <<"The password is: " << word << endl ;
                    cout << "Found after: " << counter <<endl;
                    cout << "***************** \n" << endl;
                    return true;
                }
                word = "";    
            }
            
        }
    }
    return false;
}


int main()
{
    guessPassword(readPassword("please enter Password of 3 CAPITAL LETTERS: "));
    return 0;
}


 