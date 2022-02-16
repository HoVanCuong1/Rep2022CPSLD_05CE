/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
#include "Bai24_7.hpp"

using namespace std;

void input(int &a, int &b) {
    while (true) {
        cout << "Nhap hai so nguyen duong a, b: ";
        cin >> a >> b;
        if(a > 0 && b > 0) {
            break;
        }
    }
}

void findGCDAndLCM(int a, int b, int &gcd, int &lcm) {
    int originLCM = a * b;
    while (a != b) {
        a = (a > b) ? a - b : a;
        b = (b > a) ? b - a : b;
    }
    gcd = a;
    lcm = originLCM / gcd;
}
