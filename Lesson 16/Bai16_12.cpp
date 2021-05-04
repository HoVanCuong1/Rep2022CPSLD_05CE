// Nhập vào lựa chọn từ 1 - 12 và xuất ra tên tháng trong năm
// tương ứng. Nhập 0 sẽ thoát chương trình
#include <iostream>

using namespace::std;
/*
 * @author Branium Academy
*/
int main() {
    int choice; // lưu các lựa chọn
    do {
        cout << "Nhap thang (1-12).\nNhap 0 de thoat: " << endl;
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            cout << "Xin chao va hen gap lai" << endl;
            break;
        case 1: // tháng 1
            cout << "January" << endl;
            break;
        case 2: // tháng 2
            cout << "February" << endl;
            break;
        case 3: // tháng 3
            cout << "March" << endl;
            break;
        case 4: // tháng 4
            cout << "April" << endl;
            break;
        case 5: // tháng 5
            cout << "May" << endl;
            break;
        case 6: // tháng 6
            cout << "June" << endl;
            break;
        case 7: // tháng 7
            cout << "July" << endl;
            break;
        case 8: // tháng 8
            cout << "August" << endl;
            break;
        case 9: // tháng 9
            cout << "September" << endl;
            break;
        case 10: // tháng 10
            cout << "October" << endl;
            break;
        case 11: // tháng 11
            cout << "November" << endl;
            break;
        case 12: // tháng 12
            cout << "December" << endl;
            break;
        default:
            cout << "Thang khong hop le. Vui long kiem tra lai" << endl;
            break;
        }
        cout << "\n==============================" << endl;
    } while (choice != 0);
}
