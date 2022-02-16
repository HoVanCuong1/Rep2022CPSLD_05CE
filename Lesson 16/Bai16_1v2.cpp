/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

// cách 2: sử dụng thuật toán Euclid, chia lấy dư số lớn hơn cho số nhỏ hơn đến khi nào phần dư
// bằng 0 thì dừng. Lúc đó ta có UCLN là a với giả định a > b.
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
        if(a < b) { // nếu a < b tráo đổi a cho b
            int tmp = a;
            a = b;
            b = tmp;
        }
        int lcm = a * b;
        while(b != 0) {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        // greatest common divisor: ước chung lớn nhất
        int gcd = a;
        lcm /= gcd;
        cout << gcd << " " << lcm << endl;
    }
}
