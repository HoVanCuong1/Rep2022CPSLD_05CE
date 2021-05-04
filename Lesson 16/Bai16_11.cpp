#include <iostream>

using namespace std;

int main() {
    int choice;
    do {
        cout << "Nhap ngay(1-7)." << endl;
        cout << "Nhap 0 de thoat: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Xin chao va hen gap lai!" << endl;
                break;
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
            default:
                cout << "Gia tri khong hop le. Vui long kiem tra lai." << endl;
                break;
        }
        cout << "===========================" << endl;
    } while(choice != 0);
    
}
