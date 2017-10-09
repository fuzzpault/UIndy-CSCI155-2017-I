// Name: Paul Talaga
// Date: Oct 9, 2017
// Desc: Demo of using a break statement to escape an
//       infinite loop.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int a = 0;
	cin >> a;
	while (true) {
		if (a > 10) {
			break;
		}
		cin >> a;
		cout << "I'm still in this loop, send help." << endl;
	}
	cout << "I escaped the loop!!!!!!" << endl;
	return 0;
}

