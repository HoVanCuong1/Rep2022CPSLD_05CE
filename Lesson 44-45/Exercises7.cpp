#include <iostream>
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
		auto value = stoull(str, nullptr, 16);
		cout << "Test " << testCount++ << ": " << value << endl;
	}
}