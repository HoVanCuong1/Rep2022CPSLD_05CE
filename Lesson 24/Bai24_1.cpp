/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_1.hpp"

using namespace::std;

void getThreeIntegers(int &number1, int &number2, int &number3) {
    cout << "Nhap vao ba so nguyen: ";
    cin >> number1 >> number2 >> number3;
}

void showResult(int number1, int number2, int number3) {
    auto sum = number1 + number2 + number3;
    cout << number1 << " + " << number2 << " + "
         << number3 << " = " << sum << endl;
}
