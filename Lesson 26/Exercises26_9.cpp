/**
 *@author Branium Academy
 *@version 2021.02
 *@website braniumacademy.net
 */

#include <iostream>

using namespace std;

unsigned long long convertToBinary(int n) {
    if(n == 0) {
        return 0;
    } else {
        return (n % 2 + 10 * convertToBinary(n / 2));
    }
}

int main() {
    const int MAX = 262143;
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if(n >= 0 && n <= MAX) {
        cout << convertToBinary(n) << endl;
    } else {
        cout << "INVALID" << endl;
    }
    
    return 0;
}
