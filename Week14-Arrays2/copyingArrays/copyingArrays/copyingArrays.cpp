// Name: Paul Talaga
// Date: Nov 27, 2017
// Desc: Demo of how to copy an array

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void print(string ar[], int len) {
	for (int i = 0; i < len; i++) {
		cout << i << ": " << ar[i] << " in address " << &ar[i] << endl;
	}
}

void print(int ar[], int len) {
	for (int i = 0; i < len; i++) {
		cout << i << ": " << ar[i] << " in address " << &ar[i] << endl;
	}
}

int main()
{
	string names[20] = { "Alex", "Allison", "Billy", "Mark", "Seth" };
	names[10] = "Joe";

	int numbers[5] = {};

	//print(numbers, 6);
	print(names, 20);

	string names2[20];
	cout << "names2: " << endl;
	print(names2, 20);
	// Copy an array via a loop copying every element
	for (int i = 0; i < 20; i++) {
		names2[i] = names[i];
	}
	names2[0] = "Mary";
	print(names2, 20);

    return 0;
}

