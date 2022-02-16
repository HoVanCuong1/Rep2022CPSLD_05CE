/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
	const float PI = 3.14;
	float r;
	cin >> r;
	r < 0 ? cout << "ERROR" << endl :
		cout << 2 * PI * r << " " << PI * r * r << endl;
}