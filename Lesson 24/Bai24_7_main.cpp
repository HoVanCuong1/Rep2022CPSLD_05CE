/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_7.hpp"

using namespace std;

int main() {
    int a, b;
    int gcd, lcm;
    
    input(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    
    findGCDAndLCM(a, b, gcd, lcm);
    cout << "UCLN = " << gcd << ", BCNN = " << lcm << endl;
    
    return 0;
}
