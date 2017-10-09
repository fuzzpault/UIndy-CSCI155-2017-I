// Name: Paul Talaga
// Date: Oct 9, 2017
// Desc: Guessing game implemented with a do-while loop.

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	srand(time(0));
	int secret_number = rand() % 100 + 1;
	int guess = secret_number;
	int tries = 0;
	do {
		cout << "Make a guess!" << endl;
		cin >> guess;
		if (guess < secret_number) {
			cout << "Too low!" << endl;
		}
		else if (guess > secret_number) {
			cout << "Too high!" << endl;
		}
		tries++;
	} while (guess != secret_number);
	
	cout << "Good job! It only took you " << tries << " tries." << endl;
	return 0;
}

