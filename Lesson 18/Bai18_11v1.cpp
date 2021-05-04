// vẽ hình tim kích thước rộng x cao = 7 x 6
// cách 1: xét vị trí các dấu cách(thực hiện trong bài này)
// cách 2: xét vị trí các dấu *
#include <iostream>

using namespace::std;

int main() {
    int height = 6;
    int width = 7;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if(((i != 2 && i != 3) && (j == 1 || j == 7))
               || (i == 1 && j == 4)
               || (i >= 5 && (j == 2 || j == 6))
               || (i == 6 && (j == 3 || j == 5))) {
                cout << "   ";
            } else {
                cout << " * ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
