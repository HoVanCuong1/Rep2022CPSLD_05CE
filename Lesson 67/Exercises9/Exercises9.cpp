#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void doUppercase(char words[500][20], int n) {
    for (int i = 0; i < n; i++)
    {
        words[i][0] = toupper(words[i][0]);
    }
}

void removeTail(char* input) {
    int len = strlen(input);
    while (input[len - 1] == '\t' || input[len - 1] == ' ') {
        input[len - 1] = '\0';
    }
}

void removeBefore(char* input) {
    int len = strlen(input);
    for (int i = 1; i < len; i++)
    {
        if ((input[i] == '.' || input[i] == ',' || input[i] == ';' 
            || input[i] == ':' || input[i] == '?' || input[i] == '!') && input[i - 1] == ' ') {
            for (int j = i - 1; j < len; j++)
            {
                input[j] = input[j + 1];
            }
            i--;
        }
    }
}

void removeInside(char* input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++)
    {
        if ((input[i] == '\t' || input[i] == ' ') 
            && (input[i + 1] == '\t' || input[i + 1] == ' ')) {
            input[i] = ' ';
            for (int j = i + 1; j < len; j++)
            {
                input[j] = input[j + 1];
            }
            i--;
        }
    }
}

void removeHead(char* input) {
    int pos = 0;
    int len = strlen(input);
    for (int i = 0; i < len; i++)
    {
        if (input[i] == '\t' || input[i] == ' ') {
            pos = i;
        }
        if (input[i] != ' ' && input[i] != '\t') {
            break;
        }
    }
    for (int i = 0; i <= len - pos; i++)
    {
        input[i] = input[i + pos];
    }
}

void removeLastCharacter(char* input) {
    int len = strlen(input);
    if (input[len - 1] == ',' || input[len - 1] == ';' || input[len - 1] == ':') {
        input[len - 1] = '\0';
    }
}

void addDotToTheEnd(char* input) {
    int len = strlen(input);
    if (isalpha(input[len - 1])) { // neu ki tu cuoi cung la chu cai
        input[len] = '.'; // them dau cham vao cuoi cau
        input[len + 1] = '\0'; // ket thuc chuoi ki tu
    }
}

void addSpace(char* input) {
    int len = strlen(input);
    for (int i = 1; i < len; i++)
    {
        if ((input[i] == ',' || input[i] == '.' || input[i] == '!' 
            || input[i] == '?' || input[i] == ';' || input[i] == ':')
            && input[i+1] != ' ') {
            for (int j = len; j > i + 1; j--)
            {
                input[j] = input[j - 1];
            }
            input[i + 1] = ' ';
        }
    }
}

void upperFirstLetter(char* input) {
    int len = strlen(input);
    input[0] = toupper(input[0]);
    for (int i = 1; i < len; i++)
    {
        if ((input[i] == '.' || input[i] == '?' || input[i] == '!') && i + 2 < len) {
            input[i + 2] = toupper(input[i + 2]);
        }
    }
}

void lowercaseOtherLetter(char* input) {
    int len = strlen(input);
    for (int i = 1; i < len; i++)
    {
        if (input[i - 1] != ' ') {
            input[i] = tolower(input[i]);
        }
    }
}

void doTasks(char *input) {
    removeHead(input);
    removeTail(input);
    removeInside(input);
    removeBefore(input);
    removeLastCharacter(input);
    addDotToTheEnd(input);
    addSpace(input);
    upperFirstLetter(input);
    lowercaseOtherLetter(input);
}

int main()
{
    ifstream ifs("input9.txt");
    if (ifs) {
        int t;
        int counter = 1;
        ifs >> t;
        ifs.ignore();
        while (t--) {
            int n = 0;
            char input[500];
            ifs.getline(input, 500);
            doTasks(input);
            cout << "Test " << counter++ << ":" << input << endl;
        }
        ifs.close();
    }
    else {
        cout << "Khong the mo file" << endl;
    }
}