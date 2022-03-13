#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

struct FullName {
	string firstName;
	string midName;
	string lastName;
};

struct Address {
	string wards;
	string district;
	string city;
};

struct Mark {
	float math;
	float english;
	float cPlusplus;
};

struct Student {
	string studentId;
	FullName fullName;
	Address address;
	Mark mark;
	string major;
};

// hàm nhập và trả về thông tin sinh viên
Student getStudentInfo() {
	Student s;
	cout << "Ma sinh vien: ";
	cin >> s.studentId;
	cout << "Ho: ";
	cin >> s.fullName.lastName;
	cin.ignore();
	cout << "Dem: ";
	getline(cin, s.fullName.midName);
	cout << "Ten: ";
	cin >> s.fullName.firstName;
	// nhap dia chi
	cin.ignore();
	cout << "Phuong(xa): ";
	getline(cin, s.address.wards);
	cout << "Quan(huyen): ";
	getline(cin, s.address.district);
	cout << "Thanh pho(tinh): ";
	getline(cin, s.address.city);
	// nhap diem
	cout << "Diem Toan: ";
	cin >> s.mark.math;
	cout << "Diem Tieng Anh: ";
	cin >> s.mark.english;
	cout << "Diem C++: ";
	cin >> s.mark.cPlusplus;
	// nhap chuyen nganh
	cin.ignore();
	cout << "Chuyen nganh: ";
	getline(cin, s.major);
	return s;
}

// hàm hiển thị thông tin của 1 sinh viên
void showStudentInfo(Student s) {
	cout << left << setw(10) << s.studentId << setw(10) << s.fullName.lastName
		<< setw(20) << s.fullName.midName << setw(10) << s.fullName.firstName
		<< setw(15) << s.address.wards << setw(15) << s.address.district
		<< setw(15) << s.address.city << setw(10) << s.mark.math << setw(10)
		<< s.mark.cPlusplus << setw(10) << s.mark.english << setw(20) << s.major << endl;
}

// hàm hiển thị danh sách sinh viên
void showStudents(Student students[], const int size) {
	cout << left << setw(15) << "Ma SV" << setw(10) << "Ho"
		<< setw(20) << "Dem" << setw(10) << "Ten"
		<< setw(20) << "Phuong" << setw(20) << "Quan"
		<< setw(20) << "Thanh pho" << setw(10) << "Toan" << setw(10)
		<< "C++" << setw(10) << "T.Anh" << setw(20) << "Chuyen nganh" << endl;
	for (int i = 0; i < size; i++)
	{
		showStudentInfo(students[i]);
	}
}

// hàm triển khai và lời gọi cho menu
void menu() {
	Student students[200];
	int size = 0; // so luong sinh vien
	int choice;
	do
	{
		cout << "========================= MENU =========================\n";
		cout << "1. Them moi sinh vien.\n";
		cout << "2. Hien thi danh sach sinh vien.\n";
		cout << "3. Sap xep danh sach sinh vien theo tong diem.\n";
		cout << "4. Sap xep danh sach sinh vien theo ten a-z.\n";
		cout << "5. Sap xep danh sach sinh vien theo tong diem va ten a-z.\n";
		cout << "6. Tim sinh vien theo ten.\n";
		cout << "7. Tim sinh vien theo tinh.\n";
		cout << "8. Xoa sinh vien theo ma sinh vien.\n";
		cout << "9. Liet ke luong sinh vien theo tinh.\n";
		cout << "10. Liet ke luong sinh vien theo dau diem tieng Anh.\n";
		cout << "11. Sua thong tin diem C++ cho sinh vien.\n";
		cout << "12. Thoat chuong trinh.\n";
		cout << "Xin moi chon: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			Student newStudent = getStudentInfo();
			students[size++] = newStudent;
			break;
		}
		case 2:
			if (size > 0) {
				showStudents(students, size);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			cout << "==> Xin chao va hen gap lai! <==\n";
			break;
		default:
			cout << "==>Sai chuc nang. Vui long chon chuc nang 1-12.\n";
			break;
		}
	} while (choice != 0);
}

int main() {
	menu();
	return 0;
}