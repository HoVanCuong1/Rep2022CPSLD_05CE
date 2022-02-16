/**
 * @author Branium Academy
 * @version 2022.02.16
 * @see https://braniumacademy.net
 */ 

#include <iostream>
using namespace std;

int main() {
	float a, h;
	cin >> a >> h;
	(a < 0 || h < 0) ? cout << "INVALID INPUT" << endl :
		cout << 0.5 * a * h << endl;
}