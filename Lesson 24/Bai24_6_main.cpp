/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai24_6.hpp"

using namespace std;

int main() {
    int n, k;
    int result1, result2;
    input(n, "n");
    findMaxDivisibleBy5(n, result1);
    cout << "So nguyen lon nhat nho hon n chia het cho 5: " << result1 << endl;
    
    input(k, "k");
    if(k != 0) {
        findMaxDivisibleByK(n, k, result2);
        cout << "So nguyen lon nhat nho hon n chia het cho k: " << result2 << endl;
    } else {
        cout << "Vui long nhap k != 0" << endl;
    }
    
    return 0;
}
