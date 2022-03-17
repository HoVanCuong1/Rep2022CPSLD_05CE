/**
 * @author Branium Academy
 * @version 2022.03.17
 * @see https://braniumacademy.net
 */

#include <iostream>
#include <cmath>
using namespace std;

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

void findNextPrime(int n) {
	cout << "So nguyen to ke tiep cua " << n << ": ";
	while (true) {
		n++;
		if (isPrime(n)) {
			cout << n << endl;
			break;
		}
	}
}

void findPreviousPrime(int n) {
	cout << "So nguyen to lien truoc cua " << n << ": ";
	if (n <= 2) {
		cout << "NOT AVAILABLE\n";
		return;
	}
	else {
		while (true) {
			n--;
			if (isPrime(n)) {
				cout << n << endl;
				return;
			}
		}
	}
}

void factorize(int n) {
	if (n <= 1) {
		cout << "Khong the phan tich ra thua so nguyen to.\n";
	}
	else {
		cout << n << " = ";
		int k = 2;
		while (n > 1) {
			if (n % k == 0) {
				cout << k << (n != k ? "x" : "");
				n /= k;
			}
			else {
				k++;
			}
		}
		cout << endl;
	}
}

void factorizeV2(int n) {
	if (n <= 1) {
		cout << "Khong the phan tich ra thua so nguyen to.\n";
	}
	else {
		cout << n << " = ";
		int k = 2;
		int count = 0;
		while (n > 1) {
			if (n % k == 0) {
				if (count == 0) {
					cout << k;
				}
				count++;
				n /= k;
			}
			else {
				k++;
				if (count > 1) {
					cout << "^" << count;
				} 
				if (count >= 1) {
					count = 0;
					cout << "x";
				}
			}
		}
		if (count > 1) {
			cout << "^" << count << endl;
		}
		else {
			cout << endl;
		}
	}
}

void listedPrimeNumbers() {
	cout << "Cac so nguyen to co 5 chu so: \n";
	int count = 0;
	for (int i = 10000; i <= 99999; i++) {
		if (isPrime(i)) {
			cout << i << " ";
			count++;
			if (count % 15 == 0) {
				cout << endl;
			}
		}
	}
}

int main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	findNextPrime(n);
	findPreviousPrime(n);
	factorize(n);
	factorizeV2(n);
	listedPrimeNumbers();
	return 0;
}