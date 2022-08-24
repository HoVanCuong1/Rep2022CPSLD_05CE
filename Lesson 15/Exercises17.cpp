#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int testNumber; // số lượng bộ test
    cin >> testNumber;
    for (int test = 1; test <= testNumber; test++) {
        int m, n; // cặp số cần kiểm tra
        cin >> m >> n; // đọc vào cặp số cần kiểm tra
        if (m < 2) {
            cout << "Test " << test << ": NO" << endl;
        }
        else { // tính tổng ước của số nhỏ hơn. Giả định m < n
            int sum = 1;
            int bound = (int)sqrt(m);
            for (int i = 2; i <= bound; i++) {
                if (m % i == 0) {
                    if (m / i == i) {
                        sum += i;
                    }
                    else {
                        sum += i;
                        sum += m / i;
                    }
                }
            }
            if (sum == n) { // nếu tổng ước số m bằng giá trị của n
                cout << "Test " << test << ": YES\n"; // cặp m, n là số thân thiết
            }
            else {
                cout << "Test " << test << ": NO\n"; // ngược lại cặp m, n không phải cặp số thân thiết
            }
        }
    }
}