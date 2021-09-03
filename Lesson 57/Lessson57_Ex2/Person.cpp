#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int Person::autoIncrementId = 10000000;

Person::Person() {}

Person::Person(const string id) : id(id) { recordId = autoIncrementId++; }

Person::Person(const string id, const FullName& fullName, const Address& address, const Date dob,
	const string email, const string phoneNum, const string occupation, const string gender) :
	id(id), fullName(fullName), address(address), dateOfBirth(dob),
	email(email), phoneNumber(phoneNum), occupation(occupation), gender(gender) {
	recordId = autoIncrementId++;
}

//getter and setter
int Person::getRecordId() const { return recordId; }

void Person::setRecordId(const int recordId) { this->recordId = recordId; }

void Person::setId(const string id) { this->id = id; }

string Person::getId() const { return id; }

void Person::setAddress(const Address& address) { this->address = address; }

Address Person::getAddress() const { return address; }

void Person::setFullName(const FullName& fullName) { this->fullName = fullName; }

FullName Person::getFullName() const { return fullName; }

void Person::setDateOfBirth(const Date dateOfBirth) { this->dateOfBirth = dateOfBirth; }

Date Person::getDateOfBirth() const { return dateOfBirth; }

void Person::setEmail(const string email) { this->email = email; }

string Person::getEmail() const { return email; }

void Person::setPhoneNumber(const string phoneNumber) { this->phoneNumber = phoneNumber; }

string Person::getPhoneNumber() const { return phoneNumber; }

void Person::setOccupation(const string occupation) { this->occupation = occupation; }

string Person::getOccpation() const { return occupation; }

void Person::setGender(const string gender) { this->gender = gender; }

string Person::getGender() const { return gender; }

void Person::sleep() {
	cout << fullName.getFullName() << " is sleeping." << endl;
}

void Person::eat() {
	cout << fullName.getFullName() << " is eating lunch." << endl;
}

void Person::work() {
	cout << fullName.getFullName() << " is working in the garden." << endl;
}

void Person::relax() {
	cout << fullName.getFullName() << " is relaxing by playing with a cat.\n";
}