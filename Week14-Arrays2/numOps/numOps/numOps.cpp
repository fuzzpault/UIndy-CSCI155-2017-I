// Name: Paul Talaga
// Date: Nov 27, 2017
// Desc: Various operations on arrays.

#include "stdafx.h"
#include <iostream>

using namespace std;

// Return the max integer in an array
int max(int ar[], int length) {
	if (length <= 0)return 0;
	int ret = ar[0];
	for (int i = 0; i < length; i++) {
		if (ret < ar[i]) {
			ret = ar[i];
		}
	}
	return ret;
}

// Return the sum of all the elements in the array.
int sum(int ar[], int length) {
	int ret = 0;
	for (int i = 0; i < length; i++) {
		ret = ret + ar[i];
	}
	return ret;
}

// Return the average as a float
float avg(int ar[], int length) {
	return (float)sum(ar, length) / length;
}

int main()
{
	int numbers[10] = { 5, 10, 7, 4, 13, 77, 666, 4, -7, -4 };

	cout << "max: " << max(numbers, 10) << endl;
	cout << "sum: " << sum(numbers, 10) << endl;
	cout << "avg: " << avg(numbers, 10) << endl;
    return 0;
}

