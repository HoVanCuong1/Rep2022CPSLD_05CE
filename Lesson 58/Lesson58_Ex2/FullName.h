#pragma once
#include <string>
using namespace std;

class FullName
{
private:
	string firstName;
	string lastName;
	string midName;
public:
	FullName();
	FullName(const string firstName);
	FullName(const string firstName, const string lastName);
	FullName(const string firstName, const string lastName, const string midName);
	void setFirstName(const string firstName);
	void setLastName(const string lastName);
	void setMidName(const string midName);
	string getFirstName() const;
	string getLastName() const;
	string getMidName() const;
	string getFullName() const;
};
