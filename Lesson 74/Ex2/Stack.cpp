//
//  Stack.cpp
//  Lesson74
//
//  Created by Branium on 14/06/2021.
//

#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main() {
    Stack<int> stack(10); // tạo stack kiểu int tối đa 10 t.tử
    Stack<string> stringStack(100); // tạo stack kiểu string tối đa 100 phần tử
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(100);
    // kiểm tra stack rỗng:
    if(stack.isEmpty()) {
        cout << "<== Stack rong ==>\n" << endl;
    }
    // kiểm tra stack đầy:
    if(stack.isFull()) {
        cout << "<== Stack day ==>\n";
    }
    // lấy phần tử ở đầu stack
    cout << "Phan tu dau stack: " << *stack.peek() << endl;
    // pop phần tử đầu stack
    stack.pop();
    // kiểm tra số phần tử của stack
    cout << "So phan tu trong stack: " << stack.size() << endl;
    cout << "Phan tu dau stack: " << *stack.peek() << endl;
    cout << "Danh sach phan tu con lai trong stack: ";
    while(!stack.isEmpty()) {
        cout << *stack.peek() << " ";
        stack.pop();
    }
    // kiểm tra lại xem stack có rỗng không
    if(stack.isEmpty()) {
        cout << "\n<== Stack rong ==>\n" << endl;
    }
    cout << endl;
    return 0;
}
