/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        int sumOfDigits = 0;
        for (int i = n; i > 0; i /= 10) {
            sumOfDigits += i % 10;
        }
        cout << sumOfDigits << endl;
    }
}
