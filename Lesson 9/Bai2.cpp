/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */  

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap vao mot so nguyen n: ";
    cin >> n;
    // kiem tra va in ra ket qua
    if(n > 0) {
        cout << n << " la so duong" << endl;
    } else if(n == 0) {
        cout << n << " khong am khong duong" << endl;
    } else {
        cout << n << " la so am" << endl;
    }
}
