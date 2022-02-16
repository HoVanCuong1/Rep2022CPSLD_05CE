/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */  

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap vao hai gia tri a, b nguyen: ";
    cin >> a >> b;
    (a == b) ? cout << "a bang b" : (a < b)
             ? cout << "a khac b " << (b - a) << " don vi"
    : cout << "a khac b " << (a - b) << " don vi";
    cout << endl << endl;
}
