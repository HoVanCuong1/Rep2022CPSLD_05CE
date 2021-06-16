/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 * 
 */

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
    // nạp chồng toán tử ==
    bool operator == (const Student& other) {
        return id.compare(other.id) == 0;
    }
};

ostream& operator << (ostream& os, const Student& student) {
    os << "Id: " << student.id << ", name: " << student.name << endl;
    return os;
}

istream& operator >> (istream& is, Student& student) {
    cout << "Nhap ten sinh vien: ";
    is >> student.name;
    cout << "Nhap ma sinh vien: ";
    is >> student.id;
    return is;
}
// hàm tìm kiếm
template<class T> int findX(T *arr, T key, const int size) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == key) { // neu tim thay, return i
            return i;
        }
    }
    return -1;
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
    int intArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 9};
    double doubleArr[10] = {1.25, 3.5, 6.75, 4.2, 5.9, 9.0, 8.75, 1.43, 6.23, 0.53};
    Student students[100];
    int intSize = 10; // số phần tử mảng int
    int doubleSize = 10; // số phần tử mảng double
    int studentSize = 4; // số phần tử mảng student
    students[0] = *(new Student("B25DCCN100", "Nam"));
    students[1] = *(new Student("B25DCCN130", "Hoang"));
    students[2] = *(new Student("B25DCCN109", "Long"));
    students[3] = *(new Student("B25DCCN190", "Huong"));
    
    // hiển thị các phần tử trong mảng
    cout << "Cac phan tu mang int: \n";
    showArrayElements(intArr, intSize);
    cout << "Cac phan tu mang double: \n";
    showArrayElements(doubleArr, doubleSize);
    cout << "Cac phan tu mang student: \n";
    showArrayElements(students, studentSize);
    int intKey;
    double doubleKey;
    string studentId;
    // nhap vao cac key can tim kiem
    cout << "Nhap vao so nguyen can tim: ";
    cin >> intKey;
    int resultIndex = findX(intArr, intKey, intSize);
    if(resultIndex != -1) {
        cout << "Tim thay " << intKey << " tai vi tri " << resultIndex << endl;
    } else {
        cout << "Khong tim thay " << intKey << " trong mang\n";
    }
    // tim so thuc
    cout << "Nhap vao so thuc can tim: ";
    cin >> doubleKey;
    resultIndex = findX(doubleArr, doubleKey, doubleSize);
    if(resultIndex != -1) {
        cout << "Tim thay " << doubleKey << " tai vi tri " << resultIndex << endl;
    } else {
        cout << "Khong tim thay " << doubleKey << " trong mang\n";
    }
    // tim sinh vien theo ma sinh vien
    cout << "Nhap vao ma sinh vien can tim: ";
    cin >> studentId;
    Student s(studentId, "");
    resultIndex = findX(students, s, studentSize);
    if(resultIndex != -1) {
        cout << "Tim thay sinh vien ma \"" << studentId << "\" tai vi tri " << resultIndex << endl;
    } else {
        cout << "Khong tim thay sinh vien ma \"" << studentId << "\" trong mang\n";
    }
    return 0;
}

