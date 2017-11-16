// Name: Paul Talaga
// Date: Nov 13, 2017
// Desc: Demo of how a return isn't always needed.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


// All functions that return something MUST return something of that type, but there is a bug in the language.
// Since this function has a return in it, it will compile, but return 1 by default, even though there isn't
// a return.
int addy(int a, int b) {
	cout << "please use my return values!" << endl;
	return a + b;
}

int main()
{
	cout << "I like to print to the screen" << endl;
	addy(5, 6);
	cout << "I'm done printing." << endl;

	return 0;
}



