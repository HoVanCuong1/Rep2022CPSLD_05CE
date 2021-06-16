//
//  main.cpp
//  Lesson75Exercises10
//
//  Created by Branium on 14/06/2021.
//

#include <iostream>
#include <iomanip>
#include "Student.hpp"
#include "Subject.hpp"
#include "Transcript.hpp"
using namespace std;

void showStudentInfoHeader() {
	cout << left << setw(15) << "Ma SV" << setw(25) << "Ho va ten"
		<< setw(25) << "Email" << setw(20) << "So dien thoai" << endl;
}

void showSubjectInfoHeader() {
	cout << left << setw(15) << "Ma mon" << setw(30) << "Ten mon"
		<< setw(10) << "So tiet" << setw(10) << "So tin" << endl;
}

template<class T> int findElementById(T* arr, const int size, const T& t) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == t) {
			return i;
		}
	}
	return -1;
}

template<class T> bool removeElement(T* arr, int& size, const T& t) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == t) {
			for (int j = i; j < size - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			size--;
			return true; // xoa thanh cong
		}
	}
	return false; // xoa that bai
}

int main() {
	int choice = 0;
	Student students[200];
	Subject subjects[200];
	Transcript<Student, Subject> transcripts[200];
	int numberOfStudent = 0;
	int numberOfSubject = 0;
	int numberOfTranscript = 0;
	do {
		cout << "======================== MENU ========================\n";
		cout << "01. Them sinh vien moi vao danh sach.\n";
		cout << "02. Them mon hoc moi vao danh sach.\n";
		cout << "03. Hien thi danh sach sinh vien.\n";
		cout << "04. Hien thi danh sach mon hoc.\n";
		cout << "05. Tim kiem sinh vien trong danh sach.\n";
		cout << "06. Tim kiem mon hoc trong danh sach.\n";
		cout << "07. Cap nhat thong tin email cho sinh vien.\n";
		cout << "08. Xoa mot sinh vien khoi danh sach.\n";
		cout << "09. Xoa mot mon hoc khoi danh sach.\n";
		cout << "10. Sap xep danh sach sinh vien theo ten a-z.\n";
		cout << "11. Sap xep danh sach mon hoc theo ten a-z.\n";
		cout << "12. Lap bang diem cho sinh vien.\n";
		cout << "13. Tinh diem trung binh cho cac sinh vien.\n";
		cout << "14. Sap xep danh sach bang diem theo diem TB giam dan.\n";
		cout << "15. Hien thi danh sach bang diem.\n";
		cout << "16. Ghi thong tin ra file.\n";
		cout << "0. Thoat chuong trinh.\n";
		cout << "Nhap lua chon: ";
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case 0:
			cout << "============ CAM ON BAN DA SU DUNG DICH VU ============\n";
			break;
		case 1: {
			Student s;
			cin >> s;
			students[numberOfStudent++] = s;
			break;
		}
		case 2: {
			Subject s;
			cin >> s;
			subjects[numberOfSubject++] = s;
			break;
		}
		case 3: {
			if (numberOfStudent > 0) {
				cout << "=============== DANH SACH SINH VIEN ===============\n";
				showStudentInfoHeader();
				for (int i = 0; i < numberOfStudent; i++)
				{
					cout << students[i];
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		}
		case 4: {
			if (numberOfSubject > 0) {
				cout << "=============== DANH SACH MON HOC ===============\n";
				showSubjectInfoHeader();
				for (int i = 0; i < numberOfSubject; i++)
				{
					cout << subjects[i];
				}
			}
			else {
				cout << "<== Danh sach mon hoc rong ==>\n";
			}
			break;
		}
		case 5: {
			if (numberOfStudent > 0) {
				string id;
				cout << "Nhap ma sinh vien can tim: ";
				cin >> id;
				Student student(id);
				int foundIndex = findElementById(students, numberOfStudent, student);
				if (foundIndex == -1) {
					cout << "<== Khong tim thay sinh vien ma \"" << id << "\" ==>\n";
				}
				else {
					cout << "<== Tim thay sinh vien ma \"" << id << "\" ==>\n";
					showStudentInfoHeader();
					cout << students[foundIndex];
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		}
		case 6: {
			if (numberOfSubject > 0) {
				string id;
				cout << "Nhap ma mon hoc can tim: ";
				cin >> id;
				Subject subject(id);
				int foundIndex = findElementById(subjects, numberOfSubject, subject);
				if (foundIndex == -1) {
					cout << "<== Khong tim thay mon hoc ma \"" << id << "\" ==>\n";
				}
				else {
					cout << "<== Tim thay mon hoc ma \"" << id << "\" ==>\n";
					showSubjectInfoHeader();
					cout << subjects[foundIndex];
				}
			}
			else {
				cout << "<== Danh sach mon hoc rong ==>\n";
			}
			break;
		}
		case 7: {
			if (numberOfStudent > 0) {
				string id;
				cout << "Nhap ma sinh vien can cap nhat email: ";
				cin >> id;
				Student student(id);
				int foundIndex = findElementById(students, numberOfStudent, student);
				if (foundIndex == -1) {
					cout << "<== Khong tim thay sinh vien ma \"" << id << "\" ==>\n";
				}
				else {
					cout << "Nhap email moi: ";
					string email;
					cin >> email;
					students[foundIndex].setEmail(email);
					cout << "<== Cap nhat email thanh cong ==>\n";
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		}
		case 8: {
			if (numberOfStudent > 0) {
				string id;
				cout << "Nhap ma sinh vien can xoa: ";
				cin >> id;
				Student student(id);
				bool isRemoved = removeElement(students, numberOfStudent, student);
				if (!isRemoved) {
					cout << "<== Khong tim thay sinh vien ma \"" << id << "\" ==>\n";
				}
				else {
					cout << "<== Xoa sinh vien thanh cong ==>\n";
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong ==>\n";
			}
			break;
		}
		case 9: {
			if (numberOfSubject > 0) {
				string id;
				cout << "Nhap ma mon hoc can xoa: ";
				cin >> id;
				Subject subject(id);
				bool isRemoved = removeElement(subjects, numberOfSubject, subject);
				if (!isRemoved) {
					cout << "<== Khong tim thay mon hoc ma \"" << id << "\" ==>\n";
				}
				else {
					cout << "<== Xoa mon hoc thanh cong ==>\n";
				}
			}
			else {
				cout << "<== Danh sach mon hoc rong ==>\n";
			}
			break;
		}
		case 10: {

			break;
		}
		case 11: {

			break;
		}
		case 12: {

			break;
		}
		case 13: {

			break;
		}
		case 14: {

			break;
		}
		case 15: {

			break;
		}
		case 16: {

			break;
		}
		case 17: {

			break;
		}
		default:
			cout << "SAI CHUC NANG, VUI LONG KIEM TRA LAI\n";
			break;
		}
	} while (choice != 0);

	return 0;
}
