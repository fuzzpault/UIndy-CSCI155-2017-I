// Name: Paul Talaga
// Date: Dec 4, 2017
// Desc: Extension of array operations, including finding if an array is sorted and how to
//			print out a histogram.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template <class T>
void print(T ar[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		cout << ar[i] << ", ";
	}
	cout << "]" << endl;
}

template <class T>
void reverse(T ar[], int length) {
	for (int i = 0; i < length / 2; i++) {
		T temp = ar[i];
		ar[i] = ar[length - i - 1];
		ar[length - i - 1] = temp;
	}
}


template <class T>
void bubble(T ar[], int length) {
	for (int pass = 0; pass < length; pass++) {
		for (int i = 0; i < length - 1; i++) {
			if (ar[i] > ar[i + 1]) {
				T temp = ar[i];// If not sorted, flip
				ar[i] = ar[i + 1]; // return false
				ar[i + 1] = temp;
			}
		}
	}
}

bool isSorted(int ar[], int length) {
	for (int i = 0; i < length - 1; i++) {
		if (ar[i] > ar[i + 1]) {
			return false;
		}
	}
	return true;
}

void histogram(int ar[], int length) {
	for (int num = 0; num <= 10; num++) {
		cout << num << ":";
		// print stars
		int count = 0;
		for (int i = 0; i < length; i++) {
			if (ar[i] == num)count++;
		}
		for (int i = 0; i < count; i++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	string words[] = { "This","is","a","small","bunch","of","words.","banana","bonut" };
	int numbers[] = { 5,8,3,5,0,6, 8,2, 3,1,7, 7, 6, 7, 6 };


	//print(numbers, 16);
	//reverse(numbers, 16);
	//print(numbers, 16);
	//bubble(numbers, 16);
	//print(numbers, 16);
	//reverse(numbers, 16);
	//print(numbers, 16);
	histogram(numbers, 16);


	return 0;
}

