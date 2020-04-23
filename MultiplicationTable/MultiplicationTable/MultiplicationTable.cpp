// MultiplicationTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int GetTableSize();
void Header9by9Table(int max1);
void TableResults( int max1);
void SaveTable(int max1, string MyFileName);


int main()
{
	
	int numbsize = GetTableSize();
	if (numbsize > 20) {
		cout << "\nTable Size is too Large. " << endl;
		exit(1);
	}

	Header9by9Table(numbsize);
	 
	TableResults(numbsize);
	char answer;
	string MyFileName;
	cout << "\nWould you like to save this? " << endl;
	cin >> answer;
	if ((answer == 'Y')||(answer == 'y'))
	{
		cout << "\nPlease input your file name: ";
		cin >> MyFileName;
		cin.ignore(2);
		SaveTable(numbsize, MyFileName);
	}

	return 0;
}//end of main


//void function for Table output
void Header9by9Table(int max1)
{
	cout << "\nMultiplication Table: " << endl;
	cout << "\t";
	for (int i = 1; i <= max1; i++) {
		cout << i << "\t";
	}
	cout << "\n";
}
//for output Results
void TableResults(int max1)
{
	for (int j = 1; j <= max1; j++)
	{
		cout << j << "\t";
		for (int i = 1; i <= max1; i++)
		{
			int result = 0;
			result = i * j;
			cout << result << "\t";
		}
		cout << "\n";
	}
}
int GetTableSize()
{
	cout << "\nPlease input the size of the Time Table: ";
	int numbsize;
	while (!(cin >> numbsize))
	{
		
		cout << "\nPlease input the size of the Time Table: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
	}
	
	return numbsize;
}
void SaveTable(int max1, string MyFileName)
{
	MyFileName = MyFileName + ".txt";
	ofstream MyFile(MyFileName);
	MyFile << "\nMultiplication Table: " << endl;
	MyFile << "\t";
	for (int i = 1; i <= max1; i++) {
		MyFile << i << "\t";
	}
	MyFile << "\n";

	for (int j = 1; j <= max1; j++)
	{
		MyFile << j << "\t";
		for (int i = 1; i <= max1; i++)
		{
			int result = 0;
			result = i * j;
			MyFile << result << "\t";
		}
		MyFile << "\n";
	}
	MyFile.close();
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
