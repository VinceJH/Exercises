// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void sort(int numbersForSort[], int numbersLeft);

int main()
{
    int numbersForSort[] = { 7, 3, 5, 2, 8, 6, 1, 4 };

    cout << "Before Sort" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << numbersForSort[i];
    }
    cout << endl;
    cout << "After Sort" << endl;
    sort(numbersForSort, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << numbersForSort[i];
    }

}

void sort(int numbersForSort[], int numbersLeft)
{
    bool swapped;
    int TMP;
    
    for (;;)
    {
        swapped = false;
        for (int j = 0; j < numbersLeft - 1; j++)
        {
            if (numbersForSort[j] > numbersForSort[j + 1])
            {
                swapped = true;
                TMP = numbersForSort[j + 1];
                numbersForSort[j  + 1] = numbersForSort[j];
                numbersForSort[j] = TMP;
            }
        }
        if (swapped == false)
        {
            break;
        }
        numbersLeft = numbersLeft - 1;
    }
}
