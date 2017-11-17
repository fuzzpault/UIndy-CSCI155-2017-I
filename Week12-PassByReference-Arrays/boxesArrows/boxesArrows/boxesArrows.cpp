// Name: Paul Talaga
// Date: Nov 17, 2017
// Desc: In-class activity/quiz for diagramming memory with pass-by-value and pass-by-reference.
//		 Expect to be asked what a program like this will output on an exam, plus what memory looks
//		 like (boxes and arrows).
//		 This should output:
//		 6
//	     8

#include "stdafx.h"
#include <iostream>

using namespace std;

void doStuff(int bob) {
	cout << bob << endl;
}
int doMoreStuff(int pizza) {
	return pizza + 1;
}
void nothingToSeeHere(int &b) {
	b++;
}
int main()
{
	int a = 5;
	a++;
	doStuff(a);
	a = doMoreStuff(a);
	nothingToSeeHere(a);
	cout << a << endl;

    return 0;
}

