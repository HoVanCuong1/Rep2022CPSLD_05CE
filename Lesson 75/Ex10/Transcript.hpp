//
//  Transcript.hpp
//  Lesson75Exercises10
//
//  Created by Branium on 14/06/2021.
//

#ifndef Transcript_hpp
#define Transcript_hpp
template<class T, class V> class Transcript {
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

#endif /* Transcript_hpp */
