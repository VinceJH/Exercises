// REMAKER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double numerator(int exponent, double x);
long int denominator(int factorial);

int main()
{
	double answer = 0.0;
	int y = 1;
	for (int j = 1; j <= 10; j+=2)
	{
		answer = answer + y * numerator(j, 0.3) / denominator(j);
		y = (-y);
	}
	cout << "The answer is: " << answer << endl;
}

double numerator(int exponent, double x)
{
	double theXanswer = 1.0;
	for (int i = 1; i <= exponent; i++)
	{
		theXanswer = theXanswer * x;
	}
	return theXanswer;
}
long int denominator(int factorial)
{
	double answerFac = 1.0;
	for (int i = 1; i <= factorial; i++)
	{
		answerFac = answerFac * i;
	}
	return answerFac;
}