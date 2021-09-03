#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	void showDate() const;
	int getDay() const;
	void setDay(int day);
	int getMonth() const;
	void setMonth(int day);
	int getYear() const;
	void setYear(int day);
};

