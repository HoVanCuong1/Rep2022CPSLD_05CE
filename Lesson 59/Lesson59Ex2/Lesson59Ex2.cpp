#include <iostream>
#include "GraduatedStudent.h"
#include "UnderGraduatedStudent.h"
#include "Lecturer.h"

using namespace std;

GraduatedStudent createGraduatedStudent() {
	string identity;
	string first, last, mid;
	string gender;
	int graduatedYear;
	string grading;
	string studentId;
	cout << "CMND/CC: ";
	getline(cin, identity);
	cout << "Ho: ";
	getline(cin, last);
	cout << "Dem: ";
	getline(cin, mid);
	cout << "Ten: ";
	getline(cin, first);
	cout << "Ma sinh vien: ";
	getline(cin, studentId);
	cout << "Gioi tinh: ";
	getline(cin, gender);
	cout << "Nam tot nghiep: ";
	cin >> graduatedYear;
	cout << "Xep loai: ";
	cin.ignore();
	getline(cin, grading);
	GraduatedStudent s;
	s.setGraduationYear(graduatedYear);
	s.setGraduationGrading(grading);
	s.setIdentity(identity);
	s.setStudentId(studentId);
	s.setGender(gender);
	FullName fullName(first, last, mid);
	s.setFullName(fullName);
	Date date;
	Address address;
	return s;
}

UnderGraduatedStudent createUnderGraduatedStudent() {
	UnderGraduatedStudent s;
	string identity;
	string first, last, mid;
	string gender;
	int subjectStudying;
	string studentId;
	cout << "CMND/CC: ";
	getline(cin, identity);
	cout << "Ho: ";
	getline(cin, last);
	cout << "Dem: ";
	getline(cin, mid);
	cout << "Ten: ";
	getline(cin, first);
	cout << "Ma sinh vien: ";
	getline(cin, studentId);
	cout << "Gioi tinh: ";
	getline(cin, gender);
	cout << "So mon dang hoc: ";
	cin >> subjectStudying;
	s.setIdentity(identity);
	s.setStudentId(studentId);
	s.setGender(gender);
	FullName fullName(first, last, mid);
	s.setFullName(fullName);
	s.setNumOfSubjectStudying(subjectStudying);
	Date date;
	Address address;
	return s;
}

Lecturer createLecturerInfo() {
	Lecturer lecturer;
	string identity;
	string first, last, mid;
	string gender;
	long salary;
	string city;
	string degree;
	string lecturerId;
	int day, month, year;
	cout << "CMND/CC: ";
	getline(cin, identity);
	cout << "Ho: ";
	getline(cin, last);
	cout << "Dem: ";
	getline(cin, mid);
	cout << "Ten: ";
	getline(cin, first);
	cout << "Gioi tinh: ";
	getline(cin, gender);
	cout << "Ma giang vien: ";
	getline(cin, lecturerId);
	cout << "Dia chi(thanh pho): ";
	getline(cin, city);
	cout << "Hoc vi: ";
	getline(cin, degree);
	cout << "Muc luong: ";
	cin >> salary;
	cout << "Ngay thang nam sinh cach nhau boi dau cach: ";
	cin >> day >> month >> year;
	lecturer.setIdentity(identity);
	lecturer.setGender(gender);
	FullName fullName(first, last, mid);
	lecturer.setFullName(fullName);
	Address address(city);
	lecturer.setAddress(address);
	Date dob(day, month, year);
	lecturer.setDateOfBirth(dob);
	lecturer.setLecturerId(lecturerId);
	lecturer.setSalary(salary);
	lecturer.setDegree(degree);
	return lecturer;
}

int main()
{
	int choice;
	GraduatedStudent* graduatedStudents = new GraduatedStudent[100];
	UnderGraduatedStudent* undergraduatedStudents = new UnderGraduatedStudent[100];
	Lecturer* lecturers = new Lecturer[100];
	int numOfGraduated = 0;
	int numOfUnderGraduated = 0;
	int numOfLecturer = 0;
	do {
		cout << "================ MENU ================\n";
		cout << "01. Them moi sinh vien da tot nghiep\n";
		cout << "02. Them moi sinh vien chua tot nghiep\n";
		cout << "03. Them moi giang vien\n";
		cout << "04. Hien thi danh sach sinh vien ra man hinh\n";
		cout << "05. Hien thi danh sach giang vien ra man hinh\n";
		cout << "06. Tim sinh vien theo ten\n";
		cout << "07. Tim giang vien theo hoc vi\n";
		cout << "08. Cap nhat dia chi cho sinh vien da tot nghiep\n";
		cout << "09. Cap nhat ngay sinh cho sinh vien chua tot nghiep\n";
		cout << "10. Cap nhat luong cho giang vien\n";
		cout << "00. Thoat\n";
		cout << "Xin moi chon: ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 0:
			cout << "<== Xin chao va hen gap lai ==>\n";
			break;
		case 1:
			cout << "<== Them moi thong tin sinh vien da tot nghiep ==>\n";
			graduatedStudents[numOfGraduated++] = createGraduatedStudent();
			break;
		case 2:
			undergraduatedStudents[numOfUnderGraduated++] = createUnderGraduatedStudent();
			break;
		case 3:
			lecturers[numOfLecturer++] = createLecturerInfo();
			break;
		case 4:
			if (numOfGraduated > 0 || numOfUnderGraduated > 0) {
				cout << "<== Danh sach Sinh vien ==>\n";
				for (int i = 0; i < numOfGraduated; i++)
				{
					graduatedStudents[i].showInfo();
					cout << "-------------------------------------\n";
				}
				for (int i = 0; i < numOfUnderGraduated; i++)
				{
					undergraduatedStudents[i].showInfo();
					cout << "-------------------------------------\n";
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		case 5:
			if (numOfGraduated > 0 || numOfUnderGraduated > 0) {
				cout << "<== Danh sach Giang vien ==>\n";
				for (int i = 0; i < numOfLecturer; i++)
				{
					lecturers[i].showInfo();
					cout << "-------------------------------------\n";
				}
			}
			else {
				cout << "<== Danh sach giang vien rong ==>\n";
			}
			break;
		case 6:
			if (numOfGraduated > 0 || numOfUnderGraduated > 0) {
				string nameToSearch;
				cout << "Nhap ten sinh vien: ";
				cin >> nameToSearch;
				int searchIndex = -1;
				// tien hanh tim kiem
				for (int i = 0; i < numOfGraduated; i++)
				{
					if (graduatedStudents[i].getFullName().getFirstName().compare(nameToSearch) == 0) {
						graduatedStudents[i].showInfo();
						searchIndex = i;
					}
				}
				for (int i = 0; i < numOfUnderGraduated; i++)
				{
					if (undergraduatedStudents[i].getFullName().getFirstName().compare(nameToSearch) == 0) {
						undergraduatedStudents[i].showInfo();
						searchIndex = i;
					}
				}
				if (searchIndex == -1) {
					cout << "\n<== Khong tim thay sinh vien nao, vui long kiem tra lai ==>\n";
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		case 7:
			if (numOfLecturer > 0) {
				string degree;
				int searchIndex = -1;
				cout << "Nhap hoc vi cua giang vien: ";
				getline(cin, degree);
				for (int i = 0; i < numOfLecturer; i++)
				{
					if (lecturers[i].getDegree().compare(degree) == 0) {
						lecturers[i].showInfo();
						searchIndex = i;
					}
				}
				if (searchIndex == -1) {
					cout << "\n<== Khong tim thay giang vien nao, vui long kiem tra lai ==>\n";
				}
			}
			else {
				cout << "<== Danh sach giang vien rong ==>\n";
			}
			break;
		case 8:
			if (numOfGraduated > 0) {
				string studentId;
				string district, city;
				int searchIndex = -1;
				cout << "Nhap ma sinh vien can cap nhat dia chi: ";
				getline(cin, studentId);
				for (int i = 0; i < numOfGraduated; i++)
				{
					if (graduatedStudents[i].getStudentId().compare(studentId) == 0) {
						cout << "Quan(huyen): ";
						getline(cin, district);
						cout << "Thanh pho: ";
						getline(cin, city);
						graduatedStudents[i].setAddress(Address{district, city, "Vietnam"});
						searchIndex = i;
					}
				}
				if (searchIndex == -1) {
					cout << "\n<== Khong tim thay sinh vien voi ma ban cung cap, vui long kiem tra lai ==>\n";
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		case 9:
			if (numOfUnderGraduated > 0) {
				string studentId;
				int searchIndex = -1;
				int day, month, year;
				cout << "Nhap ma sinh vien can cap nhat ngay sinh: ";
				getline(cin, studentId);
				for (int i = 0; i < numOfUnderGraduated; i++)
				{
					if (undergraduatedStudents[i].getStudentId().compare(studentId) == 0) {
						cout << "Nhap ngay, thang, nam sinh cach nhau boi dau cach: ";
						cin >> day >> month >> year;
						Date dob(day, month, year);
						undergraduatedStudents[i].setDateOfBirth(dob);
						searchIndex = i;
					}
				}
				if (searchIndex == -1) {
					cout << "\n<== Khong tim thay sinh vien voi ma ban cung cap, vui long kiem tra lai ==>\n";
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		case 10:
			if (numOfLecturer > 0) {
				int searchIndex = -1;
				string lecturerId;
				long salary;
				cout << "Nhap ma giang vien: ";
				getline(cin, lecturerId);
				for (int i = 0; i < numOfLecturer; i++)
				{
					if (lecturers[i].getLecturerId().compare(lecturerId) == 0) {
						cout << "Nhap muc luong moi: ";
						cin >> salary;
						lecturers[i].setSalary(salary);
						searchIndex = i;
					}
				}
				if (searchIndex == -1) {
					cout << "\n<== Khong tim thay giang vien nao, vui long kiem tra lai ==>\n";
				}
			}
			else {
				cout << "<== Danh sach giang vien rong ==>\n";
			}
			break;
		default:
			cout << "<== Sai chuc nang. Vui long chon lai. ==>\n";
			break;
		}
	} while (choice != 0);
	return 0;
}
