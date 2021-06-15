#include <iostream>
#include "Pair.hpp"
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    Pair<string, string> words[100];
    int size = 0;
    int choice = 0;
    do {
        cout << "================ MENU ================\n";
        cout << "1. Them cap song ngu moi.\n";
        cout << "2. Sua nghia cua tu.\n";
        cout << "3. Xoa cap song ngu.\n";
        cout << "4. Tim nghia cua tu.\n";
        cout << "5. Liet ke danh sach cap song ngu.\n";
        cout << "6. Liet ke danh sach cac tu.\n";
        cout << "7. Liet ke nghia cua cac tu hien co\n";
        cout << "0. Thoat chuong trinh.\n";
        cout << "Ban chon? ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 0:
                cout << "<== XIN CHAO VA HEN GAP LAI ==>\n";
                break;
            case 1: {
                Pair<string, string> word;
                cin >> word;
                words[size++] = word;
                break;
            }
            case 2: {
                if(size > 0) {
                    cout << "Nhap key: ";
                    string key, value;
                    getline(cin, key);
                    cout << "Nhap value moi: ";
                    getline(cin, value);
                    bool isUpdated = false;
                    for (int i = 0; i < size; i++) {
                        if(words[i].getKey().compare(key) == 0) {
                            words[i].setValue(value);
                            cout << "<== UPDATE THANH CONG ==>\n";
                            isUpdated = true;
                            break;
                        }
                    }
                    if(!isUpdated) {
                        cout << "<== KHONG TIM THAY KEY CAN UPDATE ==>\n";
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            case 3: {
                if(size > 0) {
                    cout << "Nhap key: ";
                    string key;
                    getline(cin, key);
                    bool isDeleted = false;
                    for (int i = 0; i < size; i++) {
                        if(words[i].getKey().compare(key) == 0) {
                            for (int j = i; j < size - 1; j++) {
                                words[j] = words[j + 1];
                            }
                            isDeleted = true;
                            cout << "<== XOA THANH CONG ==>\n";
                            break;
                        }
                    }
                    if(!isDeleted) {
                        cout << "<== KHONG TIM THAY KEY CAN XOA ==>\n";
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            case 4: {
                if(size > 0) {
                    cout << "Nhap key: ";
                    string key;
                    getline(cin, key);
                    for (int i = 0; i < size; i++) {
                        if(words[i].getKey().compare(key) == 0) {
                            cout << "Nghia cua tu: " << words[i].getValue() << endl;
                            break;
                        }
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            case 5: {
                if(size > 0) {
                    cout << "<== DANH SACH CAP SONG NGU HIEN CO ==>\n";
                    for (int i = 0; i < size; i++) {
                        cout << words[i];
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            case 6: {
                if(size > 0) {
                    cout << "<== DANH SACH CAC KEYWORD HIEN CO ==>\n";
                    for (int i = 0; i < size; i++) {
                        cout << words[i].getKey() << endl;
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            case 7: {
                if(size > 0) {
                    cout << "<== DANH SACH CAC NGHIA CUA TU HIEN CO ==>\n";
                    for (int i = 0; i < size; i++) {
                        cout << words[i].getValue() << endl;
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            default:
                cout << "<== SAI CHUC NANG VUI LONG KIEM TRA LAI ==>\n";
                break;
        }
        
    } while(choice != 0);
    
    return 0;
}
