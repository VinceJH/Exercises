﻿// PracticeCodes3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program for π/2 = ((2 x 2)/(1 x 3)) * ((4 x 4)/(3 x 5)) * ((6 x 6)/(5 x 7)) * .... * ((2n)^2) / ((2n - 1) * (2n + 1)).
#include <iostream>
using namespace std;

int main()
{
    double answer = 1.0;
    for (int i = 1; i <= 100; i++)
    {
        
        double numerator = (2.0 * i) * (2.0 * i);
        double denominator = 2.0 * i - 1;
        double denominator2 = 2.0 * i + 1;
        answer = answer * (numerator / (denominator * denominator2));
    }
    cout << "The Answer is: " << answer << endl;
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
