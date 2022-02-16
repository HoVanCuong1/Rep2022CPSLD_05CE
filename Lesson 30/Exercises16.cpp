/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
 */

#include <iostream>
#include <cmath>

using namespace std;

const size_t SIZE = 100;

bool getInputFromKeyboard(int p[], int& n);
void showPolynomial(int arr[], int n);
double px(int arr[], int n, double x);
void derivative(int arr[], int der[], int n);

int main() {
	int arr[SIZE];
	int n;
	bool shouldContinue = getInputFromKeyboard(arr, n);
	if (shouldContinue) {
		cout << "P(x): " << endl;
		showPolynomial(arr, n);
		cout << "Nhap x: ";
		double x;
		cin >> x;
		cout << "P(x) = " << px(arr, n, x) << endl;
		cout << "Dao ham cua P(x): " << endl;
		int der[SIZE];
		derivative(arr, der, n);
		showPolynomial(der, n - 1);
		cout << "P(x) = " << px(der, n - 1, x) << endl;
	}
	return 0;
}

void derivative(int arr[], int der[], int n) {
	for (int i = 0; i < n; i++) {
		der[i] = arr[i + 1] * (i + 1);
	}
}

double px(int arr[], int n, double x) {
	double result = 0;
	for (int i = 0; i <= n; i++) {
		result += arr[i] * pow(x, i);
	}
	return result;
}

void showPolynomial(int arr[], int n) {
	for (int i = n; i >= 0; i--) {
		if (arr[i] != 0 && arr[i] != 1) {
			cout << arr[i];
		}
		else if (i == 0 && arr[i] == 1) {
			cout << '1';
		}
		if (arr[i] != 0) {
			if (i > 0) {
				cout << "x";
			}
			if (i > 1) {
				cout << "^" << i;
			}
		}
		if (i - 1 >= 0 && arr[i - 1] > 0) {
			cout << " + ";
		}
	}
	cout << endl;
}

bool getInputFromKeyboard(int arr[], int& n) {
	cout << "Nhap bac cua da thuc > 0: ";
	cin >> n;
	if (n < 1) {
		cout << "N INVALID" << endl;
		return false;
	}
	for (int i = n; i >= 0; i--) {
		cout << "He so cua x^" << i << ": ";
		cin >> arr[i];
	}
	return true;
}