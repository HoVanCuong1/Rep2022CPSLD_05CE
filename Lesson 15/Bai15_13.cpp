#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "INVALID" << endl;
	}
	else {
		int i = n;
		for (; i > 9; i /= 10)
		{
		} // sau khi vòng lặp kết thúc, i sẽ là giá trị cần tìm
		cout << i << endl;
	}
	return 0;
}
