/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include<iostream>
using namespace std;

int main() {
	int month;
	cin >> month;
	cout << (
		month == 1 ? "January" :
		month == 2 ? "February" :
		month == 3 ? "March" :
		month == 4 ? "April" :
		month == 5 ? "May" :
		month == 6 ? "June" :
		month == 7 ? "July" :
		month == 8 ? "August" :
		month == 9 ? "September" :
		month == 10 ? "October" :
		month == 11 ? "November" :
		month == 12 ? "December" :
		"VALUE IS NOT VALID"
		);
}