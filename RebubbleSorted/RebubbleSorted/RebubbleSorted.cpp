// RebubbleSorted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int bubbleSort(int numbersSort[], int numberOfnumbers);//return number of runs

int main()
{
	int numberOfRunTimes = 0;

	int numbersSort[] = {4,3,5,2,7,1,8,6 };
	cout << "Before the Sort: ";
	for (int i = 0; i < 8; i++)
	{
		cout << numbersSort[i];
	}
	cout << endl;
	numberOfRunTimes = bubbleSort(numbersSort, 8);
	cout << "After the Sort: ";
	for (int i = 0; i < 8; i++)
	{
		cout << numbersSort[i];
	}
	cout << "\nRun " << numberOfRunTimes << " times." << endl;

}

int bubbleSort(int numbersSort[], int numberOfnumbers)
{
	int numberOfRunTimes = 0;
	bool swapped;
	int TMP;
	int numbers = numberOfnumbers - 1;
	for (;;)
	{
		numberOfRunTimes = numberOfRunTimes + 1;
		swapped = false;
		for (int i = 0; i < numberOfnumbers - 1; i++)
		{
			if (numbersSort[i] > numbersSort[i + 1])
			{
				swapped = true;
				TMP = numbersSort[i + 1];
				numbersSort[i + 1] = numbersSort[i];
				numbersSort[i] = TMP;
			}
		}
		if (swapped == false)
		{
			break;
		}
		numberOfnumbers = numberOfnumbers - 1;
	}
	return numberOfRunTimes;
}