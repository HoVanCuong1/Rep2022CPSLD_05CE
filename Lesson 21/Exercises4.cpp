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

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	int bound = sqrt(n);
	for (int i = 2; i <= bound; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int sumDigits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int reverseN(int n) {
	int rev = 0;
	while (n > 0) {
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}

bool isSymmetry(int n) {
	int rev = reverseN(n);
	return rev == n;
}

int main() {
	int n = getInputNumber(); // nhap vao so nguyen duong n
	// kiem tra n co phai so nguyen to
	cout << (isPrime(n) ? "La " : "Khong la ") << "so nguyen to.\n";
	// kiem tra so dep
	cout << (isSymmetry(n) ? "La " : "Khong la ") << "so thuan nghich.\n";
	// kiem tra so dao cua n co nguyen to
	int reverseOfN = reverseN(n);
	cout << "Dao cua n " 
		<< (isPrime(reverseOfN) ? "la " : "khong la ") << "so nguyen to.\n";
	// kiem tra tong chu so co nguyen to
	int sumAllDigits = sumDigits(n);
	cout << "Tong cac chu so cua n " 
		<< (isPrime(sumAllDigits) ? "la " : "khong la ") << "so nguyen to.\n";

	return 0;
}