#pragma once
#include "Student.h"
class UnderGraduatedStudent : public Student
{
    int numOfSubjectStudying;
    float gpaScore;
public:
    UnderGraduatedStudent();
    void showInfo();
    void setGpaScore(float gpa);
    int getNumOfSubjectStudying() { return numOfSubjectStudying; }
    void setNumOfSubjectStudying(int numberOfSubject);
    float getGpaScore() { return gpaScore; }
};
