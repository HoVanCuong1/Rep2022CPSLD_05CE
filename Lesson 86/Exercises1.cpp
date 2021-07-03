/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class DivideByZeroException : public runtime_error {
public:
	DivideByZeroException() : runtime_error("Divide by zero.") {}
};

double divide(int a, int b) {
	if (b == 0) {
		throw DivideByZeroException();
	}
	return 1.0 * a / b;
}

int main()
{
	int a = 15;
	int b = 0;
	try {
		double result = divide(a, b);
		cout << a << " / " << b << " = " << result << endl;
	}
	catch (DivideByZeroException& e) {
		cout << e.what() << endl;
	}
	cout << "Sau khoi xu ly ngoai le..." << endl;

}
