/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    (n == 0) ? cout << n << " khong am khong duong"
             : (n > 0) ? cout << n << " la so duong"
             : cout << n << " la so am";
    cout << endl << endl;
}
