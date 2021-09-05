#include <iostream>
using namespace std;

enum class Grade {
	A, B, C, D, F, NA
};

string getRank(Grade grade) {
	string result = "";
	switch (grade)
	{
	case Grade::A:
		result = "Very Good";
		break;
	case Grade::B:
		result = "Good";
		break;
	case Grade::C:
		result = "Average";
		break;
	case Grade::D:
		result = "Low Average";
		break;
	case Grade::F:
		result = "Failed";
		break;
	default:
		break;
	}
	return result;
}

int main() {
	char input;
	Grade grade;
	cout << "Nhap diem chu(a, b, c, d, f): ";
	cin >> input;
	switch (input)
	{
	case 'a':
	case 'A':
		grade = Grade::A;
		break;
	case 'b':
	case 'B':
		grade = Grade::B;
		break;
	case 'c':
	case 'C':
		grade = Grade::C;
	case 'd':
	case 'D':
		grade = Grade::D;
	case 'f':
	case 'F':
		grade = Grade::F;
		break;
	default:
		cout << "VALUE IS NOT VALID\n";
		grade = Grade::NA;
		break;
	}
	if (grade != Grade::NA) {
		cout << getRank(grade) << endl;
	}
	return 0;
}