// Report Card Proj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>
#include <iostream>
using namespace std;


int GetSelection();
int main()
{
    int x;
    x = (98 + 90 + 85 + 92 + 88 + 77 + 81 + 86) / 8;
    int selection = 0;
    while (selection != 3);
    {
        void DisplayMenu();
        selection =   GetSelection();

        switch (selection)
        {
        case 1:
            cout << "Math    = 98" << endl;
            cout << "English = 90" << endl;
            cout << "French  = 85" << endl;
            cout << "Science = 92" << endl;
            cout << "ISS     = 88" << endl;
            cout << "Music   = 77" << endl;
            cout << "Gym     = 81" << endl;
            cout << "Art     = 86" << endl;
            break;
        case 2:
            cout << "Your Average Mark is:  " << x << endl;
            break;
        case 3:
            cout << "Quitting The Report Card..." << endl;
            break;
        default:
            cout << "Invalid Selection" << endl;

        }
        

    }
    return 0;
}
void DisplayMenu()
{
    cout << "Report Card" << endl;
    cout << "press key 1 for Marks\npress key 2 for Average Score\npress key 3 to Quit" << endl;
}
int GetSelection()
{
    int selection;
    cout << "Enter Selection: ";
    cin >> selection;
    return selection;
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
