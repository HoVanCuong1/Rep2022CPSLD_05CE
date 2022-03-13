#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
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

void showStudentInfo(Student s) {
	cout << left << setw(10) << s.studentId << setw(10) << s.fullName.lastName
		<< setw(15) << s.fullName.midName << setw(10) << s.fullName.firstName
		<< setw(15) << s.address.wards << setw(15) << s.address.district
		<< setw(15) << s.address.city << setw(10) << s.mark.math << setw(10)
		<< s.mark.cPlusplus << setw(10) << s.mark.english << setw(20) << s.major << endl;
}

void showStudents(Student students[], const int numOfStudent) {
	cout << left << setw(10) << "Ma SV" << setw(10) << "Ho"
		<< setw(15) << "Dem" << setw(10) << "Ten"
		<< setw(15) << "Phuong" << setw(15) << "Quan"
		<< setw(15) << "Thanh pho" << setw(10) << "Toan" << setw(10)
		<< "C++" << setw(10) << "T.Anh" << setw(20) << "Chuyen nganh" << endl;
	for (int i = 0; i < numOfStudent; i++)
	{
		showStudentInfo(students[i]);
	}
}

Student createFakeStudent(string id, string first, string mid, string last,
	string wards, string district, string city, float math, float eng, float c, string major) {
	Student s;
	s.studentId = id;
	s.fullName.firstName = first;
	s.fullName.midName = mid;
	s.fullName.lastName = last;
	s.address.city = city;
	s.address.district = district;
	s.address.wards = wards;
	s.mark.math = math;
	s.mark.english = eng;
	s.mark.cPlusplus = c;
	s.major = major;
	return s;
}

void createFakeData(Student students[], int& numOfStudent) {
	students[numOfStudent++] = createFakeStudent("SV1001", "Nam", "Van", "Nguyen",
		"Minh Khai", "Bac Tu Liem", "Ha Noi", 3.5, 6.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1002", "Minh", "Duc", "Tran",
		"Co Nhue", "Bac Tu Liem", "Ha Noi", 7.5, 7.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1003", "Nhung", "Hong", "Pham",
		"Minh Khai", "Phu Binh", "Thai Nguyen", 8, 8.5, 8.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1004", "Mai", "Thi", "Pham",
		"La Khe", "Ha Dong", "Ha Noi", 8, 6.5, 5.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1005", "Lam", "Van", "Nguyen",
		"Trung Kinh", "Hai Hau", "Nam Dinh", 6, 6.5, 5.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1006", "Linh", "Thuy", "Hoang",
		"Van Chuong", "Hai Chau", "Da Nang", 8.5, 7, 9.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1007", "Nam", "Van", "Tran",
		"Minh Khai", "Quan 7", "Ho Chi Minh", 3.5, 6.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1008", "Nam", "Van", "Le",
		"Minh Khai", "Bac Tu Liem", "Ha Noi", 3.5, 6.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1009", "Nam", "Van", "Nguyen",
		"Minh Khai", "Hoang Hoa", "Thanh Hoa", 3.5, 6.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1014", "Nam", "Van", "Nguyen",
		"Minh Khai", "Hoang Hoa", "Thanh Hoa", 3.5, 6.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1010", "Nam", "Van", "Tran",
		"Minh Khai", "Quan 7", "Ho Chi Minh", 3.5, 8.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1011", "Nam", "Van", "Le",
		"Minh Khai", "Dai Tu", "Thai Nguyen", 3.5, 4.5, 7.5, "CNTT");
	students[numOfStudent++] = createFakeStudent("SV1012", "Nam", "Van", "Nguyen",
		"Minh Khai", "Hoang Hoa", "Thanh Hoa", 3.5, 7.5, 7.5, "CNTT");
}

float sumGpa(Student s) {
	return s.mark.cPlusplus + s.mark.english + s.mark.math;
}

void sortByGPA(Student students[], const int numOfStudent) {
	for (int i = 0; i < numOfStudent - 1; i++)
	{
		for (int j = numOfStudent - 1; j > i; j--)
		{
			if (sumGpa(students[j]) > sumGpa(students[j - 1])) {
				swap(students[j], students[j - 1]);
			}
		}
	}
}

void sortByName(Student students[], int numOfStudent) { // sap xep theo ten a-z
	for (int i = 0; i < numOfStudent - 1; i++)
	{
		for (int j = numOfStudent - 1; j > i; j--)
		{
			if (students[j].fullName.firstName.compare(students[j - 1].fullName.firstName) < 0) {
				swap(students[j], students[j - 1]);
			}
		}
	}
}

void sortByGpaAndName(Student students[], const int numOfStudent) {
	for (int i = 0; i < numOfStudent - 1; i++)
	{
		for (int j = numOfStudent - 1; j > i; j--)
		{
			if (sumGpa(students[j]) > sumGpa(students[j - 1])) {
				swap(students[j], students[j - 1]);
			}
			else if (sumGpa(students[j]) == sumGpa(students[j - 1])) {
				int compareName = students[j].fullName.firstName.compare(students[j - 1].fullName.firstName);
				if (compareName < 0) {
					swap(students[j], students[j - 1]);
				}
				else if (compareName == 0) {
					int compareLastName = students[j].fullName.lastName.compare(students[j - 1].fullName.lastName);
					if (compareLastName < 0) {
						swap(students[j], students[j - 1]);
					}
				}
			}
		}
	}
}

string tolower(string s) {
	transform(s.begin(), s.end(), s.begin(),
		[](unsigned char c) { return std::tolower(c); }
	);
	return s;
}

void searchByName(Student students[], const int numOfStudent,
	Student result[], int& resultSize, string key) {
	key = tolower(key);
	for (int i = 0; i < numOfStudent; i++)
	{
		if (tolower(students[i].fullName.firstName).compare(key) == 0) {
			result[resultSize++] = students[i];
		}
	}
}

void searchByCity(Student students[], const int numOfStudent, 
	Student result[], int& resultSize, string key) {
	key = tolower(key);
	for (int i = 0; i < numOfStudent; i++)
	{
		if (tolower(students[i].address.city).compare(key) == 0) {
			result[resultSize++] = students[i];
		}
	}
}

void remove(Student students[], int& numOfStudent, string key) {
	key = tolower(key);
	for (int i = 0; i < numOfStudent; i++)
	{
		if (key.compare(tolower(students[i].studentId)) == 0) {
			cout << "Ban co chac muon xoa sinh vien ma \"" << students[i].studentId << "\"?\n";
			cout << "Y: chac chan xoa.\nN: huy bo.\n";
			char choice;
			cin >> choice;
			if (choice == 'Y' || choice == 'y') {
				for (int j = i; j < numOfStudent - 1; j++)
				{
					students[j] = students[j + 1];
				}
				cout << "==> Xoa thanh cong.\n";
				numOfStudent--;
			}
			else {
				cout << "==> Huy bo thao tac xoa.\n";
			}
			break;
		}
	}
}

struct Statistic {
	string city;
	float mark;
	int numOfStudent;
};

void statisticByCity(Student students[], const int numOfStudent, Statistic result[], int& numOfResult) {
	// b1: loc ra cac tinh
	for (int i = 0; i < numOfStudent; i++)
	{
		string city = students[i].address.city;
		bool isExisted = false;
		for (int j = 0; j < numOfResult; j++)
		{
			if (city.compare(result[j].city) == 0) {
				result[j].numOfStudent++; // tang so luong sinh vien tai thanh pho nay len
				isExisted = true;
				break;
			}
		}
		if (!isExisted) { // b2: them thanh pho dang xet vao danh sach thong ke
			Statistic stat;
			stat.city = city;
			stat.numOfStudent = 1;
			result[numOfResult++] = stat;
		}
	}
	// b3: sap xep
	for (int i = 0; i < numOfResult - 1; i++)
	{
		for (int j = numOfResult - 1; j > i; j--)
		{
			if (result[j].numOfStudent > result[j - 1].numOfStudent) {
				swap(result[j], result[j - 1]);
			}
		}
	}
}

void statisticByEnglishMark(Student students[], const int numOfStudent, Statistic result[], int& numOfResult) {
	// b1: loc ra cac tinh
	for (int i = 0; i < numOfStudent; i++)
	{
		float egpa = students[i].mark.english;
		bool isExisted = false;
		for (int j = 0; j < numOfResult; j++)
		{
			if (result[j].mark == egpa) {
				result[j].numOfStudent++; // tang so luong sinh vien tai thanh pho nay len
				isExisted = true;
				break;
			}
		}
		if (!isExisted) { // b2: them thanh pho dang xet vao danh sach thong ke
			Statistic stat;
			stat.mark = egpa;
			stat.numOfStudent = 1;
			result[numOfResult++] = stat;
		}
	}
	// b3: sap xep
	for (int i = 0; i < numOfResult - 1; i++)
	{
		for (int j = numOfResult - 1; j > i; j--)
		{
			if (result[j].mark > result[j - 1].mark) {
				swap(result[j], result[j - 1]);
			}
		}
	}
}

void showStatistic(Statistic stats[], const int size) {
	cout << left << setw(20) << "Thanh pho" << setw(10) << "So SV" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << left << setw(20) << stats[i].city << setw(10) << stats[i].numOfStudent << endl;
	}
}

void showStatisticByEnglishMark(Statistic stats[], const int size) {
	cout << left << setw(10) << "Diem" << setw(10) << "So SV" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << left << setw(10) << stats[i].mark << setw(10) << stats[i].numOfStudent << endl;
	}
}

void menu() {
	Student students[200];
	int numOfStudent = 0; // so luong sinh vien
	createFakeData(students, numOfStudent); // tao thong tin sinh vien fake
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
			students[numOfStudent++] = newStudent;
			break;
		}
		case 2:
			if (numOfStudent > 0) {
				cout << "==> Danh sach sinh vien:\n";
				showStudents(students, numOfStudent);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 3:
			if (numOfStudent > 0) {
				sortByGPA(students, numOfStudent);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 4:
			if (numOfStudent > 0) {
				sortByName(students, numOfStudent);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 5:
			if (numOfStudent > 0) {
				sortByGpaAndName(students, numOfStudent);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 6:
			if (numOfStudent > 0) {
				string key;
				cout << "Nhap ten can tim: ";
				cin >> key;
				Student result[200];
				int resultSize = 0;
				searchByName(students, numOfStudent, result, resultSize, key);
				if (resultSize > 0) {
					cout << "==> Tim thay " << resultSize << " ket qua: \n";
					showStudents(result, resultSize);
				}
				else {
					cout << "==> Khong tim thay ket qua nao.\n";
				}
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 7:
			if (numOfStudent > 0) {
				string key;
				cout << "Nhap ten tinh/thanh pho: ";
				cin.ignore();
				getline(cin, key);
				Student result[200];
				int resultSize = 0;
				searchByCity(students, numOfStudent, result, resultSize, key);
				if (resultSize > 0) {
					cout << "==> Tim thay " << resultSize << " ket qua: \n";
					showStudents(result, resultSize);
				}
				else {
					cout << "==> Khong tim thay ket qua nao.\n";
				}
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 8:
			if (numOfStudent > 0) {
				string key;
				cout << "Nhap ma sinh vien can xoa: ";
				cin >> key;
				remove(students, numOfStudent, key);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 9:
			if (numOfStudent > 0) {
				Statistic stats[64];
				int numOfCity = 0;
				statisticByCity(students, numOfStudent, stats, numOfCity);
				cout << "==> So luong sinh vien theo tung tinh: \n";
				showStatistic(stats, numOfCity);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
			break;
		case 10:
			if (numOfStudent > 0) {
				Statistic stats[64];
				int numOfMark = 0;
				statisticByEnglishMark(students, numOfStudent, stats, numOfMark);
				cout << "==> So luong sinh vien theo tung muc diem mon tieng Anh: \n";
				showStatisticByEnglishMark(stats, numOfMark);
			}
			else {
				cout << "==> Danh sach sinh vien rong. <==" << endl;
			}
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