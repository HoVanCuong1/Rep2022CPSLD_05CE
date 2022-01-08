#include <string>
#include <iostream>
using namespace std;

/**
* @author Branium Academy
* @version 2022.01.08
* @see https://braniumacademy.net
*/

struct FullName {
	string lastName;
	string midName;
	string firstName;
};

struct Address {
	string wards;
	string district;
	string city;
};

struct Score {
	float math;
	float english;
	float programming;
};

struct Student {
	string maSV;
	struct FullName hoTen;
	struct Address Address;
	struct Score score;
};

struct Student createStudents() {
	struct Student student;
	cout << "Ma sinh vien: ";
	cin >> student.maSV;
	cout << "Ho: ";
	cin >> student.hoTen.lastName;
	cout << "Dem: ";
	cin.ignore();
	getline(cin, student.hoTen.midName);
	cout << "Ten: ";
	cin >> student.hoTen.firstName;
	cin.ignore();
	cout << "Xa: ";
	getline(cin, student.Address.wards);
	cout << "Huyen: ";
	getline(cin, student.Address.district);
	cout << "Tinh: ";
	getline(cin, student.Address.city);
	cout << "Diem Toan: ";
	cin >> student.score.math;
	cout << "Diem TA: ";
	cin >> student.score.english;
	cout << "Diem Lap trinh: ";
	cin >> student.score.programming;
	return student;
}

void showStudents(struct Student* sv, int n) {
	// todo
}

void menu() {
	// todo
}

int main() {
	int numOfStudent = 0;
	struct Student students[100];
	menu();
	return 0;
}