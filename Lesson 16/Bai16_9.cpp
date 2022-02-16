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
        double sum = 0;
        int i = 1;
        while (i <= n) {
            sum += 1.0 / (i * i * i);
            i++;
        }
        cout << sum << endl;
    }
}
