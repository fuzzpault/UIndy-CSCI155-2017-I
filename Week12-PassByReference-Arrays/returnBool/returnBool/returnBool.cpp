// Name: Paul Talaga
// Date: Nov 13, 2017
// Desc: Demo of how a return isn't always needed.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool isEven(int number) {
	if (number % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool isEven2(int number) {
	return number % 2 == 0;  // Best solution
}

bool isEven3(int number) {
	return !(number % 2);
}

int main()
{
	int number_of_donuts = 5;

	for (int i = 0; i < 50; i++) {
		if ( isEven3(i) ) { // the == thing
			cout << i << ", ";
		}
	}

	return 0;
}



