// Asks the users questions and plays a short story.
// Author: Paul Talaga
// Date: Sept 1, 2017

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Welcome to my Pirate Story!" << endl << endl;
	string name;
	cout << "What is your name?";
	cin >> name;
	cout << "Well, " << name << " do I have a story for you!" << endl;
	cout << "What is your favorite color?" << endl;
	string color;
	cin >> color;
	cout << "Wow, " << name << ", that is the same color as a dolphin I saw!" << endl;
	cout << "How old are you? " << endl;
	string age;
	cin >> age;
	cout << "Just checking, I don't think a pirate store is appropriate for" << endl;
	cout << "anyone under the age of " << age << ", so you are lucky." << endl << endl;
	cout << "What is your favorite fruit?";
	string fruit;
	cin >> fruit;
	cout << "Are you sure " << fruit << " is a fruit?  Many pirates consider that" << endl;
	cout << "junk.  What about your favorite day of the week?";
	string day;
	cin >> day;
	cout << "HA! Many pirates eat " << fruit << " on " << day << "s!" << endl;
	cout << "Sorry, I have to talk with my " << color << " dolphin now. Bye!" << endl;
}

