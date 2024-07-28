#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP

#include <string>
#include <vector>
#include <memory>
#include "Person.hpp"

class Department {
private:
    std::string name;
    std::vector<std::shared_ptr<Person>> members;

public:
    Department(const std::string& name);
    
    void addMember(const std::shared_ptr<Person>& person);
    void displayMembers() const;
};

#endif // DEPARTMENT_HPP
