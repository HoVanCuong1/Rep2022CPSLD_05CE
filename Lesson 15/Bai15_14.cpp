/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "INVALID" << endl;
	}
	else {
		int product = 1; // giả định ban đầu tích = 1
		for (int i = n; i > 0; i /= 10)
		{
			product *= i % 10; // i%10 sẽ lấy được phần đơn vị của i
		}
		cout << product << endl;
	}
	return 0;
}
