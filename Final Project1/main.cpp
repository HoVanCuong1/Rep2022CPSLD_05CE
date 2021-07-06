#include <iostream>
#include <algorithm>
#include <vector>
#include "Student.h"
#include "Subject.h"
#include "Transcript.h"
using namespace std;

template<class T> bool incrementComparator(const T& a, const T& b) {
	return a < b;
}

template<class T> void sortASC(vector<T>& v) {
	sort(v.begin(), v.end(), incrementComparator<T>);
}

template<class T> T* findById(const vector<T>& v, const T& target) {
	for (auto i = v.begin(); i != v.end(); i++) {
		if (*i == target) {
			return &(*i);
		}
	}
	return nullptr;
}

void showStudentTableHeader() {
	cout << left << setw(20) << "CMND/CC/HC" << setw(15) << "Ma SV"
		<< setw(10) << "Ho" << setw(20) << "Dem" << setw(10) << "Ten"
		<< setw(30) << "Email" << setw(30) << "Dia chi" << setw(15)
		<< "So DT" << setw(30) << "Chuyen nganh" << setw(15) << "Nien khoa" << endl;
}

void showSubjectTableHeader() {
	cout << left << setw(15) << "Ma mon" << setw(30) << "Ten mon"
		<< setw(15) << "So tin" << endl;
}

void showTranscriptTableHeader() {
	cout << left << setw(10) << "Ma BD" << setw(15) << "Ma mon"
		<< setw(20) << "Ten mon" << setw(15) << "Ma SV"
		<< setw(10) << "Ho" << setw(20) << "Dem" << setw(10) << "Ten"
		<< setw(10) << "Diem he 1" << setw(10) << "Diem he 2"
		<< setw(10) << "Diem he 3" << setw(10) << "Diem he 4"
		<< setw(10) << "Diem TB" << setw(10) << "Xep loai" << endl;
}

template<class T> void writeToFile(const vector<T>& v, string fileName) {
	
}

template<class T> void readFile(vector<T>& v, string fileName) {

}

bool checkExisted(const vector<Transcript>& v, const Transcript& tran) {
	for (auto e : v) {
		if (e == tran) {
			return true;
		}
	}
	return false;
}

int main() {
	int choice = 0;
	string subjectFile = "SUBJ.DAT";
	string studentFile = "STUD.DAT";
	string transcriptFile = "TRAN.DAT";
	vector<Student> students;
	vector<Subject> subjects;
	vector<Transcript> transcripts;
	do {
		cout << "================================= MENU =================================\n";
		cout << "1. Nhap moi mot mon hoc.\n";
		cout << "2. Nhap moi mot sinh vien.\n";
		cout << "3. Hien thi danh sach mon hoc.\n";
		cout << "4. Hien thi danh sach sinh vien.\n";
		cout << "5. Sap xep danh sach sinh vien theo ten a-z.\n";
		cout << "6. Sap xep danh sach mon hoc theo ten tang dan a-z.\n";
		cout << "7. Tao bang diem cho tung sinh vien.\n";
		cout << "8. Tinh diem tong ket, xep loai cho sinh vien.\n";
		cout << "9. Hien thi thong tin bang diem.\n";
		cout << "10. Sap xep danh sach bang diem.\n";
		cout << "11. Tim kiem sinh vien thoa dieu kien.\n";
		cout << "12. Tim bang diem theo ten mon hoc.\n";
		cout << "13. Cap nhat dau diem theo ma bang diem.\n";
		cout << "14. Xoa bang diem theo ma bang diem.\n";
		cout << "15. Ghi du lieu ra file.\n";
		cout << "0. Thoat chuong trinh.\n";
		cout << "Xin moi chon: ";
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case 0:
			cout << "<== Phien lam viec ket thuc. Cam on va hen gap lai! ==>\n";
		break;		case 1: {
			Subject subject;
			cin >> subject;
			subjects.push_back(subject);
			break;
		}
		case 2: {
			Student student;
			cin >> student;
			students.push_back(student);
			break;
		}
		case 3:
			if (subjects.size() > 0) {
				showSubjectTableHeader();
				for (auto i = subjects.cbegin();
					i != subjects.cend(); i++) {
					cout << *i;
				}
			}
			else {
				cout << "<== Danh sach mon hoc rong. ==>\n";
			}
			break;
		case 4:
			if (students.size() > 0) {
				showStudentTableHeader();
				for (auto i = students.cbegin(); i != students.cend(); i++) {
					cout << *i;
				}
			}
			else {
				cout << "<== Danh sach sinh vien rong. ==>\n";
			}
			break;
		case 5:
			if (students.size() > 0) {
				sortASC(students);
			}
			else {
				cout << "<== Danh sach sinh vien rong. ==>\n";
			}			break;
		case 6:
			if (subjects.size() > 0) {
				sortASC(subjects);
			}
			else {
				cout << "<== Danh sach mon hoc rong. ==>\n";
			}
			break;
		case 7:
		{
			cout << "Nhap ma sinh vien: ";
			string studentId;
			getline(cin, studentId);
			Student st(studentId);
			auto student = findById(students, st);
			if (student != nullptr) {
				cout << "Nhap ma mon hoc: ";
				int subjectId;
				cin >> subjectId;
				Subject sj(subjectId);
				auto subject = findById(subjects, sj);
				if (subject != nullptr) {
					Transcript tran(st, sj);
					bool isExisted = checkExisted(transcripts, tran);
					if (isExisted) {
						cout << "Sinh vien ma \"" << studentId << "\" voi mon hoc ma \""
							<< subjectId << "\" da ton tai!\n";
					}
					else {
						float gradeLv1;
						float gradeLv2;
						float gradeLv3;
						float gradeLv4;
						cout << "Nhap diem he so 1: ";
						cin >> gradeLv1;
						cout << "Nhap diem he so 2: ";
						cin >> gradeLv2;
						cout << "Nhap diem he so 3: ";
						cin >> gradeLv3;
						cout << "Nhap diem he so 4: ";
						cin >> gradeLv4;
						Transcript tran(0, *student, *subject, gradeLv1, gradeLv2, gradeLv3, gradeLv4);
						transcripts.push_back(tran);
					}
				}
			}
			break;
		}
		case 8:
			for (size_t i = 0; i < transcripts.size(); i++) {
				transcripts[i].calculateGPA();
			}
			break;
		case 9:
			showTranscriptTableHeader();
			for (auto e : transcripts) {
				cout << e;
			}
			break;
		case 10:

			break;
		case 11:

			break;
		case 12:

			break;
		case 13:

			break;
		case 14:

			break;
		case 15:

			break;
		default:
			cout << "Sai chuc nang, vui long chon lai!\n";
			break;
		}
	} while (choice != 0);
	return 0;
}