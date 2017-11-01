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
	string word;
	int i = 0;
	int uppers = 0;
	int puncts = 0;
	while (!file.eof()) {
		file >> word;
		//cout << word << endl;
		if (word[0] >= 'A' && word[0] <= 'Z') {
			uppers++;
		}else if (word[word.length()-1] < 'A') {
			puncts++;
		}
		i++;
	}
	cout << "Word count: " << i << endl;
	cout << "Uppers: " << uppers << endl;
	cout << "Puncts: " << puncts << endl;
	file.close();
	return 0;
}

