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
	char data;
	Node* next;
};

typedef struct Node* Stack;

bool isEmpty(Stack head) {
	return head == nullptr;
}

Node* createNode(char data) {
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

void push(Stack& head, char data) {
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

char peek(Stack stack) {
	if (!isEmpty(stack)) {
		return stack->data;
	}
	else {
		cout << "Stack is empty.\n";
		return ' ';
	}
}
int priorityLevel(char c) {
	if (c == '+' || c == '-') {
		return 1;
	}
	else if (c == '/' || c == '*') {
		return 2;
	}
	else if (c == '^') {
		return 3;
	}
	else {
		return 0;
	}
}

void infixToPostfix(string input) {
	Stack stack = nullptr;
	int size = input.length();
	for (int i = 0; i < size; i++)
	{
		if (input[i] == ' ') {
			continue;
		}
		else {
			if (input[i] == '+' || input[i] == '-' ||
				input[i] == '*' || input[i] == '/' || input[i] == '^') {
				while (!isEmpty(stack) &&
					priorityLevel(input[i]) <= priorityLevel(peek(stack))) {
					cout << peek(stack) << ' ';
					pop(stack);
				}
				push(stack, input[i]);
			}
			else if (input[i] == ')') {
				char op = peek(stack);
				pop(stack);
				while (!(op == '(')) {
					cout << op << ' ';
					op = peek(stack);
					pop(stack);
				}
			}
			else if (input[i] == '(') {
				push(stack, input[i]);
			}
			else {
				int number = 0;
				int c = input[i] - 48;
				while (c >= 0 && c <= 9) {
					i++;
					number = number * 10 + c;
					c = input[i] - 48;
				}
				i--;
				cout << number << " ";
			}
		}
	}
	// pop cac phan tu con lai cua stack
	while (!isEmpty(stack)) {
		char op = peek(stack);
		pop(stack);
		if (op != '(') {
			cout << op << ' ';
		}
	}
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string str;
		getline(cin, str);
		infixToPostfix(str);
		cout << endl;
	}
}
