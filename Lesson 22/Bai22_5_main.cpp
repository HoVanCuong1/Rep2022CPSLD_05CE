#include <iostream>
#include "Bai22_5.h"
using namespace std;

/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

int main() {
    int a = getAnIntegerNumber();
    int b = getAnIntegerNumber();
    cout << endl;
    if(a < b) {
        listedAllPrimeNumbers(a, b);
        listedAllSquareNumbers(a, b);
        listedAllReversedNumbers(a, b);
        listedAllNumbersHaveSumDigitsIsPrimeNumber(a, b);
    } else {
        cout << "Nhap a < b" << endl;
    }
    return 0;
}
