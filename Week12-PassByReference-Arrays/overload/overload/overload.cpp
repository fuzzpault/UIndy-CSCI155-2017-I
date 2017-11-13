// Name: Paul Talaga
// Date: Nov 13, 2017
// Desc: Demo of a function overloading.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Function overloading is multiple functions with the same name, but different number, or types, of INPUT parameters.
// Below are 4 different functions, all with the same name.
string hello() {
	return "Hello NoName!";
}

string hello(string name) {
	return "Hello " + name;
}

// Note these last 2 COULD be ambigious because 3.5 could be auto-converted to an int or float.
string hello(int a) {
	string ret;
	for (int i = 0; i < a; i++) {
		ret += "Hello Mystery Int Person " ;
	}
	return ret;
}

string hello(float a) {
	string ret;
	for (int i = 0; i < a; i++) {
		ret += "Hello Mystery Float Person ";
	}
	return ret;
}


int main()
{
	// Due to the different input types, the correct function will get called.
	cout << hello((int)3.5) << endl; // Note that since we explicitly say (int) it will use the int paramter.
									 // If you remove the (int) it will become ambigious and not compile because
									 // it doesn't know which function to use, the int, or the float.
	cout << hello("Bob") << endl;
	cout << hello() << endl;
	return 0;
}



