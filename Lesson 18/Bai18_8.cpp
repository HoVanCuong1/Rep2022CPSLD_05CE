/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

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
            for (int j = 1; j <= 2 * height - 1; j++) {
                if(j >= (height - i + 1) && j <= (height + i - 1)) {
                    cout << " * ";
                } else {
                    cout << "   ";
                }
            }
            cout << endl;
        }
    }
    cout << endl;
}
