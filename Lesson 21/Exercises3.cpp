/**
 * @author Branium Academy
 * @version 2022.03.17
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int getInputNumber() {
	int n;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	} while (n <= 0);
	return n;
}

// tính tổng các chữ số của n
int sumDigits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

// tinh tich cac chu so cua n
int mulDigits(int n) {
	int prod = 1;
	while (n > 0) {
		prod *= n % 10;
		n /= 10;
	}
	return prod;
}

int firstDigit(int n) {
	while (n > 10) {
		n /= 10;
	}
	return n;
}

void showResult(int n) {
	cout << n << endl;
}

int main() {
	int n = getInputNumber();
	cout << "Tong chu so cua " << n << ": ";
	showResult(sumDigits(n));

	cout << "Tich chu so cua " << n << ": ";
	showResult(mulDigits(n));

	cout << "Chu so dau tien cua " << n << ": ";
	showResult(firstDigit(n));

	return 0;
}