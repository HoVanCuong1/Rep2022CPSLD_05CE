/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.04
 *
 */
#include <iostream>

using namespace std;
#define M 6
#define N 7

void drawTriangle(string heat[][N]);
void showTriangle(const string heat[][N]);

int main()
{
	string heat[M][N];
	drawTriangle(heat);
	showTriangle(heat);
	return 0;
}

void drawTriangle(string heat[][N]) {
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= N; j++) {
			if (((i != 2 && i != 3) && (j == 1 || j == 7))
				|| (i == 1 && j == 4)
				|| (i >= 5 && (j == 2 || j == 6))
				|| (i == 6 && (j == 3 || j == 5))) {
				heat[i - 1][j - 1] = "   ";
			}
			else {
				heat[i - 1][j - 1] = " * ";
			}
		}
	}
}

void showTriangle(const string heat[][N]) {
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << heat[i][j];
		}
		cout << endl;
	}
}