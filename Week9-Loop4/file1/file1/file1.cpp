// file1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file;
	file.open("mobydick.txt");
	string word;
	int i = 0;
	float length = 0;
	while (!file.eof()) {
		file >> word;
		//cout << i << " " << word.length() << endl;
		length = length + word.length();
		i++;
	}
	cout << "Word count: " << i << endl;
	cout << "Total word length: " << length << endl;
	cout << "Avg length: " << length / i << endl;
	file.close();
    return 0;
}

