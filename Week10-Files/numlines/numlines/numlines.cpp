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
	if (!file) {
		cout << "unable to open file" << endl;
		return 0;
	}
	string line;
	int i = 0;
	int line_length = 0;
	while (!file.eof()) {
		getline(file, line);
		if (line.length() < 5){
			//cout << line << endl;
			continue;
		}
		line_length += line.length();
		i++;
	}
	cout << "Line count: " << i << endl;
	cout << "Avg length: " << line_length / (float)i << endl;
	file.close();
	return 0;
}

