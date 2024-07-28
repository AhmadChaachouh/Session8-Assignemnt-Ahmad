#ifndef PERSONFACTORY_HPP
#define PERSONFACTORY_HPP

#include <memory>
#include <string>
#include "Person.hpp"
#include "Student.hpp"
#include "Teacher.hpp"

class PersonFactory {
public:
    static std::shared_ptr<Person> createPerson(const std::string& type, const std::string& name, int age, const std::string& id);
};

#endif // PERSONFACTORY_HPP
