/**
* @author Branium Academy
* @version 2021.06
* @website braniumacademy.net
*/
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include "Student.h"
#include "Subject.h"
#include "Transcript.h"
using namespace std;
using std::cout;

template<class T> bool incrementComparator(const T& a, const T& b) {
	return a < b;
}

template<class T> void sortASC(vector<T>& v) {
	sort(v.begin(), v.end(), incrementComparator<T>);
}

template<class T> T* findById(vector<T>& v, const T& target) {
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
// hàm template ghi dữ liệu ra file
template<class T> void writeToFile(const vector<T>& v, string fileName) {
	ofstream ofs(fileName, ios::binary | ios::out);
	if (ofs) {
		for (auto it = v.cbegin(); it != v.cend(); it++) {
			ofs.write(reinterpret_cast<const char*>(&(*it)), sizeof(T));
		}
		ofs.close();
	}
	else {
		cout << "Loi khong mo duoc file. Vui long kiem tra lai.\n";
	}
}
// hàm template đọc dữ liệu từ file
template<class T> void readFile(vector<T>& v, string fileName) {
	ifstream ifs(fileName, ios::binary | ios::in);
	if (ifs) {
		while (!ifs.eof()) {
			T t;
			ifs.read(reinterpret_cast<char*>(&t), sizeof(T));
			if (!ifs.eof()) {
				v.push_back(t);
			}
		}
		ifs.close();
	}
	else {
		cout << "Loi khong mo duoc file. Vui long kiem tra lai.\n";
	}
}
// hàm kiểm tra xem môn học x của sinh viên y được nhập vào danh sách bảng điểm chưa
bool checkExisted(const vector<Transcript>& v, const Transcript& tran) {
	for (auto e : v) {
		if (e == tran) {
			return true;
		}
	}
	return false;
}
// hàm tìm điểm trung bình lớn nhất trong danh sách bảng điểm
float findMaxGPA(const vector<Transcript>& v) {
	float maxGpa = v[0].getGPA();
	for (auto e : v) {
		if (e.getGPA() > maxGpa) {
			maxGpa = e.getGPA();
		}
	}
	return maxGpa;
}
// hàm sắp xếp tổng quát
void sortTranscript(vector<Transcript>& v,
	bool(*comparator)(const Transcript&, const Transcript&)) {
	sort(v.begin(), v.end(), comparator);
}

bool gpaDESCOrder(const Transcript& a, const Transcript& b) {
	bool gpaEquals = a.getGPA() == b.getGPA();
	bool firstNameEquals = a.getStudent().getFirstName() == b.getStudent().getFirstName();
	if (gpaEquals == true) {
		if (firstNameEquals) {
			return a.getStudent().getLastName() < b.getStudent().getLastName();
		}
		else {
			return a.getStudent().getFirstName() < b.getStudent().getFirstName();
		}
	}
	else {
		return a.getGPA() > b.getGPA();
	}
}

bool subjectNameOrder(const Transcript& a, const Transcript& b) {
	return a.getSubject().getName() < b.getSubject().getName();
}

bool studentIdOrder(const Transcript& a, const Transcript& b) {
	return a.getStudent().getId() < b.getStudent().getId();
}

bool subjectIdOrder(const Transcript& a, const Transcript& b) {
	return a.getSubject().getId() < b.getSubject().getId();
}

bool rankOrder(const Transcript& a, const Transcript& b) {
	return a.getGPA() > b.getGPA();
}

int main() {
	int choice = 0;
	string subjectFile = "SUBJ.DAT";
	string studentFile = "STUD.DAT";
	string transcriptFile = "TRAN.DAT";
	vector<Student> students;
	vector<Subject> subjects;
	vector<Transcript> transcripts;
	// load dữ liệu từ file
	readFile(students, studentFile);
	readFile(subjects, subjectFile);
	readFile(transcripts, transcriptFile);
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
		{
			if (transcripts.size() > 0) {
				int option;
				do {
					cout << "<== Lua chon sap xep ==>\n";
					cout << "1. Sap xep theo thu tu giam dan diem tong ket.\n";
					cout << "2. Sap xep theo ten mon hoc a-z.\n";
					cout << "3. Sap xep theo ma sinh vien tang dan.\n";
					cout << "4. Sap xep theo ma mon hoc tang dan.\n";
					cout << "5. Sap xep theo xep loai tu A+ -> F.\n";
					cout << "0. Thoat chuc nang nay.\n";
					cout << "Xin moi chon: ";
					cin >> option;
					switch (option)
					{
					case 0:
						break;
					case 1:
					{
						sortTranscript(transcripts, gpaDESCOrder);
						break;
					}
					case 2:
					{
						sortTranscript(transcripts, subjectNameOrder);
						break;
					}
					case 3:
					{
						sortTranscript(transcripts, studentIdOrder);
						break;
					}
					case 4:
					{
						sortTranscript(transcripts, subjectIdOrder);
						break;
					}
					case 5: {
						sortTranscript(transcripts, rankOrder);
						break;
					}
					default:
						cout << "<== Sai chuc nang. Vui long kiem tra lai. ==>\n";
						break;
					}
				} while (option != 0);
			}
			else {
				cout << "<== Danh sach bang diem rong. ==>\n";
			}
			break;
		}
		case 11:
		{
			if (transcripts.size() > 0) {
				int option;
				do {
					cout << "<== Lua chon tim kiem ==>\n";
					cout << "1. Tim sinh vien co diem GPA cao nhat.\n";
					cout << "2. Tim sinh vien co diem GPA bang x.\n";
					cout << "3. Tim sinh vien co xep loai y.\n";
					cout << "4. Tim sinh vien co ten x nhap vao tu ban phim.\n";
					cout << "0. Thoat chuc nang nay.\n";
					cout << "Xin moi chon: ";
					cin >> option;
					switch (option)
					{
					case 0:
						break;
					case 1:
					{
						float maxGpa = findMaxGPA(transcripts);
						showTranscriptTableHeader();
						for (auto e : transcripts)
						{
							if (e.getGPA() == maxGpa) {
								cout << e;
							}
						}
						break;
					}
					case 2:
					{
						float gpa;
						cout << "Nhap diem trung binh can tim: ";
						cin >> gpa;
						bool isExisted = false;
						showTranscriptTableHeader();
						for (auto e : transcripts)
						{
							if (e.getGPA() == gpa) {
								cout << e;
								isExisted = true;
							}
						}
						if (!isExisted) {
							cout << "<== Khong co ket qua nao. ==>\n";
						}
						break;
					}
					case 3:
					{
						cout << "Nhap xep loai: ";
						string rank;
						cin >> rank;
						bool isExisted = false;
						showTranscriptTableHeader();
						for (auto e : transcripts)
						{
							if (e.getRank().compare(rank) == 0) {
								cout << e;
								isExisted = true;
							}
						}
						if (!isExisted) {
							cout << "<== Khong co ket qua nao. ==>\n";
						}
						break;
					}
					case 4:
					{
						cout << "Nhap ten can tim: ";
						string name;
						cin >> name;
						bool isExisted = false;
						showTranscriptTableHeader();
						for (auto e : transcripts)
						{
							if (e.getStudent().getFirstName().compare(name) == 0) {
								cout << e;
								isExisted = true;
							}
						}
						if (!isExisted) {
							cout << "Khong co ket qua nao.\n";
						}
						break;
					}
					default:
						cout << "<== Sai chuc nang. Vui long kiem tra lai. ==>\n";
						break;
					}
				} while (option != 0);
			}
			else {
				cout << "<== Danh sach bang diem rong. ==>\n";
			}
			break;
		}
		case 12:
		{
			if (transcripts.size() > 0) {
				cout << "Nhap ten mon hoc: ";
				string subjectName;
				getline(cin, subjectName);
				for (auto e : transcripts) {
					if (e.getSubject().getName().compare(subjectName) == 0) {
						cout << e;
					}
				}
			}
			else {
				cout << "<== Danh sach bang diem rong. ==>\n";
			}
			break;
		}
		case 13:
			if (transcripts.size() > 0) {
				int transId;
				bool isFound = false;
				cout << "Nhap ma bang diem: ";
				cin >> transId;
				for (size_t i = 0; i < transcripts.size(); i++) {
					if (transcripts[i].getId() == transId) {
						cout << "Nhap diem he so 1, 2, 3, 4: ";
						float grade1, grade2, grade3, grade4;
						cin >> grade1 >> grade2 >> grade3 >> grade4;
						transcripts[i].setGradeLevel1(grade1);
						transcripts[i].setGradeLevel2(grade2);
						transcripts[i].setGradeLevel3(grade3);
						transcripts[i].setGradeLevel4(grade4);
						isFound = true;
						break;
					}
				}
				if (!isFound) {
					cout << "<== Khong tim thay bang diem. Vui long kiem tra lai! ==>";
				}
			}
			else {
				cout << "<== Danh sach bang diem rong. ==>\n";
			}
			break;
		case 14:
			if (transcripts.size() > 0) {
				int transId;
				bool isFound = false;
				cout << "Nhap ma bang diem: ";
				cin >> transId;
				for (auto it = transcripts.begin(); it != transcripts.end(); it++) {
					if (it->getId() == transId) {
						transcripts.erase(it);
						isFound = true;
						cout << "<== Xoa thanh cong ==>\n";
						break;
					}
				}
				if (!isFound) {
					cout << "<== Khong tim thay bang diem. Vui long kiem tra lai! ==>";
				}
			}
			else {
				cout << "<== Danh sach bang diem rong. ==>\n";
			}
			break;
		case 15:
			if (students.size() > 0) {
				writeToFile(students, studentFile);
			}
			else {
				cout << "<== Danh sach sinh vien rong. ==>\n";
			}
			if (subjects.size() > 0) {
				writeToFile(subjects, subjectFile);
			}
			else {
				cout << "<== Danh sach mon hoc rong. ==>\n";
			}
			if (transcripts.size() > 0) {
				writeToFile(transcripts, transcriptFile);
			}
			else {
				cout << "<== Danh sach bang diem rong. ==>\n";
			}
			break;
		default:
			cout << "<== Sai chuc nang, vui long chon lai! ==>\n";
			break;
		}
	} while (choice != 0);
	return 0;
}
