/*
 * @author Branium Academy
 * @version 2021.02
 * @website braniumacademy.net
 */

#include <iostream>

using namespace std;

void getUserInput(int& a, int& b, int& c);
inline int add(int a, int b, int c);
inline int sumSquareRoot(int a, int b, int c);
inline int multiply(int a, int b, int c);
inline double averageCalculation(int a, int b, int c);
inline bool checkTriangleCreation(int a, int b, int c);
inline bool checkIncrement(int a, int b, int c);

int main()
{
	int a, b, c;
	getUserInput(a, b, c);
	cout << a << " + " << b << " + " << c << " = " << add(a, b, c) << endl;
	cout << "a^2 + b^2 + c^2 = " << sumSquareRoot(a, b, c) << endl;
	cout << a << " * " << b << " * " << c << " = " << multiply(a, b, c) << endl;
	cout << "TBC(a, b, c) = " << averageCalculation(a, b, c) << endl;
	cout << "Ba so a, b, c co tao thanh tam giac? " 
		 << (checkTriangleCreation(a, b, c) ? "Co" : "Khong") << endl;
	cout << "Ba so a, b, c co tang dan theo thu tu? " 
		<< (checkIncrement(a, b, c) ? "Co" : "Khong") << endl;

	return 0;
}

void getUserInput(int& a, int& b, int& c) {
	cout << "Nhap vao ba so nguyen: ";
	cin >> a >> b >> c;
}

inline int add(int a, int b, int c) {
	return a + b + c;
}

inline int sumSquareRoot(int a, int b, int c) {
	return a * a + b * b + c * c;
}

inline int multiply(int a, int b, int c) {
	return a * b * c;
}

inline double averageCalculation(int a, int b, int c) {
	return 1.0 * (a + b + c) / 3;
}

inline bool checkTriangleCreation(int a, int b, int c) {
	return (a + b > c && b + c > a && c + a > b);
}

inline bool checkIncrement(int a, int b, int c) {
	return (a <= b && b <= c);
}