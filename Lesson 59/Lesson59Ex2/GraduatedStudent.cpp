#include "GraduatedStudent.h"

GraduatedStudent::GraduatedStudent() {
	graduationYear = 0;
	graduationGrading = "";
}

void GraduatedStudent::showInfo() {
	Student::showInfo();
	cout << "Nam tot nghiep: " << graduationYear << endl;
	cout << "Xep loai tot nghiep: " << graduationGrading << endl;
}

void GraduatedStudent::receiveGraduationCertificate(Date date) {
	cout << "Sinh vien da tot nghiep nhan bang tot nghiep ngay " << date.getDay()
		<< "/" << date.getMonth() << "/" << date.getYear() << endl;
}

void GraduatedStudent::setGraduationYear(int year) {
	if (year >= 1950 && year <= 2050) {
		this->graduationYear = year;
	}
}

void GraduatedStudent::setGraduationGrading(string garding) {
	this->graduationGrading = garding;
}