/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.06
 *
 */

#include <iostream>
#ifndef Student_hpp
#define Student_hpp

namespace Exercises8 {
    class Student {
        friend std::ostream& operator << (std::ostream&, const Student&);
        friend std::istream& operator >> (std::istream&, Student&);
        char id[20];
        char firstName[20];
        char lastName[20];
        char midName[20];
        char email[40];
        char phoneNumber[20];
    public:
        Student() {}
        Student(std::string id) { setId(id); }
        Student(std::string id, std::string firstName, std::string lastName,
            std::string midName, std::string email, std::string phoneNumber);
        void setId(std::string id);
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setMidName(std::string midName);
        void setEmail(std::string email);
        void setPhoneNumber(std::string phone);
        std::string getId() const { return id; }
        std::string getFirstName() const { return firstName; }
        std::string getLastName() const { return lastName; }
        std::string getMidname() const { return midName; }
        std::string getEmail() const { return email; }
        std::string getPhoneNumber() const { return phoneNumber; }
        std::string getFullName() const;
        const bool operator == (const Student&) const;
        const bool operator < (const Student&) const;
        const bool operator <= (const Student&) const;
    };
}

#endif /* Student_hpp */
