#include <iostream>

using namespace std; 



void tableHeader()
{
    cout << "\t\t\t Multiplication Table From 1 to 10 \n\n";
    cout << "\t";

    for (int j = 1; j <= 10; j++)
    {
        cout << "\t" << j ;
    }
    cout << endl << endl << "-------------------------------------------------------------------------------------------\n";
}

void tableData()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << ' '<<i << "\t|";
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << i * j;
        }
        cout << endl;
    }
    
}

void printMultiplicationTable()
{
    tableHeader();
    tableData();
}

int main()
{
   
    printMultiplicationTable();
    return 0;
}
