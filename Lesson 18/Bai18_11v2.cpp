/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

// vẽ hình tim kích thước rộng x cao = 7 x 6
// cách 1: xét vị trí các dấu cách(thực hiện ở bản Bai18_11v1)
// cách 2: xét vị trí các dấu * (thực hiện trong bài này Bai18_11v2)
#include <iostream>
using namespace::std;

int main() {
    int height = 6;
    int width = 7;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if((i == 1 && j != 1 && j != 4 && j != 7)
               || (i == 2 || i == 3)
               || (i == 4 && j != 1 && j != 7)
               || (i == 5 && j >= 3 && j <= 5)
               || (i == 6 && j == 4)) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
