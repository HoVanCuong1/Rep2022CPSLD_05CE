#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Nhap so nguyen n: ";
    cin >> number;
    // kiem tra va in ra ket qua
    if(number < 2) {
        cout << "NO" << endl;
    } else {
        bool isPrimeNumber = true;
        for (int i = 2; i <= sqrt(number); i++) {
            if(number % i == 0) {
                isPrimeNumber = false;
                break;
            }
        }
        if(isPrimeNumber) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    cout << endl;
}
