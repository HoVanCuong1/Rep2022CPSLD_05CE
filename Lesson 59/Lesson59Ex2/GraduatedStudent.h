#pragma once
#include "Student.h"
class GraduatedStudent : public Student
{
    int graduationYear;
    string graduationGrading;
public:
    GraduatedStudent();
    void showInfo();
    void receiveGraduationCertificate(Date date);
    void setGraduationYear(int year);
    int getGraduationYear() { return graduationYear; }
    void setGraduationGrading(string grading);
    string getGraduationGrading() { return graduationGrading; }
};
