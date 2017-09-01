// Pirate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "Hi, what is your name?" << endl;
	string name;
	cin >> name;
	cout << "Hi " << name <<  " it is nice to meet you!" << endl;
	cout << "What\nwould\nyou\nlike\nme\nto\ndo" << endl;
	string activity;
	cin >> activity;
	cout << "I like doing " << activity << " too." << endl;
    return 0;
}

