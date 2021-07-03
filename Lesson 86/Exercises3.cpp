/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */
#include <iostream>
#include <exception>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class InvalidGPAException : public exception {
public:
	InvalidGPAException() : exception("Diem khong hop le. Diem hop le nam trong doan [0.0, 10.0].") {}
};

class InvalidAgeException : public exception {
public:
	InvalidAgeException() : exception("Tuoi khong hop le. Tuoi hop le nam trong doan [0, 150].") {}
};

class InvalidPhoneNumberException : public exception {
public:
	InvalidPhoneNumberException() : exception("So dien thoai khong hop le.") {}
};

class Student {
	friend ostream& operator << (ostream& os, const Student& s);
	string id;
	string fullName;
	string address;
	string email;
	string phoneNumber;
	int age;
	float gpa;
public:
	Student() : age(0), gpa(0) {}
	Student(string id) : id(id), age(0), gpa(0) {}
	Student(string id, string fullName, string address,
		string email, string phoneNumber, int age, float gpa) :
		id(id), fullName(fullName), address(address), email(email) {
		setAge(age);
		setPhoneNumber(phoneNumber);
		setGPA(gpa);
	}
	void setGPA(float gpa) {
		if (gpa < 0 || gpa > 10.0) {
			throw InvalidGPAException();
		}
		this->gpa = gpa;
	}
	void setAge(int age) {
		if (age < 0 || age > 150) {
			throw InvalidAgeException();
		}
		this->age = age;
	}
	void setPhoneNumber(string phoneNumber) {
		if (phoneNumber.length() != 10 || phoneNumber.at(0) != '0') {
			throw InvalidPhoneNumberException();
		}
		this->phoneNumber = phoneNumber;
	}
};

ostream& operator << (ostream& os, const Student& s) {
	os << left << setw(15) << s.id << setw(20) << s.fullName
		<< setw(20) << s.address << setw(25) << s.email
		<< setw(15) << s.phoneNumber << setw(10) << s.age
		<< setw(10) << s.gpa << endl;
	return os;
}

void createStudent(vector<Student>& v) {
	string id;
	string name;
	string address;
	string email;
	string phoneNumber;
	int age;
	float gpa;
	cout << "Nhap id: ";
	getline(cin, id);
	cout << "Nhap ho ten: ";
	getline(cin, name);
	cout << "Nhap dia chi: ";
	getline(cin, address);
	cout << "Nhap email: ";
	getline(cin, email);
	cout << "Nhap so dien thoai: ";
	getline(cin, phoneNumber);
	cout << "Nhap tuoi: ";
	cin >> age;
	cout << "Nhap diem TB: ";
	cin >> gpa;
	try {
		Student student(id, name, address, email, phoneNumber, age, gpa);
		v.push_back(student);
	}
	catch (InvalidAgeException& e) {
		cout << e.what() << endl;
	}
	catch (InvalidGPAException& e) {
		cout << e.what() << endl;
	}
	catch (InvalidPhoneNumberException& e) {
		cout << e.what() << endl;
	}
}

void showTableHeader() {
	cout << left << setw(15) << "Ma SV" << setw(20) << "Ho ten"
		<< setw(20) << "Dia chi" << setw(25) << "Email"
		<< setw(15) << "So DT" << setw(10) << "Tuoi"
		<< setw(10) << "Diem TB" << endl;
}

int main() {
	vector<Student> students;
	int choice = 0;
	do {
		cout << "================== MENU ==================\n";
		cout << "1. Them sinh vien moi.\n";
		cout << "2. Hien danh sach sinh vien.\n";
		cout << "0. Ket thuc chuong trinh.\n";
		cout << "Ban chon? ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 0:
			cout << "<== Cam on quy vi da su dung dich vu ==>\n";
			break;
		case 1:
			createStudent(students);
			break;
		case 2:
			if (students.size() > 0) {
				showTableHeader();
				for (auto i = students.cbegin(); i != students.cend(); i++)
				{
					cout << *i;
				}
			}
			else {
				cout << "Danh sach sinh vien rong!\n";
			}
			break;
		default:
			cout << "Chuc nang khong hop le. Vui long chon lai.\n";
			break;
		}
	} while (choice != 0);

	return 0;
}