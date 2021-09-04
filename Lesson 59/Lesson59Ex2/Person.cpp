#include <iostream>
#include "Person.h"
using namespace std;

void Person::showInfo() {
	cout << "CMND/CC: " << identity << endl;
	cout << "Ho va ten: " << fullName.getLastName() << " "
		<< fullName.getMidName() << " " << fullName.getFirstName() << endl;
	cout << "Ngay sinh: " << dateOfBirth.getDay() << "/"
		<< dateOfBirth.getMonth() << "/" << dateOfBirth.getYear() << endl;
	cout << "Dia chi: " << address.getCity() << ", " << address.getNation() << endl;
	cout << "Gioi tinh: " << gender << endl;
}