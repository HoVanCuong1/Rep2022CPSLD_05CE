#include <iostream>
#include <string>
#include "FullName.h"
using namespace std;

FullName::FullName() {}

FullName::FullName(const string firstName) : firstName(firstName) {}

FullName::FullName(const string firstName, const string lastName) :
	firstName(firstName), lastName(lastName) {}

FullName::FullName(const string firstName, const string lastName, const string midName) :
	firstName(firstName), lastName(lastName), midName(midName) {}

void FullName::setFirstName(const string firstName) {
	this->firstName = firstName;
}

void FullName::setLastName(const string lastName) {
	this->lastName = lastName;
}

void FullName::setMidName(const string midName) {
	this->midName = midName;
}

string FullName::getFirstName() const {
	return firstName;
}

string FullName::getLastName() const {
	return lastName;
}

string FullName::getMidName() const {
	return midName;
}

string FullName::getFullName() const {
	return firstName + " " + lastName + " " + midName;
}