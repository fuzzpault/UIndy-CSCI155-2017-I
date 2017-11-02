// Name: Paul Talaga
// Date: Nov 2, 2017
// Desc: Simple demo of functions.

#include "stdafx.h"
#include <iostream>

using namespace std;

void sayHi(int i) {
	cout << "Hello World!" << i <<  endl;
}

int sum(int a, int b) {
	return a + b;
}

void printMenu() {
	cout << "0. Exit" << endl;
	cout << "more stuff here..." << endl;
}

int main()
{
	for (int i = 0; i < 10; i++) {
		printMenu();
	}
    return 0;
}

