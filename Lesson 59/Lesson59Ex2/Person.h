#pragma once
#include <iostream>
#include "FullName.h"
#include "Date.h"
#include "Address.h"

using namespace std;

class Person
{
	string identity;
	string gender;
	Address address;
	Date dateOfBirth;
	FullName fullName;
public:
	Person();
	Person(string id) { this->identity = id; }
	void showInfo();
	void setIdentity(string id) { this->identity = id; }
	void setFullName(FullName fullName) { this->fullName = fullName; }
	void setAddress(Address address) { this->address = address; }
	void setDateOfBirth(Date dob) { this->dateOfBirth = dob; }
	void setGender(string gender) { this->gender = gender; }
	string getIdentity() { return identity; }
	string getGender() { return gender; }
	Date getDateOfBirth() { return dateOfBirth; }
	Address getAddress() { return address; }
	FullName getFullName() { return fullName; }
};

