#include <iostream>

using namespace std;

/**
 *@author Branium Academy
 *@website braniumacademy.net
 */

int getAnIntegerNumber() {
    int n;
    while (true) {
        cout << "Nhap vao mot so nguyen > 0: ";
        cin >> n;
        if(n > 0) {
            break;
        }
    }
    return n;
}

int gcd(int a, int b) {
    while (a != b) {
        (a > b) ? a -= b : b -= a;
    }
    return a;
}

int lcm(int a, int b, int gcd) {
    return a * b / gcd;
}

void showResult(int a, int b, int gcd, int lcm) {
    cout << "UCLN cua " << a << " & " << b << " = " << gcd << endl;
    cout << "BCNN cua " << a << " & " << b << " = " << lcm << endl;
}

int main() {
    int a, b;
    a = getAnIntegerNumber();
    b = getAnIntegerNumber();
    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b, gcdResult);
    showResult(a, b, gcdResult, lcmResult);
    
    return 0;
}
