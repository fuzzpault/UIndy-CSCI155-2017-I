// partOfAlphabet.cpp : Defines the entry point for the console application.
// Name: Paul Talaga
// Date: Sept 2017
// Desc: The user can enter a sentence and it will loop through all
//		 characters in the string and decide if the character
//       is from the lower half, or upper-half of the alphabet.
//       It can deal with UPPER and lower case letters.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string buff;
	cout << "Enter a string: " << endl;
	//cin >> in;
	getline(cin, buff);	// Use getline so it gets multiple words.

		// A string is an array of characters, so we loop over
		// each character using the array syntax.
		// String is also an object, so we can ask it how long
		// it is.
	for (int i = 0; i < buff.length(); i++) {
		// Print out the index and the character
		cout << i << " : " << buff[i] << " ";
		// Which side of the alphabet is the character?
		char base = 'A';
		//is buff[i] lower or upper?
		if (buff[i] < 'a') { // must be upper
			base = 'A';
		}else{  // must be lower
			base = 'a';
		}
		// Now see if the ascii value is less than half the ascii
		// character.
		if ((int)buff[i] < (13 + base) ) {
			cout << "Lower half" << endl;
		}else {
			cout << "Upper half" << endl;
		}
	}


    return 0;
}

