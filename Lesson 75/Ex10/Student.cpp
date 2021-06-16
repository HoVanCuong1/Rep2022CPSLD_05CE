/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 * 
 */

#include <iomanip>
#include <cstring>
#include "Student.hpp"
using namespace std;

class Student;

Student::Student(std::string id, std::string firstName, std::string lastName,
        std::string midName, std::string email, std::string phoneNumber) {
    setId(id);
    setFirstName(firstName);
    setLastName(lastName);
    setMidName(midName);
    setEmail(email);
    setPhoneNumber(phoneNumber);
}

void Student::setId(std::string id) {
    int len = (int)id.length();
    len = len > 20 ? 19 : len;
    id.copy(this->id, len);
    this->id[len] = '\0';
}

void Student::setFirstName(std::string firstName) {
    int len = (int)firstName.length();
    len = len > 20 ? 19 : len;
    firstName.copy(this->firstName, len);
    this->firstName[len] = '\0';
}

void Student::setLastName(std::string lastName) {
    int len = (int)lastName.length();
    len = len > 20 ? 19 : len;
    lastName.copy(this->lastName, len);
    this->lastName[len] = '\0';
}

void Student::setMidName(std::string midName) {
    int len = (int)midName.length();
    len = len > 20 ? 19 : len;
    midName.copy(this->midName, len);
    this->midName[len] = '\0';
}

void Student::setEmail(std::string email) {
    int len = (int)email.length();
    len = len > 40 ? 39 : len;
    email.copy(this->email, len);
    this->email[len] = '\0';
}

void Student::setPhoneNumber(std::string phone) {
    int len = (int)phone.length();
    len = len > 20 ? 19 : len;
    phone.copy(this->phoneNumber, len);
    this->phoneNumber[len] = '\0';
}

ostream& operator << (ostream& os, const Student& student) {
    os << left << setw(15) << student.id << setw(25) << student.getFullName()
        << setw(25) << student.email << setw(20) << student.phoneNumber << endl;
    return os;
}

istream& operator >> (istream& is, Student& student) {
    cout << "Ma sinh vien: ";
    is.getline(student.id, 20);
    cout << "Ho: ";
    is.getline(student.lastName, 20);
    cout << "Dem: ";
    is.getline(student.midName, 20);
    cout << "Ten: ";
    is.getline(student.firstName, 20);
    cout << "Email: ";
    is.getline(student.email, 40);
    cout << "So dien thoai: ";
    is.getline(student.phoneNumber, 20);
    return is;
}

string Student::getFullName() const {
    return (std::string(lastName) +
            " " + std::string(midName) + " " + std::string(firstName));
}

bool Student::operator == (const Student& other) {
    return strcmp(id, other.id) == 0;
}

bool Student::operator > (const Student& other) {
    return strcmp(firstName, other.firstName) > 0;
}
