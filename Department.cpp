#include "Department.hpp"
#include <iostream>

Department::Department(const std::string& name) : name(name) {}

void Department::addMember(const std::shared_ptr<Person>& person) {
    members.push_back(person);
}

void Department::displayMembers() const {
    std::cout << "Department: " << name << std::endl;
    for (const auto& member : members) {
        member->displayInfo();
    }
}
