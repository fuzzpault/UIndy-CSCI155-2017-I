// Name: Paul Talaga
// Date: Nov 2, 2017
// Desc: Pass-by-value example.

#include "stdafx.h"
#include <iostream>

using namespace std;


void breakfast(int donuts, int coffee) {
	// Pass by value
	cout << "Donuts: " << donuts << endl;
	donuts = donuts + 10;	// Changing the local donuts variable.
	cout << "Donuts: " << donuts << endl;
	cout << "Coffee: " << coffee << endl;
}


int main()
{
	int number = 10;
	// The VALUES 10 and 5 get sent up to the breakfast function.
	breakfast(number, 5.2);
	// Note that number won't change because the value(s) are being sent to the function.
	cout << "Number: " << number << endl;

	return 0;
}

