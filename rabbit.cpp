// ================================================================================================
// File: rabbit.cpp
// ================================================================================================
// Programmer: Jennifer King
// Date: 2/11/2018
// Professor: Scott Edwards
// Class: CSCI 133F | TR 9:30AM
// Description:
//		This program uses recursion and the Fibonaci sequence to generate a sequence.
// =================================================================================================

#include <stdlib>

using namespace std;

int Rabbit(int num);

int main()
{
	int counter, repetitions;
    int tabs = 0;
    int loops = 0;
    cout << "How many times would you like to call rabbit?: ";
    cin >> counter;
    repetitions = counter;
    while(counter > 1)
    {
        tabs = loops;
        while(tabs > 0)
        {
            cout << "\t";
            tabs --;
        }

        cout << "Enter rabbit: n = " << counter << endl;

        if(counter == 2)
        {
            tabs = loops;
            while(tabs > 0)
            {
                cout << "\t";
                tabs --;
            }
            cout << "Leave rabbit: n = " << counter << "\tvalue = " << Rabbit(counter) << endl;
        }

        counter --;
        loops ++;
    }

    while(counter <= repetitions)
    {
        tabs = loops;
        while(tabs > 0)
        {
            cout << "\t";
            tabs --;
        }
        cout << "Leave rabbit: n = " << counter << "\tvalue = " << Rabbit(counter) << endl;

        counter ++;
        loops --;
    }

    return 0;
} // end of main

// == Rabbit =================================================================================
// This uses the Fibonacci sequence to produce a value
//
// Input:
//              int num [IN] -- Fibonacci number to generate value
//
// Output:
//              Fibonacci number
// ===========================================================================================
int Rabbit(int num)
{
    if(num <= 2)
    {
        return 1;
    }
    else
    {
        return Rabbit(num - 1) + Rabbit(num - 2);
    }
} // end of Rabbit
