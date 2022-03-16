/**
 * @author Branium Academy
 * @version 2022.03.17
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int getPositiveIntegerNumber() {
	int n;
	do {
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n; // nhap vao mot so nguyen
	} while (n <= 0);
	return n; // tra ve gia tri so nguyen duong n
}

int gcd(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

int lcm(int a, int b) {
	int prod = a * b;
	return prod / gcd(a, b);
}

void showResult(int n) {
	cout << n << endl;
}

int main() {
	// nhap du lieu vao tu ban phim
	int a = getPositiveIntegerNumber();
	int b = getPositiveIntegerNumber();
	// tim va hien thi ucln
	cout << "UCLN(" << a << ", " << b << ") = ";
	showResult(gcd(a, b));
	// tim va hien thi bcnn
	cout << "BCNN(" << a << ", " << b << ") = ";
	showResult(lcm(a, b));

	return 0;
}