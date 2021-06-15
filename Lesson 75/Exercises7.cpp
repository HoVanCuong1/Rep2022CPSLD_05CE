//
//  Exercises7.cpp
//  Lesson75
//
//  Created by Branium on 13/06/2021.
//

#include <iostream>
using namespace std;
// hàm nhập số phần tử và các phần tử mảng
template<class T> void getArrayElements(T* arr, int& size) {
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "Phan tu thu " << i << ": ";
        cin >> arr[i];
    }
}
// hàm hiển thị các phần tử mảng
template<class T> void showArrayElements(T* arr, int& size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[100];
    double doubleArr[100];
    string stringArr[100];
    int intSize = 0; // số phần tử mảng int
    int doubleSize = 0; // số phần tử mảng double
    int stringSize = 0; // số phần tử mảng string
    
    // nhập vào các phần tử cho mảng
    cout << "Nhap mang int: \n";
    getArrayElements(intArr, intSize);
    cout << "Nhap mang double: \n";
    getArrayElements(doubleArr, doubleSize);
    cout << "Nhap mang string: \n";
    getArrayElements(stringArr, stringSize);
    
    // hiển thị các phần tử trong mảng
    cout << "Cac phan tu mang int: \n";
    showArrayElements(intArr, intSize);
    cout << "Cac phan tu mang double: \n";
    showArrayElements(doubleArr, doubleSize);
    cout << "Cac phan tu mang string: \n";
    showArrayElements(stringArr, stringSize);
    
    return 0;
}
