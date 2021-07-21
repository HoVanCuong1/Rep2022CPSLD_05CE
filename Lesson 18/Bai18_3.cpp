#include <iostream>

using namespace::std;

int main() {
    int a, b, n;
    cout << "Nhap a, b, n: ";
    cin >> a >> b >> n;
    if(a < 0 || b < 0 || a > b || n <= 0) {
        cout << "NOT AVAILABLE" << endl;
    } else {
        int lowerBound = sqrt(a);
        int upperBound = sqrt(b);
        int counter = 0;
        for (int i = lowerBound; i <= upperBound; i++) {
            if (counter < n && (i * i >= a)) {
                counter++;
                cout << (i * i) << " ";
            }
            if(counter >= n) {
                break;
            }
        }
        if(counter == 0) {
            cout << "NOT AVAILABLE";
        }
        cout << endl << endl;
    }
}
