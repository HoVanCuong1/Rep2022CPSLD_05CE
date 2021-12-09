/**
 * @author Branium Academy
 * @see braniumacademy.net
 * @version 2021.12
 */

#include <iostream>
using namespace std;

int main() {
	float a, h;
	cin >> a >> h;
	(a < 0 || h < 0) ? cout << "INVALID INPUT" << endl :
		cout << 0.5 * a * h << endl;
}