// tracing.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Sept 25, 2017
// Desc: Code tracing example

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 50;
	int b = 89;
	int c = a / 9;
	b = c + 1;
	a++;
	if (a < b) { c++; }
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
    return 0;
}

