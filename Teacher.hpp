#ifndef TEACHER_HPP
#define TEACHER_HPP

#include "Person.hpp"

class Teacher : public Person, public ITeach {
private:
    std::string employeeID;

public:
    Teacher(const std::string& name, int age, const std::string& employeeID);

    void teach() override;
    void displayInfo() const override;
};

#endif // TEACHER_HPP
