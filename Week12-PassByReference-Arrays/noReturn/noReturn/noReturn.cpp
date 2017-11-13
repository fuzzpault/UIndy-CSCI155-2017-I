// Name: Paul Talaga
// Date: Nov 13, 2017
// Desc: Demo of how a return isn't always needed.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// No return needed since it is a void function. BUT, if you put one in, it will exit the function there.
void thinkAboutStuff() {
	cout << "here" << endl;
	//return;	// Uncomment this line to never get 'there'.
	int b = rand() % 10;
	cout << "there" << endl;
}

// All functions that return something MUST return something of that type, but there is a bug in the language.
// Since this function has a return in it, it will compile, but return 1 by default, even though there isn't
// a return.
int addBadly(int a, int b) {
	if (rand() % 2 == 0) {
		return a;
	}
	// THIS NEEDS A return <int>!!!
}

int main()
{
	for (int i = 0; i < 50; i++) {
		cout << addBadly(5, 6) << endl;
	}

	return 0;
}



