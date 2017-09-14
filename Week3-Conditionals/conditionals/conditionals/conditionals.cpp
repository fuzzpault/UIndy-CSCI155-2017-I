// conditionals.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Sept 14, 2017
// Desc: Demo of conditionals with user input.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{	
	int number = 0;
	cout << "Enter a number: " << endl;
	cin >> number;
	if (number > 10) { // >, >=, <, <=, ==, !=, &&, ||
		cout << "That is greater than 10" << endl;
	}else if (number > 5 ) {
		cout << "That is greater than 5" << endl;
	}else if (number > 2) {
		cout << "That is greater than 2" << endl;
	}else{
		cout << "That number is not greater than 2" << endl;
	}
    return 0;
}

