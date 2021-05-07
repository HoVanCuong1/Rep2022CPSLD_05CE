#include <iostream>
#include <functional>

using namespace std;
#define SIZE 100

void getArrayElements(int* const arr, int& n) {
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            cin >> *(arr + i);
        }
    }
    else {
        cout << "Nhap so phan tu mang: " << endl;
    }
}

void commonElements(const int* const arr1, const int m, const int* const arr2, const int n) {
    bool isExisted(const int* const, const int, const int);
    for (int i = 0; i < m; i++) {
        if (!isExisted(arr1, i, *(arr1 + i)) && isExisted(arr2, n, *(arr1 + i))) {
            cout << *(arr1 + i) << " ";
        }
    }
    cout << endl;
}

void existInFirstArrayOnly(const int* const arr1, const int m, const int* const arr2, const int n) {
    bool isExisted(const int* const, const int, const int);
    for (int i = 0; i < m; i++) {
        if (!isExisted(arr1, i, *(arr1 + i)) && !isExisted(arr2, n, *(arr1 + i))) {
            cout << *(arr1 + i) << " ";
        }
    }
    cout << endl;
}

bool isExisted(const int* const arr, const int size, const int x) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == x) {
            return true;
        }
    }
    return false;
}

void showArrayElements(const int* const arr1,
    const int* const arr2, const int m, const int n,
    function<void(const int* const, const int, const int* const, const int)> showResult) {
    showResult(arr1, m, arr2, n);
}

int main() {
    int arr1[SIZE];
    int arr2[SIZE];
    int m, n;
    getArrayElements(arr1, m);
    getArrayElements(arr2, n);
    cout << "Cac phan tu chung: " << endl;
    showArrayElements(arr1, arr2, m, n, commonElements);

    cout << "Cac phan tu chi xuat hien trong arr1: " << endl;
    showArrayElements(arr1, arr2, m, n, existInFirstArrayOnly);

    return 0;
}
