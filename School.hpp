#ifndef SCHOOL_HPP
#define SCHOOL_HPP

#include <vector>
#include <memory>
#include "Department.hpp"

class School {
private:
    std::vector<std::shared_ptr<Department>> departments;

public:
    void addDepartment(const std::shared_ptr<Department>& department);
    void displayDepartments() const;
};

#endif // SCHOOL_HPP
