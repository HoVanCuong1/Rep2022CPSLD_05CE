/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai22_7.hpp"
using namespace::std;

int main() {
    double x;
    x = getDoubleValue();
    cout << "So nguyen gan nhat nho hon x: " << leftNearestValue(x) << endl;
    cout << "So nguyen gan nhat lon hon x: " << rightNearestValue(x) << endl;
    cout << "Gia tri tuyet doi cua x = " << absoluteValue(x) << endl;
    
    return 0;
}
