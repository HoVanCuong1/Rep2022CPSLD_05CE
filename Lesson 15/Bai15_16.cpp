/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include<iostream>
using namespace std;

int main() {
	unsigned long long f0 = 0;
	unsigned long long f1 = 1;
	unsigned long long fn = 0;
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	if (n < 0 || n > 93) { // n không hợp lệ
		cout << "INVALID" << endl;
	}
	else {
		
		for (int i = 0; i <= n; i++) // nếu n >= 2, tính fn theo công thức fn = fn-1 + fn-2
		{
			if (i < 2) { // i < 2, fi chính là i
				fn = i;
			}
			else {
				fn = f0 + f1;
				f0 = f1;
				f1 = fn;
			}
			cout << fn << " ";
		}
	}

	return 0;
}