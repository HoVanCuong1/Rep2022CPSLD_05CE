/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.04
 */

#include <iostream>
#include <string>

using namespace std;
#define SIZE 255

int countOccurentOf(const char arr[], char x);
void firstOccurentOf(const char arr[], int& min, int& max);

int main()
{
	int min, max;
	char arr[SIZE];
	cin.getline(arr, SIZE);
	firstOccurentOf(arr, min, max);
	if (max == min) {
		cout << max << endl;
	}
	else {
		cout << max << " " << min << endl;
	}

	return 0;
}

int countOccurentOf(const char arr[], char x) {
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

void firstOccurentOf(const char arr[], int& min, int& max) {
	bool isExisted(const char[], int, char);
	int n = strlen(arr);
	// khoi tao
	min = max = countOccurentOf(arr, arr[0]);
	for (int i = 0; i < n; i++)
	{
		if (!isExisted(arr, i, arr[i])) {
			int occurent = countOccurentOf(arr, arr[i]);
			if (occurent > max) {
				max = occurent;
			}
			if (min > occurent) {
				min = occurent;
			}
			cout << "'" << arr[i] << "' " << occurent << endl;
		}
	}
}

bool isExisted(const char arr[], int n, char x) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x) {
			return true;
		}
	}
	return false;
}