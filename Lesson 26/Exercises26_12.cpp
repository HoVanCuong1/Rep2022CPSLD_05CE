/**
 *@author Branium Academy
 *@version 2021.02
 *@website braniumacademy.net
 */

#include <iostream>

using namespace std;

void printReversedNumber(long long n);

int main() {
    long long n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if(n < 0) {
        n = -n;
    }
    printReversedNumber(n);
    cout << endl;
    
    return 0;
}

void printReversedNumber(long long n) {
    if(n < 10) {
        cout << n;
        return;
    } else {
        cout << n % 10;
        printReversedNumber(n / 10);
    }
}
