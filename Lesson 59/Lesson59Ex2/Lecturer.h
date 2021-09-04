#pragma once
#include "Person.h"

class Lecturer : Person
{
	string lecturerId;
	string degree;
	long salary;
public:
	Lecturer();
	Lecturer(string id);
	void teach(string subject);
	void showInfo();
	void setLecturerId(string id);
	void setDegree(string degree);
	void setSalary(long salary);
	string getLecturerId() { return lecturerId; }
	string getDegree() { return degree; }
	long getSalary() { return salary; }
};

