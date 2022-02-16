/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number1;
    int number2;
    int choice;
    cout << "Nhap vao hai so nguyen a, b: ";
    cin >> number1 >> number2;
    do {
        cout << "========== MENU ==========" << endl;
        cout << "1. Cong hai so" << endl;
        cout << "2. Tru a cho b" << endl;
        cout << "3. Nhan a voi b" << endl;
        cout << "4. Chia a cho b" << endl;
        cout << "5. Chia lay du a cho b" << endl;
        cout << "6. Tinh a^b, b >= 0" << endl;
        cout << "0. Thoat" << endl;
        cout << "Xin moi chon: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Cam on quy vi da su dung dich vu!" << endl;
                break;
            case 1:
                cout << number1 << " + " << number2 << " = " << (number1 + number2) << endl;
                break;
            case 2:
                cout << number1 << " - " << number2 << " = " << (number1 - number2) << endl;
                break;
            case 3:
                cout << number1 << " * " << number2 << " = " << (number1 * number2) << endl;
                break;
            case 4:
                if(number2 != 0) {
                    cout << number1 << " / " << number2 << " = " << (number1 / number2) << endl;
                } else {
                    cout << "Loi, mau so = 0" << endl;
                }
                break;
            case 5:
                if(number2 != 0) {
                    cout << number1 << " % " << number2 << " = " << (number1 % number2) << endl;
                } else {
                    cout << "Loi, mau so = 0" << endl;
                }
                break;
            case 6:
                cout << number1 << " ^ " << number2 << " = " << pow(number1, number2) << endl;
                break;
            default:
                break;
        }
    } while(choice != 0);
}
