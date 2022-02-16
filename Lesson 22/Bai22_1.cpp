/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
using namespace::std;

// khai báo nguyên mẫu hàm:
double add(double a, double b); // cộng hai số a, b
double subtract(double a, double b); // trừ a cho b
double multiply(double a, double b); // nhân a với b
double divide(double a, double b); // chia a cho b
void showResult(double number); // hiển thị kết quả

int main() {
    double a, b;
    cout << "Nhap vao hai so thuc a, b: ";
    cin >> a >> b;
    // thuc hien phep cong
    cout << a << " + " << b << " = ";
    showResult(add(a, b));
    
    // thuc hien phep tru
    cout << a << " - " << b << " = ";
    showResult(subtract(a, b));
    
    // thuc hien phep nhan
    cout << a << " * " << b << " = ";
    showResult(multiply(a, b));
    
    // thuc hien phep chia
    cout << a << " / " << b << " = ";
    showResult(divide(a, b));
    
    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

void showResult(double number) {
    cout << number << endl;
}
