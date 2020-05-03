// PracticeCode4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

unsigned long long int denominator(int factorial);
double numerator(double x, int exponent);

int main()
{
    double answer = 0.0;
    int j = -1;
    for (int i = 1; i <= 10; i += 2)
    {       
        j = (-j);
        int exponent = i;
        cout << exponent << endl;
        answer = answer + j * numerator(0.3,exponent) / denominator(i);
        cout << answer << endl;
        cout << numerator(0.3, exponent) << endl;
    }
    cout << "The Answer is: " << answer;
}
double numerator(double x, int exponent)
{
    double y = 1.0;
    for (int j = 1; j <= exponent; j++)
    {
       y = y* x;
    }
    return y;
}
unsigned long long int denominator(int factorial)
{
    unsigned long int y = 1;
    for (int j = 1; j <= factorial; j++)
    {
        y = y * j;
        
    }
    return y;
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
