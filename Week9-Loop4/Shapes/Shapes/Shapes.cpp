// Name: Paul Talaga
// Date: Oct 23, 2017
// Desc: Allows the user to print different ascii shapes to the screen.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "1. Horizontal Line" << endl;
	cout << "2. SOS" << endl;
	cout << "3. Letter Range" << endl;
	cout << "4. Square" << endl;
	cout << "5. Rectangle" << endl;
	cout << "6. Alphabet Rectangle" << endl;

	int choice = 0;
	cout << "What do you want?" << endl;
	cin >> choice;
	if (choice == 1) { // Horizontal line
		cout << "How wide?" << endl;
		int width = 0;
		cin >> width;
		if (width < 0) {
			cout << "Width must be positive!" << endl;
			return 0;
		}
		for (int i = 0; i < width; i++) {
			cout << "*";
		}
		cout << endl;
	}else if (choice == 2) { // SOS
		cout << "How wide?" << endl;
		int width = 0;
		cin >> width;
		if (width < 0) {
			cout << "Width must be positive!" << endl;
			return 0;
		}
		for (int i = 0; i < width; i++) {
			cout << "...---... ";
		}
		cout << endl;
	}else if (choice == 3) { // letter range
		cout << "Starting number?" << endl;
		int start = 0;
		cin >> start;
		cout << "Ending number?" << endl;
		int end = 0;
		cin >> end;
		if (start < 0 || end < 0) {
			cout << "Numbers must be positive!" << endl;
			return 0;
		}
		if (start > end) {
			cout << "You idiot!" << endl;
			return 1;
		}
		for (int i = start; i <= end; i++) {
			cout << (char)((i % 26) + 'A');
		}
		cout << endl;
	}else if (choice == 4) { // square
		cout << "How wide?" << endl;
		int width = 0;
		cin >> width;
		if (width < 0) {
			cout << "Width must be positive!" << endl;
			return 0;
		}
		for (int y = 0; y < width; y++) {
			cout << endl;
			for (int i = 0; i < width; i++) {
				cout << "* ";
			}
			//cout << endl;
		}
	}else if (choice == 5) { // rectangle
		cout << "How wide?" << endl;
		int width = 0;
		cin >> width;
		cout << "How high?" << endl;
		int high = 0;
		cin >> high;
		if (width < 0 || high < 0) {
			cout << "Width and height must be positive!" << endl;
			return 0;
		}
		for (int y = 0; y < high; y++) {
			cout << endl;
			for (int i = 0; i < width; i++) {
				cout << "* ";
			}
			//cout << endl;
		}
	}
	else if (choice == 6) { // abc rectangle
		cout << "How wide?" << endl;
		int width = 0;
		cin >> width;
		cout << "How high?" << endl;
		int high = 0;
		cin >> high;
		if (width < 0 || high < 0) {
			cout << "Width and height must be positive!" << endl;
			return 0;
		}
		for (int y = 0; y < high; y++) {
			cout << endl;
			for (int i = 0; i < width; i++) {
				cout << (char)((i % 26) + 'A');
			}
			//cout << endl;
		}
	}

    return 0;
}

