/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.05
 */

#include <iostream>

using namespace std;

void getFriendNames(string* const friends, const int size) {
	for (int i = 0; i < size; i++) {
		cin >> friends[i];
	}
}

void showFriendNames(const string* const friends, const int size) {
	for (int i = 0; i < size; i++) {
		cout << friends[i] << " ";
	}
	cout << endl;
}

int findName(const string* const friends, const int size) {
	cout << "Nhap ten can tim: ";
	string key;
	cin >> key;
	for (int i = 0; i < size; i++) {
		if (key == friends[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	int size;
	cout << "Nhap so ban be cua ban: ";
	cin >> size;
	if (size > 0) {
		string* friends = new string[size];
		getFriendNames(friends, size);
		cout << "Danh sach ban be: ";
		showFriendNames(friends, size);
		cout << "Vi tri ten can tim trong mang: "
			<< findName(friends, size) << endl;
	}
	else {
		cout << "Nhap so luong ban be > 0" << endl;
	}

	return 0;
}