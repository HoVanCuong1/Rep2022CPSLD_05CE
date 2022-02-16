/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Nhap so tu nhien n > 0 va k < n: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        cin >> k;
        if(k < 0 || k >= n) {
            cout << "INVALID" << endl;
        } else {
            for (int i = k; i <= n; i++) {
                if(i % 2 != 0) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    cout << endl;
}
