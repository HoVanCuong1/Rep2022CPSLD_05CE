#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void splitWords(string* words, string input, int& n) {
	char* cstr = new char[input.length() + 1];
	std::strcpy(cstr, input.c_str());
	const char* delim = "\t.?,:;! ";
	char* p = strtok(cstr, delim);
	while (p != nullptr) {
		string word(p);
		words[n++] = word;
		p = strtok(NULL, delim);
	}
}

void printData(string* words, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << words[i] << " ";
	}
	cout << endl;
}

void doUppercase(string* words, int n) {
	for (int i = 0; i < n; i++)
	{
		words[i][0] = toupper(words[i][0]);
	}
}

void sort(string* words, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
		{
			if (words[i].compare(words[j]) < 0) {
				swap(words[i], words[j]);
			}
		}
	}
}

int main()
{
	int t;
	int counter = 1;
	cin >> t;
	cin.ignore();
	while (t--) {
		int n = 0;
		string input;
		getline(cin, input);
		cout << "Test " << counter++ << ":" << endl;
		string* words = new string[input.length()];
		splitWords(words, input, n);
		printData(words, n);
		doUppercase(words, n);
		printData(words, n);
		sort(words, n);
		printData(words, n);
	}
}
