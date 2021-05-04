/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.04
 *
 */
#include <iostream>

using namespace std;
#define M 9
#define N 13

void drawPlusSign(string plusSign[][N]);
void showPlusSign(string plusSign[][N]);

int main()
{
	string plusSign[M][N];
	drawPlusSign(plusSign);
	cout << endl;
	showPlusSign(plusSign);
	return 0;
}

void drawPlusSign(string plusSign[][N]) {
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((i == 0 || i == 8) && (j >= 4 && j <= 8)
				|| (i == 1 || i == 2 || i == 6 || i == 7)
					&& (j == 4 || j == 8) 
				|| ((i == 3 || i == 5) && (j < 5 || j > 7)) 
				|| (i == 4 && (j == 0 || j == 12))) {
				plusSign[i][j] = " * ";
			}
			else {
				plusSign[i][j] = "   ";
			}
		}
	}
}

void showPlusSign(string plusSign[][N]) {
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << plusSign[i][j];
		}
		cout << endl << endl;
	}
}