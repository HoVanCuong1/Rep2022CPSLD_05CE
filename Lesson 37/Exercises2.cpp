/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.05
 */

#include <iostream>

using namespace std;
#define SIZE 100

void getArrayElements(int* arr, int& n, int& x, int& y);
void showArrayElements(const int* arr, int n);
int findXY(const int* arr, int n, int x, int y);

int main()
{
    int n;
    int x, y;
    int arr[SIZE];
    getArrayElements(arr, n, x, y);
    if (n > 0) {
        showArrayElements(arr, n);
        int result = findXY(arr, n, x, y);
        cout << result << endl;
    }

    return 0;
}

int findXY(const int* arr, int n, int x, int y) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) >= x && *(arr + i) <= y) {
            count++;
        }
    }
    return count;
}

void getArrayElements(int* arr, int& n, int& x, int& y) {
    cin >> n;
    if (n < 0 || n > 100) {
        cout << "N INVALID" << endl;
    }
    else {
        for (int i = 0; i < n; i++)
        {
            cin >> *(arr + i);
        }
        cin >> x >> y;
    }
}

void showArrayElements(const int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}