// FactorialwithRecursive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double answer1 = 0.0;
    double answer2 = 0.0;
    cout << "Solve For X Equation ax^2 + bx + c = 0";
    for (;;)
    {
        cout << "\nPlease Enter Number A: ";
        if (!(cin >> a)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    for (;;)
    {
        cout << "\nPlease Enter Number B: ";
        if (!(cin >> b)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    for (;;)
    {
        cout << "\nPlease Enter Number C: ";
        if (!(cin >> c)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        break;
    }

    if (a == 0)
    {
        answer1 = (-1) * (c / b);
        cout << "The Answer is: " << answer1 << endl;
        return 1;
    }
    if ((b * b) < (4 * a * c))
    {
        cout << "Math Error" << endl;
    }
    
    else
    {
        answer1 = ((-1) * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        answer2 = ((-1) * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "The First Answer is: " << answer1 << endl;
        cout << "The Second Answer is: " << answer2;
    }
}
