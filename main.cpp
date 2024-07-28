#include <iostream>
#include "School.hpp"
#include "Department.hpp"
#include "PersonFactory.hpp"

int main() {
    auto school = std::make_shared<School>();

    auto csDepartment = std::make_shared<Department>("Computer Science");
    auto mathDepartment = std::make_shared<Department>("Mathematics");

    auto student1 = PersonFactory::createPerson("student", "Alice", 20, "S123");
    auto student2 = PersonFactory::createPerson("student", "Bob", 21, "S456");
    auto teacher1 = PersonFactory::createPerson("teacher", "Dr. Smith", 45, "T789");
    auto teacher2 = PersonFactory::createPerson("teacher", "Dr. Jones", 50, "T101");

    csDepartment->addMember(student1);
    csDepartment->addMember(teacher1);
    mathDepartment->addMember(student2);
    mathDepartment->addMember(teacher2);

    school->addDepartment(csDepartment);
    school->addDepartment(mathDepartment);

    school->displayDepartments();

    return 0;
}
