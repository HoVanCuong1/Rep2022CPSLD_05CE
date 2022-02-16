/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "Nhap vao so tu nhien n > 0: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        double sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += 1.0 / (i * i);
        }
        cout << sum << endl;
    }
    cout << endl;
}
