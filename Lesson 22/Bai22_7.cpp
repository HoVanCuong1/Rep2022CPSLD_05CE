/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include "Bai22_7.hpp"
#include <iostream>

using namespace std;

double getDoubleValue() {
    double x;
    cout << "Nhap vao mot so thuc x: ";
    cin >> x;
    return x;
}

long leftNearestValue(double n) {
    return n;
}

long rightNearestValue(double n) {
    return n + 1;
}

double absoluteValue(double n) {
    return n >= 0 ? n : -n;
}
