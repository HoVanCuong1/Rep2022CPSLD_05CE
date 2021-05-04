#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Nhap so nguyen duong a, b: ";
    cin >> a >> b;
    if(a <= 0 || b <= 0) {
        cout << "INVALID" << endl;
    } else {
        int gcd = 1; // UCLN
        while(a != b) {
            a > b ? a -= b : b -= a;
        }
        gcd = a;
        if(gcd == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
