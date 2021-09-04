#include "Date.h"

Date::Date() {
	day = 0;
	month = 0;
	year = 1900;
}
Date::Date(int day, int month, int year) {
	setDay(day);
	setMonth(month);
	setYear(year);
}

void Date::setDay(int day) {
	int dayOfMonths[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (day > 0 && day <= dayOfMonths[month]) {
		this->day = day;
	}
}

void Date::setMonth(int month) {
	if (month > 0 && month <= 12) {
		this->month = month;
	}
}

void Date::setYear(int year) {
	if (year >= 1900 && year <= 2050) {
		this->year = year;
	}
}

int Date::getDay() { return day; }

int Date::getMonth() { return month; }

int Date::getYear() { return year; }