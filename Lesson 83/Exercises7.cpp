/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */

#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

namespace { // namespace vô danh
    // lớp pair
    template<class K, class V> class Pair;
    template<class K, class V> istream& operator >> (istream&, Pair<K, V>&);
    template<class K, class V> ostream& operator << (ostream&, const Pair<K, V>&);

    template<class K, class V> class Pair {
        friend istream& operator >> <> (istream&, Pair<K, V>&);
        friend ostream& operator << <> (ostream&, const Pair<K, V>&);
    private:
        K key;
        V value;
    public:
        Pair() {}
        Pair(K key, V value) : key(key), value(value) {}
        void setKey(K key) { this->key = key; }
        void setValue(V value) { this->value = value; }
        K getKey() const { return key; }
        V getValue() const { return value; }
        bool operator < (const Pair<K, V>& other) const {
            return key < other.key;
        }
    };

    template<class K, class V> istream& operator >> (istream& is, Pair<K, V>& pair) {
        cout << "Nhap key: ";
        getline(is, pair.key);
        cout << "Nhap value: ";
        getline(is, pair.value);
        return is;
    }

    template<class K, class V> ostream& operator << (ostream& os, const Pair<K, V>& pair) {
        cout << "Key: " << pair.key << " - Value: " << pair.value << endl;
        return os;
    }
}

int main() {
    set<Pair<string, string>> words;
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
            words.insert(word);
            break;
        }
        case 2: {
            if (words.size() > 0) {
                cout << "Nhap key: ";
                string key, value;
                getline(cin, key);
                cout << "Nhap value moi: ";
                getline(cin, value);
                bool isUpdated = false;
                for (auto i = words.begin(); i != words.end(); i++) {
                    if (i->getKey().compare(key) == 0) {
                        Pair<string, string> newWord(i->getKey(), "");
                        newWord.setValue(value);
                        words.erase(i);
                        words.insert(newWord);
                        cout << "<== UPDATE THANH CONG ==>\n";
                        isUpdated = true;
                        break;
                    }
                }
                if (!isUpdated) {
                    cout << "<== KHONG TIM THAY KEY CAN UPDATE ==>\n";
                }
            }
            else {
                cout << "<== DANH SACH RONG ==>\n";
            }
            break;
        }
        case 3: {
            if (words.size() > 0) {
                cout << "Nhap key: ";
                string key;
                getline(cin, key);
                bool isDeleted = false;
                for (auto i = words.begin(); i != words.end(); i++) {
                    if (i->getKey().compare(key) == 0) {
                        words.erase(i);
                        isDeleted = true;
                        cout << "<== XOA THANH CONG ==>\n";
                        break;
                    }
                }
                if (!isDeleted) {
                    cout << "<== KHONG TIM THAY KEY CAN XOA ==>\n";
                }
            }
            else {
                cout << "<== DANH SACH RONG ==>\n";
            }
            break;
        }
        case 4: {
            if (words.size() > 0) {
                cout << "Nhap key: ";
                string key;
                getline(cin, key);
                for (auto i : words) {
                    if (i.getKey().compare(key) == 0) {
                        cout << "Nghia cua tu: " << i.getValue() << endl;
                        break;
                    }
                }
            }
            else {
                cout << "<== DANH SACH RONG ==>\n";
            }
            break;
        }
        case 5: {
            if (words.size() > 0) {
                cout << "<== DANH SACH CAP SONG NGU HIEN CO ==>\n";
                for (auto i : words) {
                    cout << i;
                }
            }
            else {
                cout << "<== DANH SACH RONG ==>\n";
            }
            break;
        }
        case 6: {
            if (words.size() > 0) {
                cout << "<== DANH SACH CAC KEYWORD HIEN CO ==>\n";
                for (auto i : words) {
                    cout << i.getKey() << endl;
                }
            }
            else {
                cout << "<== DANH SACH RONG ==>\n";
            }
            break;
        }
        case 7: {
            if (words.size() > 0) {
                cout << "<== DANH SACH CAC NGHIA CUA TU HIEN CO ==>\n";
                for (auto i : words) {
                    cout << i.getValue() << endl;
                }
            }
            else {
                cout << "<== DANH SACH RONG ==>\n";
            }
            break;
        }
        default:
            cout << "<== SAI CHUC NANG VUI LONG KIEM TRA LAI ==>\n";
            break;
        }

    } while (choice != 0);


    return 0;
}
