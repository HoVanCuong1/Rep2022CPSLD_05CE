/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.05
 */

#include <iostream>
using namespace std;

enum class DayOfWeek { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

void showSeparator() {
	cout << "============================================\n";
}

string getName(DayOfWeek day) {
	switch (day)
	{
	case DayOfWeek::MONDAY:
		return "Monday";
	case DayOfWeek::TUESDAY:
		return "Tuesday";
	case DayOfWeek::WEDNESDAY:
		return "Wednesday";
	case DayOfWeek::THURSDAY:
		return "Thursday";
	case DayOfWeek::FRIDAY:
		return "Friday";
	case DayOfWeek::SATURDAY:
		return "Saturday";
	case DayOfWeek::SUNDAY:
		return "Sunday";
	default:
		return "Sunday";
	}
}

DayOfWeek convertToEnum(int choice) {
	switch (choice)
	{
	case 1:
		return DayOfWeek::MONDAY;
	case 2:
		return DayOfWeek::TUESDAY;
	case 3:
		return DayOfWeek::WEDNESDAY;
	case 4:
		return DayOfWeek::THURSDAY;
	case 5:
		return DayOfWeek::FRIDAY;
	case 6:
		return DayOfWeek::SATURDAY;
	case 7:
		return DayOfWeek::SUNDAY;
	default:
		return DayOfWeek::SUNDAY;
	}
}

int main() {
	int choice;
	do {
		cout << "Nhap vao gia tri 1-7.\n";
		cout << "Nhap 0 de thoat.\n";
		cout << "Ban chon? ";
		cin >> choice;
		showSeparator();
		switch (choice)
		{
		case 0:
			cout << "<== Thoat chuong trinh ==>\n";
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		{
			DayOfWeek dayOfWeek = convertToEnum(choice);
			cout << choice << " ==> " << getName(dayOfWeek) << endl;
			break;
		}
		default:
			cout << "Gia tri khong hop le. Vui long kiem tra lai\n";
			break;
		}
		showSeparator();
	} while (choice != 0);
	return 0;
}