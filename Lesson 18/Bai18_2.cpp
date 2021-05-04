#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Nhap vao hai so nguyen a, b sao cho a < b: ";
    cin >> a >> b;
    if(a > b || b < 2) {
        cout << "NOT AVAILABLE" << endl;
    } else {
        int count = 0;
        for (int i = a; i <= b; i++) {
            bool isPrimeNumber = true;
            int bound = sqrt(i);
            int it = 2;
            while (it <= bound) {
                if(i % it == 0) {
                    isPrimeNumber = false;
                    break;
                }
                it++;
            }
            if(i > 1 && isPrimeNumber) {
                cout << i << " ";
                count++;
                if(count == 2) {
                    break;
                }
            }
        }
        if(count == 0) {
            cout << "NOT AVAILABLE" << endl;
        }
    }
    cout << endl;
}
