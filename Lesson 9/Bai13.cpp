/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
    double a, h;
    cout << "Nhap do dai canh va chieu cao tuong ung: ";
    cin >> a >> h;
    if(a <= 0 || h <= 0) {
        cout << "INVALID INPUT" << endl;
    } else {
        double area = 0.5 * a * h;
        cout << area << endl;
    }
}
