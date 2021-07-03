/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */
#include <iostream>
#include <exception>
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

void createStudent(string id, string name, string addr, string email, string phone, int age, float gpa) {
	try {
		Student ba(id, name, addr, email, phone, age, gpa);
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

int main() {
	string id = "B25DCCN100";
	string name = "Tran Van Ba";
	string address = "Ha Noi";
	string email = "ba@gmail.com";
	string phoneNumber = "5012364789";
	int age = 20;
	float gpa = 8.5f;
	// sai định dạng số điện thoại
	createStudent(id, name, address, email, phoneNumber, age, gpa);
	phoneNumber = "0977826541";
	age = 200;
	// sai tuổi
	createStudent(id, name, address, email, phoneNumber, age, gpa);
	age = 20;
	gpa = 11.56f;
	// sai gpa
	createStudent(id, name, address, email, phoneNumber, age, gpa);

	return 0;
}