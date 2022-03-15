/**
 * @author Branium Academy
 * @version 2022.03.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

double getRealNumber() {
	double x;
	cout << "Nhap vao mot so thuc x: ";
	cin >> x; // đọc vào giá trị x
	return x; // trả về giá trị số thực x
}

double max(double a, double b, double c) {
	double maxValue = a;
	if (maxValue < b) {
		maxValue = b;
	}
	if (maxValue < c) {
		maxValue = c;
	}
	return maxValue;
}

double min(double a, double b, double c) {
	double minValue = a;
	if (minValue > b) {
		minValue = b;
	}
	if (minValue > c) {
		minValue = c;
	}
	return minValue;
}

bool isTriangle(double a, double b, double c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	return false; // không phải ba cạnh của tam giác
}

int main() {
	double a = getRealNumber();
	double b = getRealNumber();
	double c = getRealNumber();
	// gọi và hiển thị kết quả
	cout << "max(" << a << ", " << b << ", " << c << ") = " << max(a, b, c) << endl;
	cout << "min(" << a << ", " << b << ", " << c << ") = " << min(a, b, c) << endl;
	cout << (isTriangle(a, b, c) ? "La " : "Khong la ") << "3 canh thanh tam giac." << endl;

	return 0;
}