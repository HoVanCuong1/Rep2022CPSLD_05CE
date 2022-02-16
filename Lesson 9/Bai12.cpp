#include <iostream>
using namespace std;

/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */  

int main() {
    double a, b;
    cout << "Nhap vao hai canh a, b cua hinh chu nhat: ";
    cin >> a >> b;
    if(a <= 0 || b <= 0) {
        cout << "INVALID INPUT" << endl;
    } else {
        double perimeter = 2 * (a + b);
        double area = a * b;
        cout << perimeter << " " << area << endl;
    }
    cout << endl;
}
