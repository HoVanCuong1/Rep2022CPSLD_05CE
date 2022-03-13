#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// thông tin họ và tên
struct FullName {
	string firstName;
	string midName;
	string lastName;
};

// thông tin về địa chỉ
struct Address {
	string wards;
	string district;
	string city;
};

// thông tin điểm
struct Mark {
	float math;
	float english;
	float cPlusplus;
};

// thông tin sinh viên
struct Student {
	string studentId; // mã sinh viên
	FullName fullName; // họ và tên
	Address address; // địa chỉ
	Mark mark; // điểm TB
	string major; // chuyên ngành
};

int main() {

	return 0;
}