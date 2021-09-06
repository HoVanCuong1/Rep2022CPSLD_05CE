#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void splitWords(char words[500][20], char* input, int& n) {
    const char* delim = "\t.?,:;! ";
    char* p = strtok(input, delim);
    while (p != nullptr) {
        strcpy(words[n++], p);
        p = strtok(NULL, delim);
    }
}

void saveData(char words[500][20], int n, ofstream& ofs) {
    for (int i = 0; i < n; i++)
    {
        ofs << words[i] << " ";
    }
    ofs << endl;
}

void doUppercase(char words[500][20], int n) {
    for (int i = 0; i < n; i++)
    {
        words[i][0] = toupper(words[i][0]);
    }
}

void sort(char words[500][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(words[i], words[j]) < 0) {
                swap(words[i], words[j]);
            }
        }
    }
}

int main()
{
    ifstream ifs("input8.txt");
    ofstream ofs("output8.txt");
    if (ifs) {
        int t;
        int counter = 1;
        ifs >> t;
        ifs.ignore();
        while (t--) {
            int n = 0;
            char input[500];
            ifs.getline(input, 500);
            ofs << "Test " << counter++ << ":"  << endl;
            char words[500][20];
            splitWords(words, input, n);
            saveData(words, n, ofs);
            doUppercase(words, n);
            saveData(words, n, ofs);
            sort(words, n);
            saveData(words, n, ofs);
        }
        ifs.close();
        ofs.close();
    }
    else {
        cout << "Khong the mo file" << endl;
    }
}