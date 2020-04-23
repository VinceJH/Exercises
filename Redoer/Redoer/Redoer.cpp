// Redoer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <sstream>
#include <exception>
#include <string>
using namespace std;
//functions
void rainbow(int size);
void preSpacer(int size, char theSpaces); //For spaces
//For the Colours
void printRed(int size, int numberOfLettersInRows); //Red
void printYellow(int size, int numberOfLettersInRows); //yellow
void printGreen(int size, int numberOfLettersInRows);// Green
void printBlue(int size, int numberOfLettersInRows); //Blue
void printPurple(int size, int numberOfLettersInRows); //\Purple



int main()
{
    unsigned int x = 0;
    string input = "";
    cout << "Enter a number to draw a rainbow, enter 'exit' to exit" << endl;
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
        cout << "Enter the size of the rainbow below: " << x << endl;
        rainbow(x);
    }
    return 0;
}
//rainbow function
void rainbow(int size)
{
    cout << "Rainbow size is " << size << "." << endl;
    //implementation here
    int numberOfPreSpaces = size;
    int numberOfLettersInRows = size * 2 + 2;
    int theRemainersForEnd = size % 5;
    int numberOfTimesRepeat  = size / 5;

    int i = 1;
    while (i <= numberOfTimesRepeat)
    {
        printRed(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printYellow(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printGreen(numberOfPreSpaces, numberOfLettersInRows );
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printBlue(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printPurple(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        numberOfLettersInRows = numberOfLettersInRows + 10;
        i++;
    }
    //Switch
    switch (theRemainersForEnd)
    {
    case 1:
        printRed(numberOfPreSpaces, numberOfLettersInRows);
        break;
    case 2:
        printRed(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printYellow(numberOfPreSpaces, numberOfLettersInRows);
        break;
    case 3:
        printRed(numberOfPreSpaces, numberOfLettersInRows );
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printYellow(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printGreen(numberOfPreSpaces, numberOfLettersInRows);
        break;
    case 4:
        printRed(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printYellow(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printGreen(numberOfPreSpaces, numberOfLettersInRows);
        numberOfPreSpaces = numberOfPreSpaces - 1;
        printBlue(numberOfPreSpaces, numberOfLettersInRows);
        break;
    }
    switch (theRemainersForEnd)
    {
    case 1:
        cout << "R";
        preSpacer(numberOfLettersInRows, ' ');
        cout << "R" << endl;
        break;
    case 2:
        cout << "RY";
        preSpacer(numberOfLettersInRows, ' ');
        cout << "YR" << endl;
        break;
    case 3:
        cout << "RYG";
        preSpacer(numberOfLettersInRows, ' ');
        cout << "GYR" << endl;
        break;
    case 4:
        cout << "RYGB";
        preSpacer(numberOfLettersInRows, ' ');
        cout << "BGYR" << endl;
        break;
    case 0:
        cout << "RYGBP";
        preSpacer(numberOfLettersInRows - 10, ' ');
        cout << "PBGYR" << endl;
    }
}
//function for creating prespaces
void preSpacer(int size, char theSpaces)
{
    int i = 1;
    while (i <= size)
    {
        cout << theSpaces;
        i++;
    }
}
//Functions for the Colours of the rainbows
//Red colour
void printRed(int numberOfPreSpaces, int numberOfLettersInRows)
{
    int i = 1;
    preSpacer(numberOfPreSpaces, ' ');
    while (i <= numberOfLettersInRows)
    {
        cout << "R";
        i++;
    }
    cout << endl;
}
//Yellow Colour
void printYellow(int numberOfPreSpaces, int numberOfLettersInRows)
{
    int i = 1;
    preSpacer(numberOfPreSpaces, ' ');
    cout << "R";
    while (i <= numberOfLettersInRows)
    {
        cout << "Y";
        i++;
    }
    cout << "R" << endl;
}
//Green Colour
void printGreen(int numberOfPreSpaces, int numberOfLettersInRows)
{
    int i = 1;
    preSpacer(numberOfPreSpaces, ' ');
    cout << "RY";
    while (i <= numberOfLettersInRows)
    {
        cout << "G";
        i++;
    }
    cout << "YR" << endl;
}
//Blue colour
void printBlue(int numberOfPreSpaces, int numberOfLettersInRows)
{
    int i = 1;
    preSpacer(numberOfPreSpaces, ' ');
    cout << "RYG";
    while (i <= numberOfLettersInRows)
    {
        cout << "B";
        i++;
    }
    cout << "GYR" << endl;
}
//Purple Colour
void printPurple(int numberOfPreSpaces, int numberOfLettersInRows)
{
    int i = 1;
    preSpacer(numberOfPreSpaces, ' ');
    cout << "RYGB";
    while (i <= numberOfLettersInRows)
    {
        cout << "P";
        i++;
    }
    cout << "BGYR" <<endl;
}