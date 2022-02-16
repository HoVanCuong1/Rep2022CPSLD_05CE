/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */  

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap vao ba so nguyen: ";
    cin >> a >> b >> c;
    // tim min
    int min = a;
    min = (min > b) ? b : min;
    min = (min > c) ? c : min;
    // ket luan
    (a == b && b == c) ? cout << "Khong co gia tri min"
    : cout << "Gia tri min = " << min;
    cout << endl << endl;
}
