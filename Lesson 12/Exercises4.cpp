/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap ba so nguyen: ";
    cin >> a >> b >> c;
    int max = a;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;
    (a == b && b == c) ? cout << "Khong co gia tri max"
    : cout << "Gia tri max = " << max;
    cout << endl << endl;
}
