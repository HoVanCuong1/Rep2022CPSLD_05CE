/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        int reversedN = 0;
        for (int i = n; i > 0; i /= 10) {
            reversedN = reversedN * 10 + i % 10;
        }
        // i         = 0
        // reversedN = 4321
        if(reversedN == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
