/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
 */

#include <iostream>

using namespace std;

const size_t SIZE = 100;

bool getInputFromKeyboard(int arr[], int& n);
void listedArrayElements(int arr[], int n);

int main() {
	int arr[SIZE];
	int n;
	bool shouldContinue = getInputFromKeyboard(arr, n);
	if (shouldContinue) {
		listedArrayElements(arr, n);
	}
	return 0;
}

bool isExisted(int arr[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			return true;
		}
	}
	return false;
}

int countX(int arr[], int n, int x) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			count++;
		}
	}
	return count;
}

void listedArrayElements(int arr[], int n) {
	bool isExisted(int[], int, int);
	int countX(int[], int, int);
	for (int i = 0; i < n; i++) {
		if (!isExisted(arr, i, arr[i])) {
			cout << arr[i] << " " << countX(arr, n, arr[i]) << endl;
		}
	}
	cout << endl;
}

bool getInputFromKeyboard(int arr[], int& n) {
	cout << "Nhap so phan tu mang > 0: ";
	cin >> n;
	if (n < 1) {
		cout << "N INVALID" << endl;
		return false;
	}
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	return true;
}