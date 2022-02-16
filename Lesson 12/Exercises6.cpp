/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhap he so a, b: ";
    cin >> a >> b;
    // xet va hien thi ket qua
    (a == 0 && b == 0) ? cout << "Phuong trinh co vo so nghiem"
    : (a == 0 && b != 0) ? cout << "Phuong trinh khong co nghiem"
    : cout << "Nghiem x = " << -b / a;
    cout << endl << endl;
}
