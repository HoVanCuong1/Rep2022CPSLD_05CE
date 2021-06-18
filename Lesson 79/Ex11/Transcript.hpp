/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */

#ifndef Transcript_hpp
#define Transcript_hpp
#include <iostream>
#include <iomanip>
using std::left;
using std::setw;
using std::istream;
using std::ostream;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

namespace Exercises10 {
    template<class T, class V> class Transcript;
    template<class T, class V> istream& operator >> (istream&, Transcript<T, V>&);
    template<class T, class V> ostream& operator << (ostream&, const Transcript<T, V>&);

    template<class T, class V> class Transcript {
        friend istream& operator >> <> (istream&, Transcript<T, V>&);
        friend ostream& operator << <> (ostream&, const Transcript<T, V>&);
        T student;          // thông tin sinh viên
        V subject;          // thông tin môn học
        float scoreLevel1;  // điểm hệ số 1
        float scoreLevel2;  // điểm hệ số 2
        float scoreLevel3;  // điểm hệ số 3
        float gpa;          // điểm TB
    public:
        Transcript() {}

        Transcript(T student, V subject) : student(student), subject(subject) { }

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

        void calculateGpa() {
            gpa = (scoreLevel1 + 2 * scoreLevel2 + 7 * scoreLevel3) / 10;
        }
    };

    template<class T, class V> istream& operator >> (istream& is, Transcript<T, V>& tran) {
        cout << "Nhap diem he so 1: ";
        is >> tran.scoreLevel1;
        cout << "Nhap diem he so 2: ";
        is >> tran.scoreLevel2;
        cout << "Nhap diem he so 3: ";
        is >> tran.scoreLevel3;
        return is;
    }

    template<class T, class V> ostream& operator << (ostream& os, const Transcript<T, V>& tran) {
        os << left << fixed << setw(15) << tran.getStudent().getId() << setw(25) << tran.getStudent().getFullName()
            << setw(15) << tran.getSubject().getId() << setw(25) << tran.getSubject().getName()
            << setw(10) << setprecision(2) << tran.getScoreLevel1() << setw(10) << setprecision(2) << tran.getScoreLevel2() << setw(10)
            << setprecision(2) << tran.getScoreLevel3() << setw(10) << setprecision(2) << tran.gpa << endl;
        return os;
    }

}

#endif /* Transcript_hpp */
