// Name: Paul Talaga
// Date: Nov 20, 2017
// Desc: Demo of the relationship between arrays, pointers, and how an
//		 array is really a pointer that points to the first element in the array.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int donuts[10]; // An array of 10 integers.
	donuts[0] = 5;	// Set the first element to 5
	*(donuts + 1) = 8; // Take the address of the first element, add 1 to it,
					   // dereference it (follow the pointer) and put 8 there.
					   // This put an 8 in the next array element.

	int* coffee = donuts; // Create a pointer containing the same pointer value
						  // as donuts.  Now coffee and donuts BOTH point to 
						  // the first element of the donuts array.

	for (int i = 0; i < 10; i++) {
		cout << i << ":" << donuts[i] << endl;  // Print out all elements in donuts.
	}

	for (int i = 0; i < 10; i++) {
		cout << i << ":" << coffee[i] << endl;  // Print out all elements in coffee.
		// This is really the donuts as they both point to the same place in memory.
	}
    return 0;
}

