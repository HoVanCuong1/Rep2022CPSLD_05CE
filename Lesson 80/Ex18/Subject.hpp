/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */

#ifndef Subject_hpp
#define Subject_hpp
#include <iostream>
namespace Exercises10 {
    class Subject {
        friend std::ostream& operator << (std::ostream&, const Subject&);
        friend std::istream& operator >> (std::istream&, Subject&);
        char id[20]; // mã môn
        char name[40]; // tên môn học
        int lesson; // số tiết học
        int credit; // số tín chỉ
    public:
        Subject() {}
        Subject(std::string id) { setId(id); }
        Subject(std::string id, std::string name, int lesson, int credit);
        void setId(std::string id);
        void setName(std::string name);
        void setLesson(int lesson) { this->lesson = lesson; }
        void setCredit(int credit) { this->credit = credit; }
        std::string getId() const { return id; }
        std::string getName() const { return name; }
        int getCredit() const { return credit; }
        int getLesson() const { return lesson; }
        const bool operator == (const Subject&) const;
        const bool operator > (const Subject&) const;
    };

}
#endif /* Subject_hpp */
