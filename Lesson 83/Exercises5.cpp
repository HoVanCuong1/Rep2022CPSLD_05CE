/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

namespace { // namespace vô danh
    // hàm nhập số phần tử và các phần tử của set
    template<class T> void fillElements(set<T>& set) {
        cout << "Nhap vao so luong phan tu: ";
        int size;
        cin >> size;
        for (int i = 0; i < size; i++) {
            cout << "Phan tu thu " << i << ": ";
            T t;
            cin >> t;
            set.insert(t);
        }
    }
    // hàm hiển thị
    template<class T> void showElements(const set<T>& set) {
        for (auto it = set.crbegin(); it != set.crend(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }

    // tìm xem x có xuất hiện trong set hay không
    template<class T> bool findX(const set<T>& set, T x) {
        auto result = find(set.begin(), set.end(), x);
        if (result != set.end()) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main() {
    set<int> setInt; // khai báo set kiểu int
    // nhập vào các phần tử cho set
    cout << "Nhap cac so nguyen int: \n";
    fillElements(setInt);

    // hiển thị các phần tử trong set int
    cout << "Cac phan tu set int: \n";
    showElements(setInt);

    int x;
    cout << "Nhap x: ";
    cin >> x;
    if (findX(setInt, x)) {
        cout << "x ton tai trong set\n";
    }
    else {
        cout << "x khong ton tai trong danh sach\n";
    }

    return 0;
}
