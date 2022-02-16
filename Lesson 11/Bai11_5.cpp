/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Nhap vao ngay sinh, thang sinh hop le: ";
    cin >> day >> month;
    switch (month) {
        case 1:
            if (day > 0 && day <= 19) {
                cout << "Ma Ket" << endl;
            } else if(day >= 20 && day <= 31) {
                cout << "Bao Binh" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 2:
            if (day > 0 && day <= 18) {
                cout << "Bao Binh" << endl;
            } else if(day >= 19 && day <= 28) {
                cout << "Song Ngu" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 3:
            if (day > 0 && day <= 20) {
                cout << "Song Ngu" << endl;
            } else if(day >= 21 && day <= 31) {
                cout << "Bach Duong" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 4:
            if (day > 0 && day <= 20) {
                cout << "Bach Duong" << endl;
            } else if(day >= 21 && day <= 30) {
                cout << "Kim Nguu" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 5:
            if (day > 0 && day <= 20) {
                cout << "Kim Nguu" << endl;
            } else if(day >= 21 && day <= 31) {
                cout << "Song Tu" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 6:
            if (day > 0 && day <= 21) {
                cout << "Song Tu" << endl;
            } else if(day >= 22 && day <= 30) {
                cout << "Cu Giai" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 7:
            if (day > 0 && day <= 22) {
                cout << "Cu Giai" << endl;
            } else if(day >= 23 && day <= 31) {
                cout << "Su Tu" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 8:
            if (day > 0 && day <= 22) {
                cout << "Su Tu" << endl;
            } else if(day >= 23 && day <= 31) {
                cout << "Xu Nu" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 9:
            if (day > 0 && day <= 22) {
                cout << "Xu Nu" << endl;
            } else if(day >= 23 && day <= 30) {
                cout << "Thien Binh" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 10:
            if (day > 0 && day <= 23) {
                cout << "Thien Binh" << endl;
            } else if(day >= 24 && day <= 31) {
                cout << "Bo Cap" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 11:
            if (day > 0 && day <= 22) {
                cout << "Bo Cap" << endl;
            } else if(day >= 23 && day <= 30) {
                cout << "Nhan Ma" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        case 12:
            if (day > 0 && day <= 21) {
                cout << "Nhan Ma" << endl;
            } else if(day >= 22 && day <= 31) {
                cout << "Ma Ket" << endl;
            } else {
                cout << "INVALID DATE" << endl;
            }
            break;
        default:
            cout << "INVALID MONTH" << endl;
            break;
    }
    cout << endl;
    
    return 0;
}
