#include <iostream>
using namespace std;

enum class Month {
	JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, 
	AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER, NA
};

string getMonth(Month month) {
	string monthName = "";
	switch (month)
	{
	case Month::JANUARY:
		monthName = "January";
		break;
	case Month::FEBRUARY:
		monthName = "February";
		break;
	case Month::MARCH:
		monthName = "March";
		break;
	case Month::APRIL:
		monthName = "April";
		break;
	case Month::MAY:
		monthName = "May";
		break;
	case Month::JUNE:
		monthName = "June";
		break;
	case Month::JULY:
		monthName = "July";
		break;
	case Month::AUGUST:
		monthName = "August";
		break;
	case Month::SEPTEMBER:
		monthName = "September";
		break;
	case Month::OCTOBER:
		monthName = "October";
		break;
	case Month::NOVEMBER:
		monthName = "November";
		break;
	case Month::DECEMBER:
		monthName = "December";
		break;
	case Month::NA:
		monthName = "";
		break;
	default:
		break;
	}
	return monthName;
}

int main() {
	int input;
	Month month;
	cin >> input;
	switch (input)
	{
	case 1:
		month = Month::JANUARY;
		break;
	case 2:
		month = Month::FEBRUARY;
		break;
	case 3:
		month = Month::MARCH;
		break;
	case 4:
		month = Month::APRIL;
		break;
	case 5:
		month = Month::MAY;
		break;
	case 6:
		month = Month::JUNE;
		break;
	case 7:
		month = Month::JULY;
		break;
	case 8:
		month = Month::AUGUST;
		break;
	case 9:
		month = Month::SEPTEMBER;
		break;
	case 10:
		month = Month::OCTOBER;
		break;
	case 11:
		month = Month::NOVEMBER;
		break;
	case 12:
		month = Month::DECEMBER;
		break;
	default:
		cout << "VALUE IS NOT VALID" << endl;
		month = Month::NA;
		break;
	}
	if (month != Month::NA) {
		cout << getMonth(month) << endl;
	}
	return 0;
}