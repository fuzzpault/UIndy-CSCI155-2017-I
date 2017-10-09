// while1.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Oct 9, 2017
// Desc: While demo

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int number = 0;
	int bob = 0;
	cout << "Give me a number from 0 to 10" << endl;
	cin >> number;
	while (number < 0 || number > 10) {
		bob = 10;
		cout << "Please follow directions, 0 to 10" << endl;
		cin >> number;
	}
	cout << "Thank you for that number " << number << endl;
	cout << bob << endl;
	system("pause");
	return 0;
}

