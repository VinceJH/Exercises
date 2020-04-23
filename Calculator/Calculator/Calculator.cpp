// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cstring>
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    char opsymbol = '0';
    int result = 0;
    cout << "Calculator:" << endl;
    for (;;)
    {
        number1 = 0; 
        cout << "\nPlease enter your first number: ";
        
       
        if ((cin >> number1)) {
            break;
        } 
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        
    }//end of loop
    for (;;)
    {
        cout << "\nPlease enter your second number: ";
        if (!(cin >> number2)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    for (;;)
    {
        cout << "\nPlease enter an operator (+ or - or * or /): ";
        if (!(cin >> opsymbol))
        {
            cin.clear();
            continue;
        } // end of if
                   
         switch (opsymbol)
         {
                case '+':
                    result = number1 + number2;
                    break;
                case '-':
                    result = number1 - number2;
                    break;
                case '*':
                    result = number1 * number2;
                    break;
                case '/':
                    result = number1 / number2;
                    break;
                default:
                    continue;
          } //end of switch
          break;

      
    } //end of for
    
    cout << "\nThis is your equarion: " << number1 << " " << opsymbol << " " << number2 << endl;
    cout << "Your answer is: " << result << endl;


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
