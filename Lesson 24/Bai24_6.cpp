/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
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
