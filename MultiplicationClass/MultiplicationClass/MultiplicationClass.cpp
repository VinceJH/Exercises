// MultiplicationClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <iostream>
using namespace std;

class Multiplication9x9
{
    int numberSize;
   
public:
    Multiplication9x9(int tableSize = 9)
    {
        numberSize = tableSize;

    }
   
    ~Multiplication9x9();
    inline int tableSize() const { return numberSize; }
    int GetTableSize();
    void Header9by9Table(int max1);
    void TableResults(int max1);
    void SaveTable(int max1, string MyFileName);

};
Multiplication9x9::~Multiplication9x9()
{
	numberSize = 0;
}
void Multiplication9x9::Header9by9Table(int max1)
{
	cout << "\nMultiplication Table: " << endl;
	cout << "\t";
	for (int i = 1; i <= max1; i++) {
		cout << i << "\t";
	}
	cout << "\n";
}
//for output Results
void Multiplication9x9::TableResults(int max1)
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
int Multiplication9x9::GetTableSize()
{
	cout << "\nPlease input the size of the Time Table: ";
	int numberSize;
	while (!(cin >> numberSize))
	{

		cout << "\nPlease input the size of the Time Table: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}

	return numberSize;
}
void Multiplication9x9::SaveTable(int max1, string MyFileName)
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



int main()
{
	Multiplication9x9 m;
	int numberSize = m.GetTableSize();
	if (numberSize > 20) {
		cout << "\nTable Size is too Large. " << endl;
		exit(1);
	}

	m.Header9by9Table(numberSize);

	m.TableResults(numberSize);
	char answer;
	string MyFileName;
	cout << "\nWould you like to save this? " << endl;
	cin >> answer;
	if ((answer == 'Y') || (answer == 'y'))
	{
		cout << "\nPlease input your file name: ";
		cin >> MyFileName;
		cin.ignore(2);
		m.SaveTable(numberSize, MyFileName);
	}

	return 0;
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
