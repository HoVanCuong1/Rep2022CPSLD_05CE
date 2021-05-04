/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_3.hpp"

using namespace std;

void input(unsigned int &n) {
    int x = 0;
    while(x <= 0) {
        cout << "Nhap so nguyen duong n: ";
        cin >> x;
        if(x > 0) {
            break;
        }
    }
    n = x;
}

void sumAllDigits(unsigned int n, int &sum) {
    sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
}

void productAllDigits(unsigned int n, int &product) {
    product = 1;
    while(n > 0) {
        product *= n % 10;
        n /= 10;
    }
}

void firstDigitOfN(unsigned int n, int &first) {
    while(n > 10) {
        n /= 10;
    }
    first = n;
}

void showResult(int n) {
    cout << n << endl;
}
