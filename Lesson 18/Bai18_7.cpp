#include <iostream>

using namespace::std;

int main() {
    int height;
    cout << "Nhap chieu cao h: ";
    cin >> height;
    // hien thi ket qua
    if(height <= 0) {
        cout << "INVALID" << endl;
    } else {
        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " * ";
            }
            cout << endl;
        }
    }
    cout << endl;
}
