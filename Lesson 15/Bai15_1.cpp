/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so tu nhien n: ";
    cin >> n;
    if(n < 0) {
        cout << "INVALID" << endl;
    } else {
        for (int i = 0; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }
}
