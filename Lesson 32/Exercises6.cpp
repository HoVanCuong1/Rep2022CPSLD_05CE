/**
 * @author Branium Academy
 * @see braniumacademy.net
 * @version 2022.03.25
 */

#include <iostream>
#include <string>
using namespace std;
#define SIZE 255

// khai báo nguyên mẫu hàm
int countOccurrentOf(const char arr[], char x);
void firstOccurrentOf(const char arr[], int& min, int& max);

int main() {
	int min, max; 
	char arr[SIZE];
	cin.getline(arr, SIZE);
	firstOccurrentOf(arr, min, max);
	if (min == max) {
		cout << min << endl;
	}
	else {
		cout << max << " " << min << endl;
	}
}
// hàm đếm số lần xuất hiện của kí tự x
int countOccurrentOf(const char arr[], char x) {
	int length = strlen(arr);
	int countX = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == x) {
			countX++;
		}
	}
	return countX;
}
// xét số lần xuất hiện của kí tự x đầu tiên trong loạt kí tự x
void firstOccurrentOf(const char arr[], int& min, int& max) {
	bool isExisted(const char[], int, char);
	int n = strlen(arr);
	min = max = countOccurrentOf(arr, arr[0]);
	for (int i = 0; i < n; i++)
	{
		if (!isExisted(arr, i, arr[i])) {
			int occurrent = countOccurrentOf(arr, arr[i]);
			if (min > occurrent) {
				min = occurrent;
			}
			if (max < occurrent) {
				max = occurrent;
			}
			cout << "'" << arr[i] << "' " << occurrent << endl;
		}
	}
}

// hàm kiểm tra x đã xuất hiện trước vị pos trong mảng arr chưa
bool isExisted(const char arr[], int pos, char x) {
	for (int i = 0; i < pos; i++)
	{
		if (arr[i] == x) {
			return true;
		}
	}
	return false;
}