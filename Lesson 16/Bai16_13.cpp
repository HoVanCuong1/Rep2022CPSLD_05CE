/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

// Nhập vào lựa chọn tiếp tục hoặc thoát. Nếu tiếp tục thì nhập
// vào ngày sinh, tháng sinh và hiển thị ra cung hoàng đạo tương ứng
#include <iostream>
using namespace::std;

int main() {
    int choice; // lưu các lựa chọn
    do {
        cout << "Nhap so khac 0 de tiep tuc." << endl;
        cout << "Nhap 0 de thoat: ";
        cin >> choice;

        if (!choice) { // nếu nhập 0
            break; // thoát
        }
        // ngược lại tiếp tục chương trình
        int day, month; // ngày sinh tháng sinh
        cout << "Nhap ngay sinh: ";
        cin >> day; // đọc vào ngày sinh

        cout << "Nhap thang sinh: ";
        cin >> month; // đọc vào tháng sinh

        switch (month)
        {
        case 1:
            if (day < 20) { // 1 - 19/1
                cout << "Ma Ket" << endl;
            }
            else if (day <= 31) { // 20 - 31/1
                cout << "Bao Binh" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 2:
            if (day < 19) { // 1 - 18/2
                cout << "Bao Binh" << endl;
            }
            else if (day <= 29) { // 19 - 29/2
                cout << "Song Ngu" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 3:
            if (day < 21) { // 1 - 20/3
                cout << "Song Ngu" << endl;
            }
            else if (day <= 31) { // 21 - 31/3
                cout << "Bach Duong" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 4:
            if (day < 21) { // 1 - 20/4
                cout << "Bach Duong" << endl;
            }
            else if (day <= 30) { // 21 - 30/4
                cout << "Kim Nguu" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 5:
            if (day < 21) { // 1 - 20/5
                cout << "Kim Nguu" << endl;
            }
            else if (day <= 31) { // 21 - 31/5
                cout << "Song Tu" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 6:
            if (day < 22) { // 1 - 21/6
                cout << "Song Tu" << endl;
            }
            else if (day <= 30) { // 22 - 30/6
                cout << "Cu Giai" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 7:
            if (day < 23) { // 1 - 22/7
                cout << "Cu Giai" << endl;
            }
            else if (day <= 31) { // 23 - 31/7
                cout << "Su Tu" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 8:
            if (day < 23) { // 1 - 22/8
                cout << "Su Tu" << endl;
            }
            else if (day <= 31) { // 23 - 31/8
                cout << "Xu Nu" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 9:
            if (day < 23) { // 1 - 22/9
                cout << "Xu Nu" << endl;
            }
            else if (day <= 30) { // 23 - 30/9
                cout << "Thien Binh" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 10:
            if (day < 24) { // 1 - 23/10
                cout << "Thien Binh" << endl;
            }
            else if (day <= 31) { // 24 - 31/10
                cout << "Bo Cap" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 11:
            if (day < 23) { // 1 - 22/11
                cout << "Bo Cap" << endl;
            }
            else if (day <= 30) { // 23 - 30/11
                cout << "Nhan Ma" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        case 12:
            if (day < 22) { // 1 - 21/12
                cout << "Nhan Ma" << endl;
            }
            else if (day <= 31) { // 22 - 31/12
                cout << "Ma Ket" << endl;
            }
            else {
                cout << "Ngay khong hop le" << endl;
            }
            break;
        default:
            cout << "Thang khong hop le. Vui long kiem tra lai." << endl;
            break;
        }
        cout << "\n==============================" << endl;
    } while (choice != 0);

    cout << "Cam on quy vi da su dung dich vu!" << endl;
}
