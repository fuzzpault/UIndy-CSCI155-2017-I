// Name: Paul Talaga
// Date: Oct 19, 2017
// Desc: Demo of for loops.  See video for all the versions with discussion.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	srand(51);
	int a = 3;
	for (int i = rand() % 30; i < 10 ; i = i + 2) {
		cout << "i: " << i << " a: " << a << endl;
		i = a - 3;
		a = a * 2;
	}
    return 0;
}

