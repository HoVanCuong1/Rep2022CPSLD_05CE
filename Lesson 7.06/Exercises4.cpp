/**
 * @author Branium Academy
 * @see https://braniumacademy.net
 * @version 2022.02.25
 *
 */

#include <iostream>
#include <string>
using namespace std;

struct Node {
	double data;
	Node* next;
};

typedef struct Node* Stack;

bool isEmpty(Stack head) {
	return head == nullptr;
}

Node* createNode(double data) {
	Node* p = new Node();
	if (p == nullptr) {
		return nullptr;
	}
	else {
		p->data = data;
		p->next = nullptr;
		return p;
	}
}

void push(Stack& head, double data) {
	Node* p = createNode(data);
	if (p != nullptr) {
		if (isEmpty(head)) {
			head = p;
		}
		else {
			p->next = head;
			head = p;
		}
	}
	else {
		cout << "Cannot create new node.\n";
	}
}

void pop(Stack& stack) {
	if (!isEmpty(stack)) {
		Node* p = stack;
		stack = stack->next;
		delete p;
	}
}

double peek(Stack stack) {
	if (!isEmpty(stack)) {
		return stack->data;
	}
	else {
		cout << "Stack is empty.\n";
		return 0;
	}
}

double calculateResult(double a, double b, double c) {
	double result = 0;
	if (c == '+') {
		result = a + b;
	}
	else if (c == '-') {
		result = a - b;
	}
	else if (c == '*') {
		result = a * b;
	}
	else if (c == '/') {
		result = a / b;
	}
	else if (c == '^') {
		result = pow(a, b);
	}
	return result;
}

double executePostfix(string str) {
	double result = 0;
	Stack stack = nullptr;
	for (int i = 0; i < (int)str.length(); i++) {
		if (str[i] == ' ') {
			continue;
		} // nếu kí tự tại vị trí i là toán tử
		else if (str[i] > '9' || str[i] < '0') {
			double b = peek(stack);
			pop(stack);
			double a = peek(stack);
			pop(stack);
			result = calculateResult(a, b, str[i]);
			push(stack, result);
		}
		else { // trường hợp còn lại, kí tự tại vị trí i là toán hạng
			double number = 0;
			double c = str[i] - '0';
			while (c >= 0 && c <= 9) {
				number = number * 10 + c;
				i++;
				c = str[i] - '0';
			}
			i--;
			push(stack, number);
		}
	}
	return peek(stack);
}


int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string str;
		getline(cin, str);
		cout << executePostfix(str) << endl;
	}
}
