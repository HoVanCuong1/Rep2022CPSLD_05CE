/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
# include "Bai22_5.h"
using namespace std;

int getAnIntegerNumber() {
    int m;
    cout << "Nhap vao mot so nguyen > 0: ";
    cin >> m;
    return m;
}

bool isPrimeNumber(int n) {
    if(n < 2) {
        return false;
    }
    int upperBound = sqrt(n);
    for (int i = 2; i <= upperBound; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

void listedAllPrimeNumbers(int a, int b) {
    cout << "Cac so nguyen to trong doan [" << a << ", " << b << "]: " << endl;
    for (int i = a; i <= b; i++) {
        if(isPrimeNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl << endl;
}

void listedAllSquareNumbers(int a, int b) {
    cout << "Cac so chinh phuong trong doan [" << a << ", " << b << "]: " << endl;
    for (int i = a; i <= b; i++) {
        if(i >= 0) {
            int sqr = sqrt(i);
            if(sqr * sqr == i) {
                cout << i << " ";
            }
        }
    }
    cout << endl << endl;
}

int getReversedNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isReversedNumber(int n) {
    int rev = getReversedNumber(n);
    return rev == n;
}

void listedAllReversedNumbers(int a, int b) {
    cout << "Cac so thuan nghich trong doan [" << a << ", " << b << "]: " << endl;
    for (int i = a; i <= b; i++) {
        if(i >= 0) {
            if(isReversedNumber(i)) {
                cout << i << " ";
            }
        }
    }
    cout << endl << endl;
}

int getSumAllDigitsOfNumber(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isSumAllDigitsOfNPrime(int n) {
    int sum = getSumAllDigitsOfNumber(n);
    return isPrimeNumber(sum);
}

void listedAllNumbersHaveSumDigitsIsPrimeNumber(int a, int b) {
    cout << "Cac so co tong nguyen to trong doan [" << a << ", " << b << "]: " << endl;
    for (int i = a; i <= b; i++) {
        if(i >= 0) {
            if(isSumAllDigitsOfNPrime(i)) {
                cout << i << " ";
            }
        }
    }
    cout << endl << endl;
}
