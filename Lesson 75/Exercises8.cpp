//
//  Exercises8.cpp
//  Lesson75
//
//  Created by Branium on 13/06/2021.
//

#include <iostream>
using namespace std;

class Student {
    friend ostream& operator << (ostream&, const Student&);
    friend istream& operator >> (istream&, Student&);
    string id;
    string name;
public:
    Student() {}
    Student(string id, string name): name(name), id(id) {}
    void setName(string name) { this->name = name; }
    void setId(string id) { this->id = id; }
    string getId() const { return id; }
    string getName() const { return name; }
    bool operator < (const Student& other) const {
        return id.compare(other.id) < 0;
    }
};

ostream& operator << (ostream& os, const Student& student) {
    os << "Id: " << student.id << ", name: " << student.name;
    return os;
}

istream& operator >> (istream& is, Student& student) {
    cout << "Nhap ten sinh vien: ";
    is >> student.name;
    cout << "Nhap ma sinh vien: ";
    is >> student.id;
    return is;
}

// hàm nhập số phần tử và các phần tử mảng
template<class T> void getArrayElements(T* arr, int& size) {
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "Phan tu thu " << i << ": ";
        cin >> arr[i];
    }
}
// hàm hiển thị các phần tử mảng
template<class T> void showArrayElements(T* arr, int& size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[100];
    double doubleArr[100];
    Student students[100];
    int intSize = 0; // số phần tử mảng int
    int doubleSize = 0; // số phần tử mảng double
    int studentSize = 0; // số phần tử mảng student
    
    // nhập vào các phần tử cho mảng
    cout << "Nhap mang int: \n";
    getArrayElements(intArr, intSize);
    cout << "Nhap mang double: \n";
    getArrayElements(doubleArr, doubleSize);
    cout << "Nhap mang Student: \n";
    getArrayElements(students, studentSize);
    
    // hiển thị các phần tử trong mảng
    cout << "Cac phan tu mang int: \n";
    showArrayElements(intArr, intSize);
    cout << "Cac phan tu mang double: \n";
    showArrayElements(doubleArr, doubleSize);
    cout << "Cac phan tu mang student: \n";
    showArrayElements(students, studentSize);
    
    return 0;
}
