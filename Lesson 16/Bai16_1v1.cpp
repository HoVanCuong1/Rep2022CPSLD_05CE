/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

// cách 1: trừ số to cho số nhỏ đến khi nào hai số bằng nhau
// ta có được ước chung lớn nhất. BCNN bằng tích hai số đầu chia UCLN

#include <iostream>
using namespace::std;

int main() {
    int a, b;
    cout << "Nhap hai so duong a, b: ";
    cin >> a >> b;
    if(a <= 0 || b <= 0) {
        cout << "INVALID" << endl;
    } else {
        // lead common multiply: bội chung nhỏ nhất
        int lcm = a * b;
        while(a != b) {
            a > b ? a = a - b : b = b - a;
        }
        // greatest common divisor: ước chung lớn nhất
        int gcd = a;
        lcm /= gcd;
        cout << gcd << " " << lcm << endl;
    }
}
