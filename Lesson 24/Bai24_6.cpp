/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_6.hpp"

using namespace std;

void input(int &n, string variable) {
    cout << "Nhap vao mot so nguyen " << variable << " khac 0: ";
    cin >> n;
}

void findMaxDivisibleBy5(int n, int &result) {
    findMaxDivisibleByK(n, 5, result);
}

void findMaxDivisibleByK(int n, int k, int &result) {
    while(true) {
        if(n % k == 0) {
            result = n;
            break;
        }
        n--;
    }
}
