/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        m = n;
        int reversedN = 0;
        while (m > 0) {
            reversedN = reversedN * 10 + m % 10;
            m /= 10;
        }
        if(reversedN == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
