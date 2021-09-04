#pragma once
#include <string>
using namespace std;

class FullName
{
	string firstName;
	string lastName;
	string midName;
public:
	FullName() {}
	FullName(string firstName);
	FullName(string, string, string);
	void setFirstName(string first);
	void setLastName(string last);
	void setMidName(string mid);
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }
	string getMidName() { return midName; }
	string getFullName() { return lastName + " " + midName + " " + midName; }
};
