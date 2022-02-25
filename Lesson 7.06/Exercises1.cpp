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
	string data;
	Node* next;
};

typedef struct Node* Stack;

bool isEmpty(Stack head) {
	return head == nullptr;
}

Node* createNode(string data) {
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

void push(Stack& head, string data) {
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

string peek(Stack stack) {
	if (!isEmpty(stack)) {
		return stack->data;
	}
	else {
		cout << "Stack is empty.\n";
		return "";
	}
}

void splitWord(Stack& stack, string str) {
	string delim = " ";
	size_t pos = 0;
	while ((pos = str.find(delim)) != string::npos) {
		push(stack, str.substr(0, pos));
		str = str.substr(pos + 1);
	}
	push(stack, str);
}

void printResult(Stack& s) {
	while (!isEmpty(s)) {
		cout << peek(s) << " ";
		pop(s);
	}
}

int main() {
	string str;
	getline(cin, str);
	Stack stack = nullptr;
	splitWord(stack, str);
	printResult(stack);
}
