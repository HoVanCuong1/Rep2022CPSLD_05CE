/**
* @author Branium Academy
* @version 2021.09
* @see https://braniumacademy.net
*/
#include <iostream>
#include <string>
using namespace std;

#define NUMBER_OF_DAY 7

struct DayOfWeek {
	int dayId;
	string dayNameEn;
	string dayNameVi;
};

void createADate(struct DayOfWeek& day, int dayId) {
	string dayNameInEnglish[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	string dayNameInVietnamese[] = {"Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay", "Chu Nhat"};
	day.dayId = dayId + 1;
	day.dayNameEn = dayNameInEnglish[dayId];
	day.dayNameVi = dayNameInVietnamese[dayId];
}

void createDaysOfWeek(struct DayOfWeek* daysOfWeek) {
	for (int i = 0; i < NUMBER_OF_DAY; i++)
	{
		createADate(daysOfWeek[i], i);
	}
}

int main()
{
	int day;
	struct DayOfWeek* dow = new DayOfWeek[NUMBER_OF_DAY];
	createDaysOfWeek(dow);
	do {
		cout << "Nhap gia tri trong doan [1, 7] de xem ngay.\nNhap 0 de ket thuc: ";
		cin >> day;
		if (day >= 1 && day <= 7) {
			cout << "=================================\n";
			cout << "\t" << dow[day - 1].dayNameEn << " - " 
				<< dow[day - 1].dayNameVi << endl;
			cout << "=================================\n";
		}
		else if (day != 0) {
			cout << "Ngay khong ton tai." << endl;
		}
	} while (day != 0 );
	return 0;
}
