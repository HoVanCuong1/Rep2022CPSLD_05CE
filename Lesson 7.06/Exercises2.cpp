/**
 * @author Branium Academy
 * @see https://braniumacademy.net
 * @version 2022.02.25
 *
 */

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

typedef struct Node* Stack;

bool isEmpty(Stack head) {
	return head == nullptr;
}

Node* createNode(int data) {
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

void push(Stack& head, int data) {
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

int peek(Stack stack) {
	if (!isEmpty(stack)) {
		return stack->data;
	}
	else {
		cout << "Stack is empty.\n";
		return -1;
	}
}

bool symmetry(int* arr, int n) {
	int midIndex = (n % 2 == 0 ? n / 2 - 1 : n / 2);
	Stack s = nullptr;
	for (int i = 0; i <= midIndex; i++)
	{
		push(s, arr[i]);
	}
	for (int i = n / 2; i < n; i++)
	{
		if (peek(s) != arr[i]) {
			return false;
		}
		pop(s);
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (symmetry(arr, n)) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
