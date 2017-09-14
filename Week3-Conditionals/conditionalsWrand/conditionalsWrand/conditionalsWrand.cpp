// conditionalsWrand.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Sept 14, 2017
// Desc: Rand and conditionals

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0)); // This randomizes the number generator so we get different
					// random numbers each time the program is run.
	if (rand() % 2 == 0) { // 50% get extra credit
		cout << "You get extra credit!" << endl;
	}

	if (rand() % 10 >= 1) { // 90% get extra credit
		cout << "You get extra credit!" << endl;
	}
	cout << "rand from 0 to 532: " << rand() % 533<< endl;
	cout << "rand from 10 to 20 inclusive: " << (rand() % 11) + 10 << endl;
	int number = rand() % 100;
	cout << number << endl;
    return 0;
}

