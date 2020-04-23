// PeterChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <exception>
#include <string>
using namespace std;
void drawX(int size);
void drawXs(int size );
void theSpaceCreator(int size, char theSpaces);
void drawXpt2(int size);

int main()
{
    unsigned int x = 0;
    string input = "";
    cout << "Enter a number to draw a X, enter 'exit' to exit" << endl;
    while (getline(cin, input)) {
        if (input == "exit") {
            cout << "Exiting";
            return -1;
        }

        try {
            x = stoi(input);
        }
        catch (...) {
            cout << "Please enter a valid number" << endl;
            continue;
        }

        cout << "Enter the size of the X below: " << x << endl;
         drawXpt2(x);
    }
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
/*void drawX(int size)
{
    cout << "The X size is " << size << "." << endl;
    int spaces = size * 2 - 3;
    if (size == 1)
    {
        cout << "X" << endl;
    }
    if (size == 2)
    {
        cout << "X";
        theSpaceCreator(size, ' ');
        cout << "X" << endl;
        theSpaceCreator(size, ' ');
        cout << "X" << endl;
        cout << "X";
        theSpaceCreator(size, ' ');
        cout << "X" << endl;
    }
    if (size == 3)
    {
        cout << "X";
        theSpaceCreator(size, ' ');
        cout << "X" << endl;
        cout << " X";
       
        cout << "X";
    }
}
void theSpaceCreator(int size, char theSpaces)
{
    int i = 1;
    while (i <= size )
    {
        cout << theSpaces;
        i++;
    }
}*/
void drawXs(int size)
{
    int x = 0;
    int y = 0;
    int totalColumns = size * 2 - 1;
    for (int i = 1; i <= totalColumns; i++)
    {
        x = i;
        
        for (int j = 1; j <= totalColumns; j++)
        {
            y = j;
            if (abs(x - size) == abs(y - size))
            {
                cout << 'X' ;
            }
            else
            {
                cout << '-' ;
            }
        }
        cout << endl;
    }

}
void drawXpt2(int size)
{
    int numberOfColumns = size * 2 - 1;
    for (int i = 1; i <= numberOfColumns; i++)
    {
        for (int j = 1; j <= numberOfColumns; j++)
        {
            if (abs(i - size) == abs(j - size))
            {
                cout << "X";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
}






























