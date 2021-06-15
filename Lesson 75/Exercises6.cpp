//
//  Exercises6.cpp
//  Lesson75
//
//  Created by Branium on 13/06/2021.
//

#include <iostream>
using namespace std;

template<class T> void sortDESC(T *arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if(arr[j] > arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

template<class T> void showArrayElements(T* arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 10;
    int intNumbers[10] = {1, 2, 4, 3, 6, 5, 7, 8, 9, 0};
    double doubleNumbers[10] ={1.65, 2.3, 4, 3.6, 6, 5.8, 7, 8.99, 9.53, 0.73};
    float floatNumbers[10] = {1.4f, 2, 4, 3.3f, 6, 5, 7, 8, 9.98f, 0.97f};
    string names[10] = { "Anh", "Nam", "Nhung", "Hoang", "Long", "Lan", "Khoa", "Huong", "Yen", "Thanh" };
    
    sortDESC(intNumbers, n);
    sortDESC(floatNumbers, n);
    sortDESC(doubleNumbers, n);
    sortDESC(names, n);
    
    cout << "<== DANH SACH PHAN TU MANG SAU KHI SAP XEP ==>\n";
    showArrayElements(intNumbers, n);
    showArrayElements(floatNumbers, n);
    showArrayElements(doubleNumbers, n);
    showArrayElements(names, n);
    
    return 0;
}

