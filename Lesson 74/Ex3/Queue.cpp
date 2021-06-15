//
//  Queue.cpp
//  Lesson74
//
//  Created by Branium on 14/06/2021.
//

//#include <iostream>
#include <string>
#include "Queue.hpp"
using namespace std;

int main() {
    Queue<int> queue(10); // tạo queue kiểu int tối đa 10 p.tử
    Queue<string> stringQueue(100); // tạo queue kiểu string tối đa 100 phần tử
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(100);
    // kiểm tra queue rỗng:
    if(queue.isEmpty()) {
        cout << "<== Queue rong ==>\n" << endl;
    }
    // kiểm tra queue đầy:
    if(queue.isFull()) {
        cout << "<== Queue day ==>\n";
    }
    // lấy phần tử ở đầu queue
    cout << "Phan tu dau queue: " << *queue.peek() << endl;
    // xoá phần tử đầu queue
    queue.dequeue();
    // kiểm tra số phần tử của queue
    cout << "So phan tu trong queue: " << queue.size() << endl;
    cout << "Phan tu dau queue: " << *queue.peek() << endl;
    cout << "Danh sach phan tu con lai trong queue: ";
    while(!queue.isEmpty()) {
        cout << *queue.peek() << " ";
        queue.dequeue();
    }
    // kiểm tra lại xem queue rỗng không
    if(queue.isEmpty()) {
        cout << "\n<== Queue rong ==>\n" << endl;
    }
    cout << endl;
    return 0;
}
