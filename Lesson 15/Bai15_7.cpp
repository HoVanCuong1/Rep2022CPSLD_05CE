/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace::std;

int main() {
    int n, k;
    cout << "Nhap so nguyen duong n, k!= 0: ";
    cin >> n >> k;
    if(n <= 0 || k == 0) {
        cout << "INVALID" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if(i % k == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
