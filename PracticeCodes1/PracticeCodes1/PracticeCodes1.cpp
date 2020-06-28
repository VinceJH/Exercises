// PracticeCodes1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//program for 1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7.... + 1/99 - 1/100.

#include <iostream>
using namespace std;
int main()
{
	double answer = 0.0;
	int j = -1; //changing the symbol + or -
	for (int i = 1; i <= 100; i++)//
	{
		j = (-j) ;
		answer = answer + j * 1.0 / i;		
	}
	cout << "The answer is: ";
	cout << answer;
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
