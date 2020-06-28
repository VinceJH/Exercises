// AnotherBubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void sortNumbers(int numbersToSort[], int sortTimes);

int main()
{
    int numbersToSort[] = { 35,15,71,10,44,27,18,76 };
    cout << "\nThe Numbers Before the Sort: ";
    for (int i = 0; i < 8; i++)
    {
        cout << numbersToSort[i] << " ";
    }
    sortNumbers(numbersToSort, 8);
    cout << "\nNumbers After The Sort: ";
    for (int i = 0; i < 8; i++)
    {
        cout << numbersToSort[i] << " ";
    }

}

void sortNumbers(int numbersToSort[], int sortTimes)
{
    bool swapped;
    int holder = 0;
    for (;;)
    {
        swapped = false;
        for (int j = 0; j < sortTimes - 1; j++)
        {
            if (numbersToSort[j] > numbersToSort[j + 1])
            {
                holder = numbersToSort[j];
                numbersToSort[j] = numbersToSort[j + 1];
                numbersToSort[j + 1] = holder;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
