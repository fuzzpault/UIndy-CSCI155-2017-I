// Name: Paul Talaga
// Date: Nov 17, 2017
// Desc: Demo of default parameters plus an identical way of doing default
//		 args, but with explicit overloading.

#include "stdafx.h"
#include <iostream>

using namespace std;

// Default arguments
// A user could use add(5), add(5,6), or add(5,6,7).
// The default parameters MUST be the last in the list.
int add(int a, int b = 10, int c = 99) {
	return a + b;
}

// The other way to have one function with multiple number of parameters, use overloading!
int multiply(int a, int b, int c) {
	return a * b * c;
}

// The order is important.  If multiply was in the reverse order it wouldn't have seen the function
// it is calling.
int multiply(int donuts, int pizza) {
	return multiply(donuts, 2, pizza);
}

int main()
{
	int b = 5;

	cout << "b: " << b << " " << add(b, 3) << endl;
	cout << "b: " << b << " " << add(b) << endl;

	cout << "b: " << b << " " << multiply(5,3,b) << endl;
	cout << "b: " << b << " " << multiply(5, 3) << endl;


	return 0;
}

