/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
#include "Bai22_5.h"
using namespace std;

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
