// VShapedChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <exception>
#include <string>
using namespace std;
void drawVpt2(int size); 

int main()
{
    unsigned int v = 0;
    string input = "";
    cout << "Enter a number to draw a X, enter 'exit' to exit" << endl;
    while (getline(cin, input)) {
        if (input == "exit") {
            cout << "Exiting";
            return -1;
        }

        try {
            v = stoi(input);
        }
        catch (...) {
            cout << "Please enter a valid number" << endl;
            continue;
        }

        cout << "Enter the size of the V below: " << v << endl;
        drawVpt2(v);
    }
    return 0;
}
void drawVpt2(int size)
{
    int numberOfColumns = size * 2 -1 ;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= numberOfColumns; j++)
        {
            if (abs(i - size) == abs(j - size))
            {
                cout << "V";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
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
