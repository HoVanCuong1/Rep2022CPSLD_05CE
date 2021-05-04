#include <iostream>

using namespace std;

/**
 *@author Branium Academy
 *@website braniumacademy.net
 */

int getAnIntegerNumber() {
    int n;
    cout << "Nhap vao mot so nguyen > 0: ";
    cin >> n;
    return n;
}

bool isPrimeNumber(int n) {
    if(n < 2) {
        return false;
    }
    int upperBound = sqrt(n);
    for (int i = 2; i <= upperBound; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

void findNextPrimeNumber(int n) {
    while (true) {
        if(isPrimeNumber(n)) {
            cout << "So nguyen to ke tiep cua n: " << n << endl;
            break;
        }
        n++;
    }
}

void findPrevPrimeNumber(int n) {
    while (true) {
        if(isPrimeNumber(n)) {
            cout << "So nguyen to lien truoc cua n: " << n << endl;
            break;
        }
        if(n < 2) {
            cout << "NOT AVAILABLE" << endl;
        }
        n--;
    }
}

void decomposeIntoPrimeFactorsV1(int n) {
    cout << n << " = ";
    int i = 2; // số nguyên tố nhỏ nhất
    while(n != 1) {
        if(n % i == 0) {
            cout << i << ((i != n) ? "x" : "");
            n /= i;
        } else {
            i++;
        }
    }
    cout << endl;
}

void decomposeIntoPrimeFactorsV2(int n) {
    cout << n << " = ";
    int exp = 0;
    int i = 2; // số nguyên tố nhỏ nhất
    while(n != 1) {
        if(n % i == 0) {
            exp++;
            n /= i;
        } else {
            if(exp > 0) {
                cout << i;
                (exp > 1) ? cout << "^" << exp : cout << "";
                cout << ((n > 1) ? "x" : "");
            }
            i++;
            exp = 0;
        }
    }
    if(exp >= 1) {
        cout << i;
        (exp > 1) ? cout << "^" << exp : cout << "";
        cout << ((n > 1) ? "x" : "");
    }
    cout << endl;
}

void listedAllPrimeNumbersHave5Digits() {
    cout << "Danh sach cac so nguyen to co 5 chu so: " << endl;
    for (int i = 10001; i <= 99999; i++) {
        if(isPrimeNumber(i)) {
            cout << i << " ";
        }
    }
    cout <<  endl;
}

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
