// Name: Paul Talaga
// Date: Nov 13, 2017
// Desc: Demo of recursion, with a forced segfault
//	     when the stack gets too large.

#include "stdafx.h"
#include <iostream>

using namespace std;

// A recursive function because it calls itself.
int meaningOfLife(int i) {
	cout << "I got an " << i << endl;
	int a = meaningOfLife(i + 1);
	cout << "I found the meaning of life! " << a << endl;
	return a;
}

int main()
{
	cout << meaningOfLife(4) << endl;
    return 0;
}

