// Name: Paul Talaga
// Date: Oct 23, 2017
// Desc: Prints out a multiplication table, but only for value less than or equal to 100
//       which exits the inner loop via a break statement.

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int size = 100;
	for (int y = 1; y <= size; y++) {
		for (int x = 1; x <= 20; x++) {
			if (x * y > 100) {
				break;
			}
			cout << setw(6) << x * y;
			
		}
		cout << endl;
	}
	cout << "I can do math!" << endl;
    return 0;
}

