/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
#include "Bai24_5.hpp"

using namespace std;

int main() {
    int a, b, c;
    int max;
    int min;
    int secondMax, secondMin;
    double sumAvg, prodAvg;
    // nhap du lieu vao
    input(a, b, c);
    findMax(a, b, c, max);
    findMin(a, b, c, min);
    averageValue(a, b, c, sumAvg, prodAvg);
    secondMinMax(a, b, c, secondMin, secondMax);
    
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    cout << "TBC = " << sumAvg << ", TBN = " << prodAvg << endl;
    cout << "Gia tri nho thu hai: " << secondMin << endl;
    cout << "Gia tri lon thu hai: " << secondMax << endl;
    
    return 0;
}
