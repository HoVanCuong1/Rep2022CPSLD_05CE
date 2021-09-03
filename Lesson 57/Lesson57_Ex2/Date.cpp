#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date() {
	day = 1;
	month = 1;
	year = 1900;
}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

void Date::showDate() const {
	cout << setfill('0') << setw(2) << day << "/" << setw(2) 
		<< month << "/" << setw(2) << year << endl;
}

int Date::getDay() const {
	return day;
}

void Date::setDay(int day) {
	int dayOfMonths[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (day > 0 && day <= dayOfMonths[month]) {
		this->day = day;
	}
}

int Date::getMonth() const {
	return month;
}

void Date::setMonth(int month) {
	if (month > 0 && month <= 12) {
		this->month = month;
	}
}

int Date::getYear() const {
	return year;
}

void Date::setYear(int year) {
	if (year >= 1900 && year <= 2050) {
		this->year = year;
	}
}