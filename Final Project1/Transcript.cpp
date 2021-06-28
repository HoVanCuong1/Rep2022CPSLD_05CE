#include "Transcript.h"
int Transcript::autoId = 10000;

istream& operator >> (istream& is, Transcript& subject) {

	return is;
}

ostream& operator << (ostream& os, const Transcript& student) {

	return os;
}

Transcript::Transcript() {
	id = 0;
	gpa = 0;
	gradeLevel1 = 0;
	gradeLevel2 = 0;
	gradeLevel3 = 0;
	gradeLevel4 = 0;
}

Transcript::Transcript(int id) : id(id) { }

Transcript::Transcript(int id, Student student, Subject subject, float gradeLevel1,
	float gradeLevel2, float gradeLevel3, float gradeLevel4, float gpa, string rank) {
	setId(id);
	setStudent(student);
	setSubject(subject);
	setGradeLevel1(gradeLevel1);
	setGradeLevel2(gradeLevel2);
	setGradeLevel3(gradeLevel3);
	setGradeLevel4(gradeLevel4);
	setGpa(gpa);
}

void Transcript::setId(int id) { this->id = id; }

void Transcript::setStudent(Student student) { this->student = student; }

void Transcript::setSubject(Subject subject) { this->subject = subject; }

void Transcript::setRank(string rank) { 
	int len = rank.size();
	len = len < 40 ? len : 39;
	rank.copy(this->rank, len);
	this->rank[len] = '\0';
}

void Transcript::setGradeLevel1(float gl1) { this->gradeLevel1 = gl1; }

void Transcript::setGradeLevel2(float gl2) { this->gradeLevel2 = gl2; }

void Transcript::setGradeLevel3(float gl3) { this->gradeLevel3 = gl3; }

void Transcript::setGradeLevel4(float gl4) { this->gradeLevel4 = gl4; }

void Transcript::setGpa(float gpa) { this->gpa = gpa; }

string Transcript::getRank() const { return rank; }

int Transcript::getId() const { return id; }

Student Transcript::getStudent() const { return student; }

Subject Transcript::getSubject() const { return subject; }

float Transcript::getGradeLevel1() const { return gradeLevel1; }

float Transcript::getGradeLevel2() const { return gradeLevel2; }

float Transcript::getGradeLevel3() const { return gradeLevel3; }

float Transcript::getGradeLevel4() const { return gradeLevel4; }

float Transcript::getGPA() const { return gpa; }

bool Transcript::operator < (const Transcript& s) const {
	return gpa < s.gpa;
}

bool Transcript::operator == (const Transcript& s) const {
	return id == s.id;
}

bool Transcript::operator > (const Transcript& s) const {
	return gpa > s.gpa;
}