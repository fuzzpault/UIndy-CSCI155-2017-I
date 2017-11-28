/*
Name: <fill me in>
Date: <fill me in>
Assignment: <fill me in>
Description: <fill me in>
*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void init(int array[], int length, int value) {
	// Fill me in
}

void init(char array[], int length, char value) {
	// Fill me in
}

void init(char array[], int length) {
	// Fill me in
}

int count(int array[], int length, int value) {
	// Fill me in
	return 0;
}

int count(char array[], int length, char value) {
	// Fill me in
	return 0;
}

int range(int array[], int length) {
	// Fill me in
	return 0;
}

void histogram(int array[], int length) {
	// Fill me in
}

void histogram(char array[], int length) {
	// Fill me in
}

bool isSorted(int array[], int length) {
	// Fill me in
	return true;
}


int main() {
	cout << "Init w/ ints" << endl;
	int a1[] = { 1,2,3,4,5 };
	init(a1, 5, 99);
	cout << "99 = " << a1[3] << endl;
	cout << "99 = " << a1[1] << endl << endl;

	cout << "Init w/ chars" << endl;
	char a2[] = "This is a test";
	init(a2, 14, 'z');
	cout << "z = " << a2[3] << endl;
	cout << "z = " << a2[1] << endl << endl;;

	cout << "Init w/ alphabet" << endl;
	char a22[30];
	init(a22, 30);
	cout << "a = " << a22[0] << endl;
	cout << "k = " << a22[10] << endl;
	cout << "a = " << a22[26] << endl << endl;

	cout << endl << "Count w/ ints" << endl;
	int a3[] = { 1,2,3,4,5,6,7,1,2 };
	cout << "1 = " << count(a3, 9, 5) << endl;
	cout << "2 = " << count(a3, 9, 1) << endl;
	int a4[100];
	for (int i = 0; i < 100; i++) {
		a4[i] = (i + i % 7) % 11;
	}
	cout << "8 = " << count(a4, 100, 5) << endl;
	cout << "9 = " << count(a4, 100, 1) << endl;

	cout << endl << "Count w/ chars" << endl;
	char a5[] = "the sly fox jumped over the bridge and into the lake.";
	cout << "2 = " << count(a5, 54, 'a') << endl;
	cout << "10 = " << count(a5, 54, ' ') << endl;

	cout << endl << "Range" << endl;
	int a6[] = { 1,2,1,10,-5,34 };
	cout << "39 = " << range(a6, 6) << endl;
	cout << "9  = " << range(a6, 4) << endl;

	cout << endl << "Is Sorted" << endl;
	int a7[] = { 1,2,2,3,5,10,100 };
	int a8[] = { 1,2,3,4,4,5,4 };
	cout << "0 = " << isSorted(a6, 6) << endl;
	cout << "1 = " << isSorted(a1, 5) << endl;
	cout << "1 = " << isSorted(a7, 7) << endl;
	cout << "0 = " << isSorted(a8, 7) << endl;

	cout << endl << "Histogram int" << endl;
	histogram(a8, 7);
	cout << endl;
	int a9[500] = {};
	for (int i = 0; i < 500; i++) {
		a9[i] = (rand() % 11) + (rand() % 11);
	}
	histogram(a9, 500);
	cout << endl;
	int a10[100] = {};
	for (int i = 0; i < 100; i++) {
		a10[i] = (i + i % 7) % 15;
	}
	histogram(a10, 100);

	cout << endl << "Histogram char" << endl;
	char words[] = "the sly fox jumped over the bridge and into the lake.";
	histogram(words, 54);

	return 0;
}