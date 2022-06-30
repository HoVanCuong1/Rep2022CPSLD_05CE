/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
#include "Bai24_5.hpp"

using namespace std;

void input(int &a, int &b, int &c) {
    cout << "Nhap vao ba so nguyen: ";
    cin >> a >> b >> c;
}

void findMax(int a, int b, int c, int &max) {
    max = a;
    if(max < b) {
        max = b;
    }
    if(max < c) {
        max = c;
    }
}

void findMin(int a, int b, int c, int &min) {
    min = a;
    if(min > b) {
        min = b;
    }
    if(min > c) {
        min = c;
    }
}

void averageValue(int a, int b, int c, double &sumAvg, double &prodAvg) {
    sumAvg = (a + b + c) / 3.0;
    prodAvg = (a * b * c) / 3.0;
}

void findSecondMin(int a, int b, int c, int &secondMin) {
    int min, max;  
    findMin(a, b, c, min);
    findMax(a, b, c, max);
    secondMin = max;
    if(secondMin > a && a != min) {
        secondMin = a;
    }
    if(secondMin > b && b != min) {
        secondMin = b;
    }
    if(secondMin > c && c != min) {
        secondMin = c;
    }
    if (secondMin == max) {
        secondMin = max;
    }
}

void findSecondMax(int a, int b, int c, int& secondMax) {
    int max, min;
    findMax(a, b, c, max);
    findMin(a, b, c, min);
    if (min == max) {
        secondMax = max;
        return;
    }
    secondMax = min;
    if (secondMax < a && a != max) {
        secondMax = a;
    }
    if (secondMax < b && b != max) {
        secondMax = b;
    }
    if (secondMax < c && c != max) {
        secondMax = c;
    }
    if (secondMax == max) {
        secondMax = min;
    }
}