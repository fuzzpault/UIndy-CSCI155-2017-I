// Name: Paul Talaga
// Date: Dec 4, 2017
// Desc: Demo of the STL vector class.  
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> arr) {

	cout << "Length: " << arr.size() << endl;
	for (int i = 0; i < arr.size(); i++){
		cout << i << ":" << arr[i] << endl;
	}
	// Notice we can change the vector and it does NOT get reflected down in main.  True pass by value!
	arr[0] = 389475;
}

int main()
{
	vector<int> numbers = { 4,5,6,7 };

	// No need to send up the length, the vector knows how long it is.
	print(numbers);

	// We can even make the array larger by pushing a value on the end(back).
	numbers.push_back(10);

	print(numbers);
    return 0;
}

