/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
 */

#include <iostream>

using namespace std;

#define SIZE 100 // tối đa 100 phần tử

int main()
{
    int numbers[SIZE]; // khai báo mảng nguyên tối đa SIZE phần tử
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "N INVALID" << endl;
    }
    else {
        size_t size = n;
        // đọc vào các phần tử của mảng:
        for (size_t i = 0; i < size; i++)
        {
            cin >> numbers[i];
        }
        // tìm min, max:
        int min = numbers[0];
        int max = numbers[0];
        for (size_t i = 0; i < size; i++)
        {
            if (numbers[i] > max) {
                max = numbers[i];
            }
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }
        if (min == max) {
            cout << "NOT AVAILABLE";
        }
        else {
            int min2 = max;
            int max2 = min;
            for (size_t i = 0; i < size; i++)
            {
                if (numbers[i] < min2 && numbers[i] != min) {
                    min2 = numbers[i];
                }
                if (numbers[i] > max2 && numbers[i] != max) {
                    max2 = numbers[i];
                }
            }
            cout << min2 << " " << max2;
        }
        cout << endl;
    }

    return 0;
}