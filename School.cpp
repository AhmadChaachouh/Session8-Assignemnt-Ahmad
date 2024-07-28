#include "School.hpp"
#include <iostream>

void School::addDepartment(const std::shared_ptr<Department>& department) {
    departments.push_back(department);
}

void School::displayDepartments() const {
    for (const auto& department : departments) {
        department->displayMembers();
    }
}
