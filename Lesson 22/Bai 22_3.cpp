#include <iostream>

using namespace std;

/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

int getAnIntegerNumber();
int sumAllDigitsOfN(int n);
int productAllDigitsOfN(int n);
int firstDigitOfN(int n);
void showResult(int n);

int main() {
    int n = getAnIntegerNumber();
    
    cout << "Tong cac chu so cua n: ";
    showResult(sumAllDigitsOfN(n));
    
    cout << "Tich cac chu so cua n: ";
    showResult(productAllDigitsOfN(n));
    
    cout << "Chu so dau tien cua n: ";
    showResult(firstDigitOfN(n));
    
    return 0;
}

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

int sumAllDigitsOfN(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int productAllDigitsOfN(int n) {
    int prod = 1;
    while (n > 0) {
        prod *= n % 10;
        n /= 10;
    }
    return prod;
}

int firstDigitOfN(int n) {
    while (n > 10) {
        n /= 10;
    }
    return n;
}

void showResult(int n) {
    cout << n << endl;
}
