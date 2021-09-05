#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	address = Address{ "Cau Giay", "Ha Noi", "Vietnam" };
	dateOfBirth = Date{ 1, 1, 2000 };
}

void Person::showInfo() {
	cout << "CMND/CC: " << identity << endl;
	cout << "Ho va ten: " << fullName.getLastName() << " "
		<< fullName.getMidName() << " " << fullName.getFirstName() << endl;
	cout << "Ngay sinh: " << dateOfBirth.getDay() << "/"
		<< dateOfBirth.getMonth() << "/" << dateOfBirth.getYear() << endl;
	cout << "Dia chi: " << address.getDistrict() << ", " 
		<< address.getCity() << ", " << address.getNation() << endl;
	cout << "Gioi tinh: " << gender << endl;
}