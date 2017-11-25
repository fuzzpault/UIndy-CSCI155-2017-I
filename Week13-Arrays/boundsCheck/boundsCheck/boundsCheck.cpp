// Name: Paul Talaga
// Date: Nov 20, 2017
// Desc: Demo of how there is no bounds check in C++ for arrays!

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{	// Create an array of some size.
	const int SIZE = 10; // 500,000 
	int donuts[SIZE];

	donuts[0] = 8;	// valid index
	donuts[1] = 0;	// valid index
	donuts[2] = 6;	// valid index
	donuts[SIZE-1] = 99; // valid index

	//donuts[-1] = 80; // NOT VALID, MAY SEGFAULT
	//donuts[SIZE] = 67; // NOT VALID, MAY SEGFAULT

	// This prints out one to the left (before) and one to the right (after)
	// the array.  Node this COMPILES and will print garbage.  Don't read or
	// assign outside your array!
	for (int i = -1; i <= SIZE; i++) {
		cout << i << ":" << donuts[i] << endl;
	}

	/* Takeaway:
		C++ allows you to change or read ANY memory location, even if
		it will mess up the execution of your program.  Be very careful
		to never use an array index outside your array bounds.  If you do
		your program MAY stop sometimes, and work others, which is bad
		program behavior!  */
	return 0;
}

