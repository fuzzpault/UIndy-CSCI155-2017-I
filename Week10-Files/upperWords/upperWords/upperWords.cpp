// Name: Paul Talaga
// Date: Nov 2, 2017
// Desc: Lets the user enter a filename for analysis.  Returns an error if the
//		 file was not found.  Then tries to count the number of sentences by
//		 counting the number of words starting with a capitol letter and those which
//		 end in a punctuation symbol.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file;
	string filename;
	cout << "What file do you want to analyze: " << endl;
	cin >> filename;
	file.open(filename);
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

