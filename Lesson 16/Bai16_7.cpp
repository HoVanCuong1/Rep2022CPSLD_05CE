/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n trong doan[0, 40]: ";
    cin >> n;
    if(n < 0 || n > 40) {
        cout << "INVALID" << endl;
    } else {
        unsigned long long factorial = 1;
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        cout << factorial << endl;
    }
}
