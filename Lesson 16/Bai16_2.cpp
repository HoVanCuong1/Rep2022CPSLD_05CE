/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace::std;

int main() {
    int n;
    cout << "Nhap n > 0: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        int sum = 0;
        int digit;
        while(n > 0) {
            digit = n % 10;
            n /= 10;
            sum += digit * digit;
        }
        cout << sum << endl;
    }
}
