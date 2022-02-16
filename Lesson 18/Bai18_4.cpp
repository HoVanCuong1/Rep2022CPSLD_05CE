/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

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
                cout << j << " ";
            }
            cout << endl;
        }
    }
}
