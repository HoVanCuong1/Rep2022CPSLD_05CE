#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void printResult(string str) {
	int index = 1;
	while (str.length() > 0)
	{
		double number = stod(str);
		cout << index++ << ": " << setprecision(2) << fixed << number << endl;
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
	if (ifs) {
		int testNumber = 1;
		ifs >> t;
		ifs.ignore(); // bo qua ki tu thua o cuoi dong
		while (t--) {
			string str;
			getline(ifs, str);
			cout << "Test " << testNumber++ << ":\n";
			printResult(str);
		}
		ifs.close();
	}
	else {
		cout << "Khong mo duoc file. Vui long kiem tra lai.\n";
	}
}