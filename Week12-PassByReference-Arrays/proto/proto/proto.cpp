// Name: Paul Talaga
// Date: Nov 13, 2017
// Desc: Demo of a function prototype
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string hello(string name) {
	return "Hello " + name;
}

// This is a fuction prototype since it does not implement the function (no {}).
// After this, helloAgain can be called.  It is like a promise that this function
// will be implemented later.
string helloAgain(string name);

int main()
{
	cout << hello("Bob") << endl;
	cout << helloAgain("Alice") << endl;
    return 0;
}

string helloAgain(string name) {
	return "Hello " + name + " again!";
}

