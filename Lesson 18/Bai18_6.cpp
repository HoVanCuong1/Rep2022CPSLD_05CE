#include <iostream>

using namespace::std;

int main() {
    int m, n;
    cout << "Nhap vao m, n > 0: ";
    cin >> m >> n;
    // hien thi ket qua
    if(m <= 0 || n <= 0) {
        cout << "INVALID" << endl;
    } else {
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if(i == 1 || i == m || j == 1 || j == n) {
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
