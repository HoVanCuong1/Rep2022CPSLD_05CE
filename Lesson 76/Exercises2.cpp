/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 * 
 */

#include <iostream>
using namespace std;

namespace Exercises2 {

    class Student {
        friend ostream& operator << (ostream&, const Student&);
        string id;
        string name;
    public:
        Student() {}
        Student(string id, string name) : name(name), id(id) {}
        void setName(string name) { this->name = name; }
        void setId(string id) { this->id = id; }
        string getId() const { return id; }
        string getName() const { return name; }
        bool operator < (const Student& other) const {
            return id.compare(other.id) < 0;
        }
    };

    ostream& operator << (ostream& os, const Student& student) {
        os << "Id: " << student.id << ", name: " << student.name << endl;
        return os;
    }

    template<class T> T findMin(T* arr, const int size) {
        T min = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }
}


int main() {
    using namespace Exercises2;
    // test kieu int
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // test string
    string names[10] = { "Loan", "Linh", "Huong", "Phuong", "Hoa", "Lan", "Nam", "Khanh", "Trang", "Nhung" };
    // test Student
    Student students[4];
    Student s1("B25DCCN103", "Hung");
    Student s2("B25DCCN100", "Trung");
    Student s3("B25DCCN102", "Linh");
    Student s4("B25DCCN101", "Huong");
    students[0] = s1;
    students[1] = s2;
    students[2] = s3;
    students[3] = s4;
    
    int n = 10;
    string minName = findMin(names, n); // ten dung dau trong bang chu cai
    int minArrayElement = findMin(arr, n); // gia tri nho nhat trong mang
    Student minStudent = findMin(students, 4); // student co id nho nhat
    cout << "Min array value: " << minArrayElement << endl;
    cout << "Min name in string array: " << minName << endl;
    cout << "Min student in student array: " << minStudent << endl;
    
    return 0;
}
