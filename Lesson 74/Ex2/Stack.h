//
//  Stack.h
//  Lesson74
//
//  Created by Branium on 14/06/2021.
//

#ifndef Stack_h
#define Stack_h
template<class T> class Stack {
    T* arr; // mảng để lưu các phần tử trong stack
    int N; // số phần tử tối đa được khởi tạo
    int currentSize; // số phần tử hiện thời
public:
    Stack() {
        currentSize = 0;
        N = 10;
        arr = new T[N];
    }
    
    Stack(int size) {
        currentSize = 0;
        this->N = size;
        arr = new T[size];
    }
    
    bool isEmpty() const { return currentSize == 0; }
    
    bool isFull() const { return currentSize == N; }
    
    int size() const { return currentSize; }
    
    void push(T data) {
        arr[currentSize++] = data;
    }
    
    void pop() {
        if(!isEmpty()) {
            --currentSize;
        } else {
            std::cout << "Stack rong.\n";
        }
    }
    
    T* peek() {
        if(!isEmpty()) {
            return &arr[currentSize - 1];
        } else {
            std::cout << "Stack rong.\n";
            return nullptr;
        }
    }
};

#endif /* Stack_h */
