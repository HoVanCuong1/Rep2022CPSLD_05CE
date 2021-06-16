//
//  Transcript.hpp
//  Lesson75Exercises10
//
//  Created by Branium on 14/06/2021.
//

#ifndef Transcript_hpp
#define Transcript_hpp
#include <iostream>

template<class T, class V> class Transcript;
template<class T, class V> std::istream& operator >> (std::istream&, Transcript<T, V>&);
template<class T, class V> std::ostream& operator << (std::ostream&, const Transcript<T, V>&);

template<class T, class V> class Transcript {
    friend std::istream& operator >> <> (std::istream&, Transcript<T, V>&);
    friend std::ostream& operator << <> (std::ostream&, const Transcript<T, V>&);
    T student;          // thông tin sinh viên
    V subject;          // thông tin môn học
    float scoreLevel1;  // điểm hệ số 1
    float scoreLevel2;  // điểm hệ số 2
    float scoreLevel3;  // điểm hệ số 3
    float gpa;          // điểm TB
public:
    Transcript() {}
    
    Transcript(T student, V subject): student(student), subject(subject) { }
    
    T getStudent() const { return student; }
    
    V getSubject() const { return subject; }
    
    float getScoreLevel1() const { return scoreLevel1; }
    
    float getScoreLevel2() const { return scoreLevel2; }
    
    float getScoreLevel3() const { return scoreLevel3; }
    
    float getGpa() const { return gpa; }
    
    void setStudent(T student) { this->student = student; }
    
    void setSubject(V subject) { this->subject = subject; }
    
    void setScoreLevel1(float score) { scoreLevel1 = score; }
    
    void setScoreLevel2(float score) { scoreLevel2 = score; }
    
    void setScoreLevel3(float score) { scoreLevel3 = score; }
    
    void setScoreLevel4(float score) { gpa = score; }
};

template<class T, class V> std::istream& operator >> (std::istream& is, Transcript<T, V>& tran) {
    std::cout << "Nhap diem he so 1: ";
    is >> tran.scoreLevel1;
    std::cout << "Nhap diem he so 2: ";
    is >> tran.scoreLevel2;
    std::cout << "Nhap diem he so 3: ";
    is >> tran.scoreLevel3;
    return is;
}

template<class T, class V> std::ostream& operator << (std::ostream& os, const Transcript<T, V>& tran) {
    std::cout << "Tey: " << tran.key << " - Value: " << tran.value << std::endl;
    return os;
}

#endif /* Transcript_hpp */
