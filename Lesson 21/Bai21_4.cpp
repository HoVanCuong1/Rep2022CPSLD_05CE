#include <iostream>

using namespace std;

/**
 *@author Branium Academy
 *@website braniumacademy.net
 */

int getAnIntegerNumber() {
    int n;
    while (true) {
        cout << "Nhap vao mot so nguyen > 0: ";
        cin >> n;
        if(n > 0) {
            break;
        }
    }
    return n;
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

bool isReversedNumberPrime(int n) {
    int rev = getReversedNumber(n);
    return isPrimeNumber(rev);
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

int main() {
    int number = getAnIntegerNumber();
    bool checkedPrimeNumber = isPrimeNumber(number);
    bool checkedReversedNumber = isReversedNumber(number);
    bool checkedReversedNumberPrime = isReversedNumberPrime(number);
    bool checkedSumAllDigitsOfNumberIsPrime = isSumAllDigitsOfNPrime(number);
    
    cout << (checkedPrimeNumber ? "La so nguyen to"
             : "Khong nguyen to") << endl;
    cout << (checkedReversedNumber ? "La so thuan nghich"
             : "Khong thuan nghich") << endl;
    cout << (checkedReversedNumberPrime ? "So dao cua n la so nguyen to"
             : "So dao cua n khong nguyen to") << endl;
    cout << (checkedSumAllDigitsOfNumberIsPrime ? "Tong chu so la so nguyen to"
             : "Tong chu so khong nguyen to") << endl;
    
    return 0;
}
