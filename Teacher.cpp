#include "Teacher.hpp"
#include <iostream>

Teacher::Teacher(const std::string& name, int age, const std::string& employeeID)
    : Person(name, age), employeeID(employeeID) {}

void Teacher::teach() {
    std::cout << name << " is teaching.\n";
}

void Teacher::displayInfo() const {
    std::cout << "Teacher Name: " << name << ", Age: " << age << ", Employee ID: " << employeeID << std::endl;
}
