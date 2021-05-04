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

void drawTriangle(string triangle[][N], int& height);
void showTriangle(string triangle[][N], int height);

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
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				triangle[i][j] = " * ";
			}
		}
	}
	else {
		cout << "ERROR" << endl;
	}
}

void showTriangle(string triangle[][N], int height) {
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << triangle[i][j];
		}
		cout << endl;
	}
}