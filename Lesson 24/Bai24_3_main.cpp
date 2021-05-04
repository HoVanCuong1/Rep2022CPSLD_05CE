/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_3.hpp"

using namespace::std;

int main() {
    unsigned int n;
    int sum, product, firstDigit;
    input(n);
    sumAllDigits(n, sum);
    productAllDigits(n, product);
    firstDigitOfN(n, firstDigit);
    cout << "Tong cac chu so cua n: ";
    showResult(sum);
    cout << "Tich cac chu so cua n: ";
    showResult(product);
    cout << "Chu so dau tien cua n: ";
    showResult(firstDigit);
    
    return 0;
}
