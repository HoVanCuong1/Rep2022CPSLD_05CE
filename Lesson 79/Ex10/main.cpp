/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 * 
 */

#include <iostream>
#include <vector>
#include <string>
#include "Pair.hpp"
using namespace std;

int main() {
    using namespace Exercises10;
    vector<Pair<string, string>> words;
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
                words.push_back(word);
                break;
            }
            case 2: {
                if(!words.empty()) {
                    cout << "Nhap key: ";
                    string key, value;
                    getline(cin, key);
                    cout << "Nhap value moi: ";
                    getline(cin, value);
                    bool isUpdated = false;
                    for (size_t i = 0; i < words.size(); i++) {
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
                if(!words.empty()) {
                    cout << "Nhap key: ";
                    string key;
                    getline(cin, key);
                    bool isDeleted = false;
                    for (auto i = words.begin(); i != words.end(); i++) {
                        if(i->getKey().compare(key) == 0) {
                            words.erase(i);
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
                if(!words.empty()) {
                    cout << "Nhap key: ";
                    string key;
                    getline(cin, key);
                    for (size_t i = 0; i < words.size(); i++) {
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
                if(!words.empty()) {
                    cout << "<== DANH SACH CAP SONG NGU HIEN CO ==>\n";
                    for (size_t i = 0; i < words.size(); i++) {
                        cout << words[i];
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            case 6: {
                if(!words.empty()) {
                    cout << "<== DANH SACH CAC KEYWORD HIEN CO ==>\n";
                    for (size_t i = 0; i < words.size(); i++) {
                        cout << words[i].getKey() << endl;
                    }
                } else {
                    cout << "<== DANH SACH RONG ==>\n";
                }
                break;
            }
            case 7: {
                if(!words.empty()) {
                    cout << "<== DANH SACH CAC NGHIA CUA TU HIEN CO ==>\n";
                    for (size_t i = 0; i < words.size(); i++) {
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
