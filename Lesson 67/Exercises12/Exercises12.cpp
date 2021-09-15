#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int t;
	ifstream ifs("input12.txt");
	int testCount = 1;
	if (ifs) {
		ifs >> t;
		ifs.ignore();
		string str;
		while (t--) {
			getline(ifs, str);
			auto value = stoull(str, nullptr, 16);
			cout << "Test " << testCount++ << ": " << value << endl;
		}
		ifs.close();
	}
	else {
		cout << "Khong mo duoc file. Vui long kiem tra lai.\n";
	}
}