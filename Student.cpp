#include "Student.hpp"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& studentID)
    : Person(name, age), studentID(studentID) {}

void Student::study() {
    std::cout << name << " is studying.\n";
}

void Student::displayInfo() const {
    std::cout << "Student Name: " << name << ", Age: " << age << ", ID: " << studentID << std::endl;
}
