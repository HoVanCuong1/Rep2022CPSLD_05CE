/**
 * @author Branium Academy
 * @version 2022.03.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

double add(double a, double b) {
	return a + b;
}

double sub(double a, double b) {
	return a - b;
}

double mul(double a, double b) {
	return a * b;
}

double div(double a, double b) {
	return a / b;
}

void showResult(double res) {
	cout << res << endl;
}

int main() {
	double a, b;
	cout << "Nhap vao hai so thuc a, b: ";
	cin >> a >> b;

	// hiển thị kết quả
	cout << a << " + " << b << " = ";
	showResult(add(a, b));

	cout << a << " - " << b << " = ";
	showResult(sub(a, b));

	cout << a << " * " << b << " = ";
	showResult(mul(a, b));

	cout << a << " / " << b << " = ";
	showResult(div(a, b));

	return 0;
}