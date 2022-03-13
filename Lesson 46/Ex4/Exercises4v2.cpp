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
			break;
		case 2:
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

	return 0;
}