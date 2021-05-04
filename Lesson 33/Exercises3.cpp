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

void getMatrixElements(int matrix[][N], int& m, int& n);
void showMatrixElements(int matrix[][N], int m, int n);
void add(int a[][N], int b[][N], int c[][N], int m, int n);

int main()
{
	int A[M][N];
	int B[M][N];
	int C[M][N];
	int m, n, l, k;
	cin >> m >> n >> l >> k;
	getMatrixElements(A, m, n);
	getMatrixElements(B, l, k);
	if (m > 0 && n > 0 && l > 0 && k > 0 && m == l && n == k) {
		add(A, B, C, m, n);
		showMatrixElements(C, n, m);
	}
	else {
		cout << "INVALID ACTION" << endl;
	}
	return 0;
}

void add(int a[][N], int b[][N], int c[][N], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void getMatrixElements(int matrix[][N], int& m, int& n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void showMatrixElements(int matrix[][N], int m, int n) {
	cout << m << " " << n << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}