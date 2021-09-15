#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int t;
	ifstream ifs("input12.txt");
	ofstream ofs("output12.txt");
	int testCount = 1;
	if (ifs) {
		ifs >> t;
		ifs.ignore();
		string str;
		while (t--) {
			getline(ifs, str);
			auto value = stoull(str, nullptr, 16);
			ofs << "Test " << testCount++ << ": " << value << endl;
		}
		ifs.close();
		ofs.close();
	}
	else {
		cout << "Khong mo duoc file. Vui long kiem tra lai.\n";
	}
}