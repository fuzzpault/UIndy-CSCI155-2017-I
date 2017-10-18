// Line.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Oct 18, 2017
// Desc: Program to print out a box of '*' characters of a given width and 10 high.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "How wide do you want your line to be?" << endl;
	int width = 0;
	cin >> width;
	// We'll make 10 horizontal lines, separated by a newline character.
	for (int y = 0; y < 10; y++) {
		// This makes a horizontal line
		for (int x = 0; x < width; x++) {
			cout << "*";
		}
		cout << endl;
	}
    return 0;
}

