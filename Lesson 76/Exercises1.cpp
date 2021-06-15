/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 * 
 */

#include <iostream>
using namespace std;

namespace Exercises1 {
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
        bool operator > (const Student& other) const {
            return id.compare(other.id) > 0;
        }
    };

    ostream& operator << (ostream& os, const Student& student) {
        os << "Id: " << student.id << ", name: " << student.name << endl;
        return os;
    }

    template<class T> T findMax(T* arr, const int size) {
        T max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
}


int main() {
    using namespace Exercises1;
    const int n = 10;
    // test kieu int
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    string names[n] = { "Loan", "Linh", "Huong", "Phuong", "Hoa", "Lan", "Nam", "Khanh", "Trang", "Nhung" };
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
    
    string maxName = findMax(names, n); // ten dung sau cung theo thu tu abc
    int maxArrayElement = findMax(arr, n); // phan tu co gia tri lon nhat
    Student maxStudent = findMax(students, 4); // sv co ma lon nhat
    cout << "Max array value: " << maxArrayElement << endl;
    cout << "Max name in string array: " << maxName << endl;
    cout << "Max student: " << maxStudent << endl;
    
    return 0;
}
