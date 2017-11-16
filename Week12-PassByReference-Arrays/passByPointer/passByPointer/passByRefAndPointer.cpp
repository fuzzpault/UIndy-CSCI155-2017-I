// Name: Paul Talaga
// Date: Nov 16, 2017
// Desc: Demo of pass-by-reference and pass-by-pointer.

#include "stdafx.h"
#include <iostream>

using namespace std;

// Pass by reference looks like pass by value, but has a & before the variable name.
// Donuts is a 'portal' to b below.  No 'box' or memory is taken up by donut.  Whenever
// we use donut in this function we are really operating on b in main.
void addTwo(int &donuts) {
	donuts = donuts + 2;	// Since this is pass-by-reference, b will change in main.
	cout << "donut: " << donuts << endl;
	cout << "where is the donut? " << &donuts << endl; // Look! Its location is the same as b below!
}

// Pass by pointer passes the address of the location in memory to a function.
// Here we are getting the address of an integer, dereferencing it (following the pointer)
// and changing it.
// This will create a 'box' for addOne which contains an address.
void addOne(int* b) {
	(*b)++;	// This will change b in main.
}

int main()
{
	int b = 5;

	cout << "b: " << b <<  " b is at: " << &b << endl;

	addOne(&b); // Pass the address (location) of b.

	cout << "b: " << b << endl;

	addTwo(b);  // Send b, but it will change since addTwo is pass-by-reference.

	cout << "b: " << b << endl;

    return 0;
}

