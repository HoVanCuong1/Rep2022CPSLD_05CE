/**
 * @author Branium Academy
 * @see braniumacademy.net
 * @version 2021.12
 */

#include <iostream>
using namespace std;

int main() {
	float a, b;
	cin >> a >> b;
	(a < 0 || b < 0) ? cout << "INVALID INPUT" << endl :
		cout << 2 * (a + b) << " " << a * b << endl;
}