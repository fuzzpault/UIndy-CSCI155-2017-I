// cinget.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Sept 2017
// Desc: Demo of using cin.get() to get the next character in the 
//		 input buffer.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a;
	a = cin.get();
		// This next line converts the character to an int to
		// show the ASCII value of the character, so we can find
		// the code of enter for example.
	cout << "You entered a " << (int)a << endl;
	a = cin.get();
	cout << "You entered a " << (int)a << endl;
    return 0;
}

