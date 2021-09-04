#pragma once
#include "Person.h"

class Student : Person
{
	string studentId;
	string major;
public:
	Student();
	Student(string studentId);
	void payFee(long amount);
	void showInfo();
	void exam(string subject);
	string getStudentId() { return studentId; }
	string getMajor() { return major; }
	void setStudentId(string id);
	void setMajor(string id);
};

