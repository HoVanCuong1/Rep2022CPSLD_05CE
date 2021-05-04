/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_4.hpp"

using namespace std;

int main() {
    int a, b;
    int sum = 0;
    long prod = 1;
    double quot;
    
    input(a, b);
    add(a, b, sum);
    multiply(a, b, prod);
    divide(a, b, quot);
    cout << "Tong hai so: " << sum << endl;
    cout << "Tich hai so: " << prod << endl;
    if(quot == INFINITY) {
        cout << "Mau so phai khac 0" << endl;
    } else {
        cout << "Thuong hai so: " << quot << endl;
    }
    
    return 0;
}
