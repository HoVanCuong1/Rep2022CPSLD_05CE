/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_4.hpp"

using namespace std;

void input(int &a, int &b) {
    cout << "Nhap vao hai so nguyen: ";
    cin >> a >> b;
}

void add(int a, int b, int &sum) {
    sum = a + b;
}

void divide(int a, int b, double &quot) {
    if(b != 0) {
        quot = 1.0 * a / b;
    } else {
        quot = INFINITY;
    }
}

void multiply(int a, int b, long &prod) {
    prod = a * b;
}
