/**
 * @author Branium Academy
 * @version 2022.03.17
 * @see https://braniumacademy.net
 */

#include <iostream>
#include <cmath>
using namespace std;

int getIntegerNumber() {
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	return n;
}

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	int bound = (int)sqrt(n);
	for (int i = 2; i <= bound; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int reverseN(int n) {
	int x = 0;
	while (n > 0) {
		x = x * 10 + n % 10;
		n /= 10;
	}
	return x;
}

int sumDigits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool isSumDigitsPrime(int n) {
	if (n < 0) {
		n = -n;
	}
	int sum = sumDigits(n);
	bool result = isPrime(sum);
	return result;
}

bool isSquare(int n) {
	int x = (int)sqrt(n);
	return x * x == n;
}

bool isSymmetry(int n) {
	if (n < 0) {
		n = -n;
	}
	int rev = reverseN(n);
	return rev == n;
}

void listedPrimeNumbers(int a, int b) {
	cout << "Cac so nguyen to trong doan [" << a << ", " << b << "]:\n";
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void listedSquareNumbers(int a, int b) {
	cout << "Cac so chinh phuong trong doan [" << a << ", " << b << "]:\n";
	for (int i = a; i <= b; i++) {
		if (isSquare(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void listedSymmetryNumbers(int a, int b) {
	cout << "Cac so thuan nghich trong doan [" << a << ", " << b << "]:\n";
	for (int i = a; i <= b; i++) {
		if (isSymmetry(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void listedNumberSumDigitsIsPrime(int a, int b) {
	cout << "Cac so co tong chu so la so nguyen to "
		<< "trong doan[" << a << ", " << b << "]:\n";
	for (int i = a; i <= b; i++) {
		if (isSumDigitsPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {
	int a = getIntegerNumber();
	int b = getIntegerNumber();
	listedPrimeNumbers(a, b);
	listedSquareNumbers(a, b);
	listedSymmetryNumbers(a, b);
	listedNumberSumDigitsIsPrime(a, b);

	return 0;
}