/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.04
 *
 */
#include <iostream>

using namespace std;

// khai báo nguyên mẫu:
void getInput(int*, int*);
void findGcd(int, int, int*);
void findLcm(int, int, int, int*);
void showResult(int, int);

int main() {
	int a;
	int b;
	int gcd, lcm;
	getInput(&a, &b);
	findGcd(a, b, &gcd);
	findLcm(a, b, gcd, &lcm);
	showResult(gcd, lcm);

	return 0;
}

void getInput(int* a, int* b) {
	do {
		cout << "Nhap vao hai so nguyen duong: ";
		cin >> *a >> *b;
	} while (*a <= 0 || *b <= 0);
}

void findGcd(int a, int b, int* gcd) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	*gcd = a;
}

void findLcm(int a, int b, int gcd, int* lcm) {
	int maxLcm = a * b;
	*lcm = maxLcm / gcd;
}

void showResult(int gcd, int lcm) {
	cout << "UCLN = " << gcd << endl;
	cout << "BCNN = " << lcm << endl;
}