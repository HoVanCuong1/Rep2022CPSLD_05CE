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
        int exp = 0;
        int i = 2; // số nguyên tố nhỏ nhất
        while(n != 1) {
            if(n % i == 0) {
                exp++;
                n /= i;
            } else {
                if(exp > 0) {
                    cout << i;
                    (exp > 1) ? cout << "^" << exp : cout << "";
                    cout << ((n > 1) ? "x" : "");
                }
                i++;
                exp = 0;
            }
        }
        if(exp >= 1) {
            cout << i;
            (exp > 1) ? cout << "^" << exp : cout << "";
        }
        cout << endl;
    }
}
