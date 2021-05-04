/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.04
 *
 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
#define M 100
#define N 100

void drawTriangle(string triangle[][N], int& height);
void showTriangle(const string triangle[][N], int height);

int main()
{
	int height;
	string triangle[M][N];
	drawTriangle(triangle, height);
	showTriangle(triangle, height);
	return 0;
}

void drawTriangle(string triangle[][N], int& height) {
	cin >> height;

	if (height > 0) {
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= 2 * height - 1; j++) {
				if (j >= (height - i + 1) && j <= (height + i - 1)) {
					triangle[i - 1][j - 1] = to_string((i - abs(height - j)));
				}
				else {
					triangle[i - 1][j - 1] = " ";
				}
			}
		}
	}
	else {
		cout << "ERROR" << endl;
	}
}

void showTriangle(const string triangle[][N], int height) {
	int bound = 2 * height - 1;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < bound; j++)
		{
			cout << left << setw(5) << triangle[i][j];
		}
		cout << endl;
	}
}