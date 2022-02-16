/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;
 
// Khai báo nguyên mẫu hàm
int getAnIntegerNumber(); // nhập vào một số nguyên
int gcd(int a, int b); // tìm ước chung lớn nhất
int lcm(int a, int b, int gcd); // tìm bội chung nhỏ nhất
void showResult(int a, int b, int gcd, int lcm); // hiển thị kết quả

int main() {
    int a, b;
    a = getAnIntegerNumber();
    b = getAnIntegerNumber();
    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b, gcdResult);
    showResult(a, b, gcdResult, lcmResult);
    
    return 0;
}

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
