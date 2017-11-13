// passByValue2.cpp : Defines the entry point for the console application.
//  Random # between limits,
//  quadratic formula
// slope of a line, enter 2 points y intercept
// least common denominator*
// greatest common factor*

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int displayMenu() {
	cout << "0. Exit" << endl;
	cout << "1. Random between digits" << endl;
	cout << "2. Lots-of random digits" << endl;

	cout << "What do you want to do?";
	int choice = 0;
	cin >> choice;
	while (choice < 0 || choice > 2) {
		cout << "Enter a valid input!";
		cin >> choice;
	}
	return choice;
}

int randomRange(int low, int high) {
	return (rand() % (high - low + 1)) + low;
}

int randomRangeInput() {
	cout << "Enter lower number";
	int low;
	cin >> low;
	cout << "Enter higher number";
	int high;
	cin >> high;
	while (low > high) {
		cout << "Lower must be lower than high. Low:" << endl;
		cin >> low;
		cout << "High: ";
		cin >> high;
	}
	return randomRange(low, high);
	//return (rand() % (high - low + 1)) + low;
}

void randomRangeLots() {
	cout << "Enter lower number";
	int low;
	cin >> low;
	cout << "Enter higher number";
	int high;
	cin >> high;
	while (low > high) {
		cout << "Lower must be lower than high. Low:" << endl;
		cin >> low;
		cout << "High: ";
		cin >> high;
	}
	int count;
	cout << "How many do you want?" << endl;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << randomRange(low, high) << ' ';
	}
}

int main()
{
	srand(time(0));
	while (true) {
		int choice = displayMenu();
		if (choice == 0) {
			cout << "Exiting!!!!" << endl;
			return 0;
		}
		else if (choice == 1) {
			int r = randomRangeInput();
			cout << "Your number is " << r << endl;
		}
		else if (choice == 2) {// lots-o-numbers
			randomRangeLots();
		}
		else {
			cout << choice << " not implemented yet!" << endl;
		}
	}

    return 0;
}

