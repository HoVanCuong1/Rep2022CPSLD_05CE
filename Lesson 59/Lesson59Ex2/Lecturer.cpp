#include "Lecturer.h"

Lecturer::Lecturer() {
	salary = 0;
}

Lecturer::Lecturer(string id) {
	setLecturerId(id);
}

void Lecturer::teach(string subject) {
	cout << "Giang vien dang day mon " << subject << endl;
}

void Lecturer::showInfo() {
	Person::showInfo();
	cout << "Ma giang vien: " << lecturerId << endl;
	cout << "Hoc vi " << degree << endl;
	cout << "Luong " << salary << endl;
}

void Lecturer::setLecturerId(string id) {
	this->lecturerId = id;
}

void Lecturer::setDegree(string degree) {
	this->degree = degree;
}

void Lecturer::setSalary(long salary) {
	this->salary = salary;
}