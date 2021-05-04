/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_2.hpp"

using namespace std;

void getThreeDoubleNumbers(double &a, double &b, double &c) {
    cout << "Nhap vao ba so thuc: ";
    cin >> a >> b >> c;
}

void checkTriangleCondition(double a, double b, double c, bool& result) {
    result = (a + b > c && b + c >  a && c + a > b);
}

void showSumNumbers(double a, double b, double c) {
    auto sum = a + b + c;
    cout << a << " + " << b << " + "
         << c << " = " << sum << endl;
}
