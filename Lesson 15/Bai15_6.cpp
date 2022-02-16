/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so n thoa: 0 <= n <= 33: ";
    cin >> n;
    if(n < 0 || n > 33) {
        cout << "INVALID" << endl;
    } else { // n hop le
        unsigned long long f = 1;
        unsigned long long sum = 0;
        for (int i = 0; i <= n; i++) {
            if(i < 2) {
                f = 1;
            } else {
                f *= i;
            }
            sum += f; // s += i!
        }
        cout << sum << endl;
    }
    cout << endl;
}
// 1 + 1 + 2 + 6 + 24 = 34
