#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int t;
	int testCount = 1;
	cin >> t;
	cin.ignore();
	string str;
	while (t--) {
		getline(cin, str);
		int value = stoi(str, nullptr, 2);
		cout << "Test " << testCount++ << ": " << value << endl;
	}
}