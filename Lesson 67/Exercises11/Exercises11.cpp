#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int t;
	ifstream ifs("input11.txt");
	int testCount = 1;
	if (ifs) {
		ifs >> t;
		ifs.ignore();
		string str;
		while (t--) {
			getline(ifs, str);
			int value = stoi(str, nullptr, 2);
			cout << "Test " << testCount++ << ": " << value << endl;
		}
	}
	else {
		cout << "Khong mo duoc file. Vui long kiem tra lai.\n";
	}
}