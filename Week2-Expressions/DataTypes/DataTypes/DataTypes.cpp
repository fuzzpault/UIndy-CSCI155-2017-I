// DataTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// short
	//short small_thing = 0;
	//unsigned short small_thing = 0;
	//int small_thing = 0;
	long long small_thing = 0;
	cout << "sizeof: " << sizeof(small_thing) << endl;
	system("pause");
	while (true) {
		cout << small_thing << endl;
		small_thing = small_thing + 100000;
	}
    return 0;
}

