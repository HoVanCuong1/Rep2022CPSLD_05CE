/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
#include "Bai24_2.hpp"

using namespace std;

int main() {
    double number1;
    double number2;
    double number3;
    bool isTriangleCreatable = false;
    
    getThreeDoubleNumbers(number1, number2, number3);
    checkTriangleCondition(number1, number2, number3, isTriangleCreatable);
    if(isTriangleCreatable) {
        cout << "Ba so lap thanh tam giac" << endl;
    } else {
        cout << "Ba so khong lap thanh tam giac" << endl;
    }
    showSumNumbers(number2, number2, number3);
    
    return 0;
}
