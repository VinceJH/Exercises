// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <time.h>
#include <iostream>
using namespace std;

int numberGenerator();
void pickingNumber(int randomNumber);



int main()
{
	int randomNumber = 0;
	randomNumber = numberGenerator();
	pickingNumber(randomNumber);
}

int numberGenerator()
{
	
	cout << "\nGuessing Game:\nI will pick a number between 1 and 100\nYou will have 8 tries to guess it" << endl;
	cout << "Pick a Number Between 1 and 100: ";
	srand((unsigned int)time(NULL));
	int randomNumber= rand() % 100;	
	return randomNumber;
	
}
void pickingNumber(int randomNumber)
{
	
	
	int choice;
	int tries;

	for (tries = 0; tries < 8; tries++)
	{
		
		while (!(cin >> choice))
		{
			cout << "Pick a Number Between 1 and 100: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.ignore(choice > 100, choice < 1);
		}

		if (choice < randomNumber)
		{
			cout << "\nThe number is larger than yours!\nYou have " << 7 - tries << " guesses left." << endl;
			continue;
		}
		else if (choice > randomNumber)
		{
			cout << "\nThe number is smaller than yours!\nYou have " << 7 - tries << " guesses left." << endl;
			continue;
		}
		else
		{
			cout << "\nCongratulations You Won!\n" << "You had " << 7 - tries << " guesses left." << endl;
			break;
		}
				
	}
	if (tries > 7)
	{
		cout << "\nSorry you are out of guesses:(\nThe correct answer was: " << randomNumber << endl;
	

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
