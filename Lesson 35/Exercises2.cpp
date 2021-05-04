/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.04
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
	string* namePtr = nullptr;			// ý a
	string name = "Tran Van Hung";		// ý b
	namePtr = &name;
	cout << *namePtr << endl;			// ý c
	cout << "Nhap vao ho ten cua ban: ";// ý d
	getline(cin, *namePtr);
	cout << "Ten cua ban: " << name << endl; // ý e

	return 0;
}