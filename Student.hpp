#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"

class Student : public Person, public IStudy {
private:
    std::string studentID;

public:
    Student(const std::string& name, int age, const std::string& studentID);

    void study() override;
    void displayInfo() const override;
};

#endif // STUDENT_HPP
