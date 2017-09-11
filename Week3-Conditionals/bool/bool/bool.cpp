// bool.cpp : Defines the entry point for the console application.
// Author: Paul Talaga
// Date: Sept 11, 2017
// A demonstration of the bool type

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	bool isPizza = false; // true  0 or 1
	// Strangely a bool is 1 byte, which is 8 bits, so really 7 bits are being wasted.
	// You can assign a number to a bool, but the only false is 0, everything else
	// is true
	isPizza = 5;
	cout << "size: " << sizeof(isPizza) << endl;
	cout << "isPizza: " << isPizza << endl;
	// A conditional (if) will run the first block if what is inside () is true, otherwise
	// it will run the else.
	// In this case it will see if isPizza is true or false.
	if (isPizza) {
		cout << "We are having pizza." << endl;
	}else {
		cout << "We are not having pizza" << endl;
	}
    return 0;
}

