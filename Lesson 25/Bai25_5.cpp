/*
 * @author Branium Academy
 * @version 2021.02
 * @website braniumacademy.net
 */

#include <iostream>

using namespace std;

void getNaturalNumbers(unsigned int& a, unsigned int& b,
	unsigned int& c, unsigned int& d);
inline unsigned int findMax(unsigned int a = 0,
	unsigned int b = 0, unsigned int c = 0, unsigned int d = 0);
inline unsigned int findMin(unsigned int a = 0,
	unsigned int b = 0, unsigned int c = 0, unsigned int d = 0);
inline double averageValue(unsigned int a = 0,
	unsigned int b = 0, unsigned int c = 0, unsigned int d = 0);
inline unsigned int findSecondMax(unsigned int a = 0,
	unsigned int b = 0, unsigned int c = 0, unsigned int d = 0);
inline unsigned int findSecondMin(unsigned int a = 0,
	unsigned int b = 0, unsigned int c = 0, unsigned int d = 0);

int main() {
	unsigned int a, b, c, d;
	getNaturalNumbers(a, b, c, d);
	cout << "4 so (a, b, c, d) = (" << a << ", "
		<< b << ", " << c << ", " << d << ")" << endl;
	cout << "TBC 4 so = " << averageValue(a, b, c, d) << endl;
	if (a == b && b == c && c == d) {
		cout << "Khong co gia tri min, max, max2, min2" << endl;
	}
	else {
		cout << "Max = " << findMax(a, b, c, d) << endl;
		cout << "Min = " << findMin(a, b, c, d) << endl;
		cout << "Max2 = " << findSecondMax(a, b, c, d) << endl;
		cout << "Min2 = " << findSecondMin(a, b, c, d) << endl;
	}

	return 0;
}

void getNaturalNumbers(unsigned int& a, unsigned int& b,
	unsigned int& c, unsigned int& d) {
	cout << "Nhap vao 4 so tu nhien: ";
	cin >> a >> b >> c >> d;
}

unsigned inline int findMax(unsigned int a, unsigned int b,
	unsigned int c, unsigned int d) {
	unsigned int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	return max;
}

unsigned inline int findMin(unsigned int a, unsigned int b,
	unsigned int c, unsigned int d) {
	unsigned int min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	if (min > d) {
		min = d;
	}
	return min;
}

inline double averageValue(unsigned int a, unsigned int b,
	unsigned int c, unsigned int d) {
	return 1.0 * (a + b + c + d) / 4;
}

unsigned inline int findSecondMax(unsigned int a, unsigned int b,
	unsigned int c, unsigned int d) {
	unsigned int max2 = findMin(a, b, c, d);
	unsigned int max = findMax(a, b, c, d);
	if (max2 < a && a != max) {
		max2 = a;
	}
	if (max2 < b && b != max) {
		max2 = b;
	}
	if (max2 < c && c != max) {
		max2 = c;
	}
	if (max2 < d && d != max) {
		max2 = d;
	}
	return max2;
}

unsigned inline int findSecondMin(unsigned int a, unsigned int b,
	unsigned int c, unsigned int d) {
	unsigned int min2 = findMax(a, b, c, d);
	unsigned int min = findMin(a, b, c, d);
	if (min2 > a && a != min) {
		min2 = a;
	}
	if (min2 > b && b != min) {
		min2 = b;
	}
	if (min2 > c && c != min) {
		min2 = c;
	}
	if (min2 > d && d != min) {
		min2 = d;
	}
	return min2;
}