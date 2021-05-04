#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    // kiem tra va in ket qua
    string result = "";
    if(n <= 0) {
        result = "NO";
    } else {
        int upperBound = sqrt(n);
        bool isPrimeNumber = true;
        int i = 2;
        while (i <= upperBound) {
            if(n % i == 0) {
                isPrimeNumber = false;
                break;
            }
            i++;
        }
        if(isPrimeNumber) {
            result = "YES";
        } else {
            result = "NO";
        }
    }
    cout << result << endl;
}
