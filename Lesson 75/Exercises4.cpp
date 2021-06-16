/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 * 
 */

#include <iostream>
using namespace std;

template<class T> T sumAllElements(T *arr, const int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intNumbers[10] = {1, 2, 4, 3, 6, 5, 7, 8, 9, 0};
    double doubleNumbers[10] ={1.65, 2.3, 4, 3.6, 6, 5.8, 7, 8.99, 9.53, 0.73};
    float floatNumbers[10] = {1.4f, 2, 4, 3.3f, 6, 5, 7, 8, 9.98f, 0.97f};
    int n = 10;
    cout << "Tong cac phan tu trong mang int: "
         << sumAllElements(intNumbers, n) << endl;
    cout << "Tong cac phan tu trong mang float: "
         << sumAllElements(floatNumbers, n) << endl;
    cout << "Tong cac phan tu trong mang double: "
         << sumAllElements(doubleNumbers, n) << endl;
    
    return 0;
}
