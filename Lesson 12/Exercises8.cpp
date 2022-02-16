/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap vao ba so can kiem tra: ";
    cin >> a >> b >> c;
    
    (a + b > c && b + c > a && c + a > b) ? cout << "Co" : cout << "Khong";
    cout << endl << endl;
}
