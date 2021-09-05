#include "Student.h"

Student::Student() {
	studentId = "";
	major = "CNTT";
}

Student::Student(string studentId) {
	this->studentId = studentId;
	this->major = major;
}

void Student::payFee(long amount) {
	cout << "Student pay fee amount: " << amount << endl;
}

void Student::showInfo() {
	Person::showInfo();
	cout << "Ma sinh vien: " << studentId << endl;
	cout << "Chuyen nganh: " << major << endl;
}

void Student::exam(string subject) {
	cout << "Sinh vien lam bai thi " << subject << endl;
}

void Student::setStudentId(string id) {
	this->studentId = id;
}

void Student::setMajor(string major) {
	this->major = major;
}