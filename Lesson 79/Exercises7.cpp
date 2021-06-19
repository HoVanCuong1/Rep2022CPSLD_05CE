/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

namespace { // namespace vô danh
    // hàm nhập số phần tử và các phần tử của vector
    template<class T> void fillElements(vector<T>& v) {
        cout << "Nhap vao so luong phan tu cua mang: ";
        int size;
        cin >> size;
        for (int i = 0; i < size; i++) {
            cout << "Phan tu thu " << i << ": ";
            T t;
            cin >> t;
            v.push_back(t);
        }
    }
    // hàm hiển thị các phần tử của vector
    template<class T> void showVectorElements(const vector<T>& v) {
        for (auto i = v.cbegin(); i != v.cend(); ++i)
        {
            cout << *i << " ";
        }
    }
    // hàm sắp xếp tăng
    template<class T> void sortASC(vector<T>& v) {
        sort(v.begin(), v.end());
    }
}


int main() {
    const int n = 10;
    array<int, n> intArray = { 1, 2, 4, 3, 6, 5, 7, 8, 9, 10 };
    array<double, n> doubleArray = { 1.65, 2.3, 54.56, 3.6, 6, 5.8, 7, 8.99, 9.53, 0.73 };
    array<float, n> floatArray = { 1.4f, 23.58f, 4.57f, 3.3f, 6.74f, 5.25f, 25.7f, 8.39f, 9.98f, 0.97f };

    vector<int> vectorInt(intArray.cbegin(), intArray.cend());
    vector<double> vectorDouble(doubleArray.cbegin(), doubleArray.cend());
    vector<float> vectorFloat(floatArray.cbegin(), floatArray.cend());
    // sắp xếp vector
    sortASC(vectorInt);
    sortASC(vectorFloat);
    sortASC(vectorDouble);
    // hiển thị vector
    cout << "Vector int sau khi sap xep: \n";
    showVectorElements(vectorInt);
    cout << "\nVector float sau khi sap xep: \n";
    showVectorElements(vectorFloat);
    cout << "\nVector double sau khi sap xep: \n";
    showVectorElements(vectorDouble);

    return 0;
}