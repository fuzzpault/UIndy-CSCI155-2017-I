// constants.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Sept 11, 2017
// Demonstration of constanst in C/C++.

#include "stdafx.h"
#include <iostream>

using namespace std;

#define PI 3.1415
//#define main nomain  // #define is like search/replace, so you can change main!
const float G = 42;  // The best way to do it, as a variable.

int main()
{
	cout << PI << endl;
	cout << "Pi is PI" << endl; // #define does not go inside character arrays.
	cout << G << endl;
	//PI = PI + 2;
	//G = G + 3; // Will yell at you if you change.
    return 0;
}

