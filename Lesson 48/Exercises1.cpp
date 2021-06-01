/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.05
 */

#include <iostream>
using namespace std;

enum class Calculator { EXIT, ADD, SUB, MUL, DIV };

void showSeparator() {
	cout << "================================\n";
}

Calculator convertFunction(int input) {
	switch (input)
	{
	case 1:
		return Calculator::ADD;
	case 2:
		return Calculator::SUB;
	case 3:
		return Calculator::MUL;
	case 4:
		return Calculator::DIV;
	default:
		return Calculator::ADD;
	}
}

int main() {
	int choice;
	int a, b;
	do {
		cout << "========== CALCULATOR ==========\n";
		cout << "1. Cong hai so nguyen\n";
		cout << "2. Tru hai so nguyen\n";
		cout << "3. Nhan hai so nguyen\n";
		cout << "4. Chia hai so nguyen\n";
		cout << "0. Thoat\n";
		cout << "Ban chon? ";
		cin >> choice;
		Calculator function = convertFunction(choice);

		switch (function) {
		case Calculator::EXIT:
			showSeparator();
			cout << "Xin chao va hen gap lai" << endl;
			break;
		case Calculator::ADD: {
			showSeparator();
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << a << " + " << b << " = " << (a + b) << endl;
			break;
		}
		case Calculator::SUB: {
			showSeparator();
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << a << " - " << b << " = " << (a - b) << endl;
			break;
		}
		case Calculator::MUL: {
			showSeparator();
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << a << " * " << b << " = " << (a * b) << endl;
			break;
		}
		case Calculator::DIV: {
			showSeparator();
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << a << " / " << b << " = " << 1.0 * a / b << endl;
			break;
		}
		default:
			showSeparator();
			cout << "Sai chuc nang. Vui long chon lai!\n";
			break;
		}
		
	} while (choice != 0);

	return 0;
}