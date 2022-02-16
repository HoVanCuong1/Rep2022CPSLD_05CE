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
        int i = 2; // số nguyên tố nhỏ nhất
        while(n != 1) {
            if(n % i == 0) {
                cout << i << ((i != n) ? "x" : "");
                n /= i;
            } else {
                i++;
            }
        }
        cout << endl;
    }
}
