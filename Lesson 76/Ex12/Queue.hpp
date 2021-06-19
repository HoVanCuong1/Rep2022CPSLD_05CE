/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 * 
 */

#ifndef Queue_hpp
#define Queue_hpp
#include <iostream>
namespace Exercises12 {
    template<class T> class Queue {
        T* arr; // mảng lưu các phần tử trong queue
        int N; // số phần tử tối đa được khởi tạo cho queue
        int currentSize; // số phần tử hiện thời
    public:
        Queue() {
            currentSize = 0;
            N = 10;
            arr = new T[N];
        }

        Queue(int size) {
            currentSize = 0;
            this->N = size;
            arr = new T[N];
        }

        bool isEmpty() const { return currentSize == 0; }

        bool isFull() const { return currentSize == N; }

        int size() const { return currentSize; }

        void enqueue(T data) {
            arr[currentSize++] = data;
        }

        void dequeue() {
            if (!isEmpty()) {
                for (int i = 0; i < currentSize - 1; i++) {
                    arr[i] = arr[i] + 1;
                }
                currentSize--;
            }
            else {
                std::cout << "Queue rong.\n";
            }
        }

        T* peek() {
            if (!isEmpty()) {
                return &arr[0];
            }
            else {
                std::cout << "Queue rong.\n";
                return nullptr;
            }
        }
    };
}

#endif /* Queue_hpp */
