/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
	float a, b;
	cin >> a >> b;
	(a < 0 || b < 0) ? cout << "INVALID INPUT" << endl :
		cout << 2 * (a + b) << " " << a * b << endl;
}