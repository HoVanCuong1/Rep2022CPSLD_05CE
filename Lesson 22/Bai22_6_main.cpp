/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.2
 */

#include <iostream>
#include "Bai22_6.hpp"

using namespace std;

int main() {
    int n = getAnIntegerNumber();
    cout << endl;
    findNextPrimeNumber(n + 1);
    findPrevPrimeNumber(n - 1);
    decomposeIntoPrimeFactorsV1(n);
    decomposeIntoPrimeFactorsV2(n);
    listedAllPrimeNumbersHave5Digits();
    
    return 0;
} 
