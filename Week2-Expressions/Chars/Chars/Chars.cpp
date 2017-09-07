// Chars.cpp : Prints out characters starting from 'A' up the ASCII table
//			   50 characters.
// Author: Paul Talaga
// Date: Sept 7, 2017

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{  
	char a = 'A';
	cout << "char size: " << sizeof(a) << endl;
	for (int i = 0; i < 50; i++) {
		cout << "( " << (int)(a + i) << "):" << (char)(a + i) << endl;
	}
	
    return 0;
}

