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
    // hàm đếm số phần tử có giá trị bằng k
    template<class T> int countX(const vector<T>& v, const T& x) {
        int count = 0;
        for (size_t i = 0; i < v.size(); i++)
        {
            if (v[i] == x) {
                count++;
            }
        }
        return count;
    }
}

int main() {
    const int n = 10;
    int x = 2;
    float y = 5.5f;
    double z = 6.25;
    array<int, n> intArray = { 2, 2, 4, 3, 2, 5, 7, 2, 9, 10 };
    array<double, n> doubleArray = { 6.25, 2.3, 54.56, 3.6, 6.25, 5.8, 7, 8.99, 9.53, 6.25 };
    array<float, n> floatArray = { 1.4f, 5.5f, 4.57f, 3.3f, 6.25f, 5.5f, 25.7f, 8.39f, 9.98f, 0.97f };

    vector<int> vectorInt(intArray.cbegin(), intArray.cend());
    vector<double> vectorDouble(doubleArray.cbegin(), doubleArray.cend());
    vector<float> vectorFloat(floatArray.cbegin(), floatArray.cend());
    // hiện kết quả
    cout << "So phan tu co gia tri " << x << " trong vector int: " << countX(vectorInt, x) << endl;
    cout << "So phan tu co gia tri " << y << " trong vector float: " << countX(vectorFloat, y) << endl;
    cout << "So phan tu co gia tri " << z << " trong vector double: " << countX(vectorDouble, z) << endl;

    return 0;
}