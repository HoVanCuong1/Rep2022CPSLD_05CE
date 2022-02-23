/**
*@author Branium Academy
*@version 2022.02.23
*@see https://braniumacademy.net
*/

#include <iostream>
#include <string>
using namespace std;

struct Node {
	string data;
	int count;
	Node* next;
};

typedef struct Node* LinkedList;

// khoi tao
void init(LinkedList& head) {
	head = nullptr;
}

// tao node tu data cho truoc
Node* createNode(string data) {
	Node* p = new Node();
	if (p == nullptr) {
		return nullptr;
	}
	p->count = 1;
	p->data = data;
	p->next = nullptr;
	return p;
}

// chèn vào cuối danh sách liên kết đơn
bool insertLast(LinkedList& head, string data) {
	Node* p = createNode(data);
	if (p != nullptr) {
		if (head == nullptr) {
			head = p;
		}
		else {
			bool isExisted = false;
			Node* current = head; // node hiện tại
			Node* prev = current; // node trước node hiện tại
			while (current != nullptr) { // lặp đến khi gặp null hoặc phát hiện node có data cần tìm
				if (current->data.compare(data) == 0) {
					current->count++;
					isExisted = true;
					break;
				}
				prev = current;
				current = current->next;
			}
			if (!isExisted) {
				prev->next = p; // lúc này prev là node cuối trong danh sách hiện tại, cho nó trỏ tới p
			}
		}
		return true;
	}
	else {
		cout << "Cannot create new node\n";
		return false;
	}
}

// hien thi cac node co trong danh sach lien ket
void displayNodes(LinkedList head) {
	if (head == NULL) {
		cout << "Danh sach rong\n";
	}
	else {
		Node* p = head;
		while (p != nullptr) {
			cout << "'" << p->data << "'(" << p->count << ") -> ";
			p = p->next;
		}
		cout << "nullptr\n";
	}
}

int findX(LinkedList head, string x) {
	for (Node* p = head; p != nullptr; p = p->next) {
		if (p->data.compare(x) == 0) {
			return p->count;
		}
	}
	return -1;
}

void splitAndInsert(LinkedList& head, string str) {
	string delim = " ";
	size_t pos = 0;
	while ((pos = str.find(delim)) != string::npos) {
		string word = str.substr(0, pos);
		insertLast(head, word);
		str = str.substr(pos + 1);
	}
	insertLast(head, str);
}

int main() {
	string inputStr;
	LinkedList list;
	init(list);
	cout << "Nhap vao mot chuoi ki tu bat ky gom nhieu tu: ";
	getline(cin, inputStr);
	splitAndInsert(list, inputStr);
	cout << "Cac tu trong danh sach:\n";
	displayNodes(list);
	cout << "Nhap tu can tim: ";
	string key;
	cin >> key;
	cout << "So lan xuat hien cua " << key << " trong danh sach: " << findX(list, key) << endl;
}