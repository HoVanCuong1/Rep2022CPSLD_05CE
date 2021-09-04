#include "UnderGraduatedStudent.h"

UnderGraduatedStudent::UnderGraduatedStudent() {
	numOfSubjectStudying = 0;
	gpaScore = 0;
}

void UnderGraduatedStudent::showInfo() {
	Student::showInfo();
	cout << "So mon dang hoc: " << numOfSubjectStudying << endl;
	cout << "Diem TB: " << gpaScore << endl;
}

void UnderGraduatedStudent::setGpaScore(float gpa) {
	if (gpa >= 0 && gpa <= 4.0f) {
		this->gpaScore = gpa;
	}
}

void UnderGraduatedStudent::setNumOfSubjectStudying(int num) {
	this->numOfSubjectStudying = num;
}