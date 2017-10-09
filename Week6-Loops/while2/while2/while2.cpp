// while2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int from = 0;
	int to = 0;
	cout << "Enter lower number: " << endl;
	cin >> from;
	cout << "Enter upper number: " << endl;
	cin >> to;
	int sum_so_far = 0;
	while (from <= to) {
		sum_so_far = sum_so_far + from;
		cout << "cur: " << from << " sum_so_far: " << sum_so_far << endl;
		from++;
		from++;
		to++;
	}
	cout << "sum_so_far: " << sum_so_far << endl;
    return 0;
}

