// randomNumbers.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Sept 14, 2017
// Desc: Demo of random numbers

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	cout << "Time: " << time(0) << endl; // This is Unix time, the # seconds since Jan 1, 1970
	srand(time(0)); // Seed the random number generator
	cout << rand() << endl;  // Rand will produce an unsigned integer
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() % 10 << endl; // Using % is a good way to limit the range of the random number. 0->9
    return 0;
}

