// HelloWorld2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello World\n this is my first program" << endl;
	cout << "Hello World" << endl << "this is my first program" << endl;
	cout << "Hello World" << endl;
	cout << "this is my ";
	cout << "first program" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "i is: " << i << endl;
	}

	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "Hello " << name << "!" << endl;
    return 0;
}

