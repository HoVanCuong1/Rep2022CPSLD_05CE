/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.05
 */

#include <iostream>
#include <string>

using namespace std;
#define SIZE 100

void getArrayElements(string* names, int& n, string& x);
void showArrayElements(const string* names, int n);
void findOccurent(const string* names, int n);
int findX(const string* names, int n, string x);
int countX(const string* names, int n, string x);

int main()
{
	int n;
	string x;
	string names[SIZE];
	getArrayElements(names, n, x);
	if (n > 0) {
		showArrayElements(names, n);
		int xIndex = findX(names, n, x);
		cout << ((xIndex == -1) ? "NOT " : "") << "FOUND" << endl;
		findOccurent(names, n);
	}

	return 0;
}

int findX(const string* names, int n, string x) {
	for (int i = 0; i < n; i++)
	{
		if (names[i] == x) {
			return i;
		}
	}
	return -1;
}

int countX(const string* names, int n, string x) {
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (names[i] == x) {
			count++;
		}
	}
	return count;
}

void findOccurent(const string* names, int n) {
	bool isExisted(const string*, int, string);
	void showMaxOccurentName(const string*, int, int);
	int maxOcc = 0;
	for (int i = 0; i < n; i++)
	{
		if (!isExisted(names, i, *(names + i))) {
			int occurent = countX(names, n, *(names + i));
			if (occurent > maxOcc) {
				maxOcc = occurent;
			}
		}
	}
	showMaxOccurentName(names, n, maxOcc);
}

void showMaxOccurentName(const string* names, int n, int maxOcc) {
	for (int i = 0; i < n; i++)
	{
		if (countX(names, n, *(names + i)) == maxOcc) {
			cout << *(names + i) << " " << maxOcc << endl;
			break;
		}
	}
}

bool isExisted(const string* names, int n, string x) {
	for (int i = 0; i < n; i++)
	{
		if (names[i] == x) {
			return true;
		}
	}
	return false;
}

void getArrayElements(string* names, int& n, string& x) {
	cin >> n;
	if (n < 0 || n > 100) {
		cout << "N INVALID" << endl;
	}
	else {
		for (int i = 0; i < n; i++)
		{
			cin >> *(names + i);
		}
		cin >> x;
	}
}

void showArrayElements(const string* names, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << *(names + i) << " ";
	}
	cout << endl;
}