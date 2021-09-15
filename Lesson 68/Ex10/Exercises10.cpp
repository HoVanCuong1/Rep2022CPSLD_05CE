#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void printResult(string str, ofstream& ofs) {
	int index = 1;
	while (str.length() > 0)
	{
		double number = stod(str);
		ofs << index++ << ": " << setprecision(2) << fixed << number << endl;
		auto nextElement = str.find(',');
		if (nextElement != string::npos) {
			str = str.substr(nextElement + 1);
		}
		else {
			break;
		}
	}
}

int main()
{
	int t;
	ifstream ifs("input10.txt");
	ofstream ofs("output10.txt");
	if (ifs) {
		int testNumber = 1;
		ifs >> t;
		ifs.ignore(); // bo qua ki tu thua o cuoi dong
		while (t--) {
			string str;
			getline(ifs, str);
			ofs << "Test " << testNumber++ << ":\n";
			printResult(str, ofs);
		}
		ifs.close();
		ofs.close();
	}
	else {
		cout << "Khong mo duoc file. Vui long kiem tra lai.\n";
	}
}