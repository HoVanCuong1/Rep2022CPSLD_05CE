/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap vao ba so thuc: ";
    cin >> a >> b >> c;
    // hien thi ket luan
    (a + b > c && b + c > a && c + a > b)
    ? (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    ? cout << "CO" : cout << "KHONG" : cout << "KHONG";
    cout << endl;
}
