// Name: Paul Talaga
// Date: Nov 14, 2017
// Desc: Demo of using the & operator to get the address (location
//		 in memory) of a variable.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int a = 5;
	int b = 10;
	float c = 5.6;
	bool donuts = true;

	int* temp = &b;		// This is a variable which holds the
						// address (pointer) of an integer.

	cout << "a: " << a << " where: " << &a << endl;
	cout << "b: " << b << " where: " << &b << endl;
	cout << "c: " << c << " where: " << &c << endl;
	cout << "donuts: " << donuts << " where: " << &donuts << endl;

	cout << "temp: " << temp << " where: " << &temp << " pointing to: " << *temp << endl;


    return 0;
}

