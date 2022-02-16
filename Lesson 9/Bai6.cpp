/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>

using namespace std;

int main() {
    float a, b;
    cout << "Nhap vao he so a, b: ";
    cin >> a >> b;
    // giai phuong trinh
    if(a == 0) {
        if(b == 0) {
            cout << "Phuong trinh vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        float x = -b / a;
        cout << "Nghiem x = " << x << endl;
    }
    cout <<endl;
}
