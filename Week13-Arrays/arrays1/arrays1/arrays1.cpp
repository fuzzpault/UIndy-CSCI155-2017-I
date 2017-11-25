// Name: Paul Talaga
// Date: Nov 20, 2017
// Desc: Demo of arrays!

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{	// Define a large array of integers.
	const int SIZE = 1000; // 500,000 
	int donuts[SIZE];

	// Assign some values in the array.
	donuts[0] = 8;
	donuts[1] = 0;
	donuts[2] = 6;
	donuts[SIZE-1] = 99;

	// Print them ALL out!
	for (int i = 0; i < SIZE; i++) {
		cout << i << ":" << donuts[i] << endl;
	}
    return 0;
}

