/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.05
 */

#include <iostream>

using namespace std;
#define SIZE 100

void getArrayElements(int* arr, int& n, int& x);
void showArrayElements(const int* arr, int n);
int firstOccurentOf(const int* arr, int n, int x);
int lastOccurentOf(const int* arr, int n, int x);

int main()
{
    int n;
    int x;
    int arr[SIZE];
    getArrayElements(arr, n, x);
    if (n > 0) {
        showArrayElements(arr, n);
        auto first = firstOccurentOf(arr, n, x);
        auto last = lastOccurentOf(arr, n, x);
        cout << first << " " << last << endl;
    }

    return 0;
}

int firstOccurentOf(const int* arr, int n, int x) {
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == x) {
            return i;
        }
    }
    return -1;
}

int lastOccurentOf(const int* arr, int n, int x) {
    for (int i = n - 1; i >= 0; i--)
    {
        if (*(arr + i) == x) {
            return i;
        }
    }
    return -1;
}

void getArrayElements(int* arr, int& n, int& x) {
    cin >> n;
    if (n < 0 || n > 100) {
        cout << "N INVALID" << endl;
    }
    else {
        for (int i = 0; i < n; i++)
        {
            cin >> *(arr + i);
        }
        cin >> x;
    }
}

void showArrayElements(const int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}