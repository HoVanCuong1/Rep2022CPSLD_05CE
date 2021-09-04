#include "FullName.h"

FullName::FullName(string firstName) {
	setFirstName(firstName);
}

FullName::FullName(string firstName, string lastName, string midName) {
	setFirstName(firstName);
	setLastName(lastName);
	setMidName(midName);
}

void FullName::setFirstName(string first) {
	if (first.length() > 0) {
		this->firstName = first;
	}
}

void FullName::setLastName(string last) {
	if (last.length() > 0) {
		this->lastName = last;
	}
}

void FullName::setMidName(string mid) {
	if (mid.length() > 0) {
		this->midName = mid;
	}
}