/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.04
 *
 */
#include <iostream>

using namespace std;
#define M 100
#define N 100

void drawRectangle(string rect[][N], int& m, int& n);
void showRectangle(string rect[][N], int m, int n);

int main()
{
	int m, n;
	string rect[M][N];
	drawRectangle(rect, m, n);
	cout << endl;
	showRectangle(rect, m, n);
	return 0;
}

void drawRectangle(string rect[][N], int& m, int& n) {
	cin >> m >> n;
	if (m > 0 && n > 0) {
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
					rect[i][j] = " * ";
				}
				else {
					rect[i][j] = "   ";
				}
			}
		}
	}
	else {
		cout << "ERROR" << endl;
	}
}

void showRectangle(string rect[][N], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << rect[i][j];
		}
		cout << endl;
	}
}