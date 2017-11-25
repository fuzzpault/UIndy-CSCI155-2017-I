// Name: Paul Talaga
// Date: Nov 20, 2017
// Desc: Demo of initializing an array using the {...} syntax.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{	// An int array where the first 3 values are 6,7,8, followed by 0's
	int donuts[10] = {6,7,8}; // = {} init to all 0s

	// A string array with the first 3 elements set, the rest are empty strings.
	string coffee[10] = { "mocha","black","carmel" };

	// See what is in there!
	for (int i = 0; i < 10; i++) {
		cout << i << ":" << donuts[i] << endl;
	}

	for (int i = 0; i < 10; i++) {
		cout << i << ":" << coffee[i] << endl;
	}

	return 0;
}

