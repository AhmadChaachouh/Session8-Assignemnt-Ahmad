#include "PersonFactory.hpp"
#include <stdexcept>

std::shared_ptr<Person> PersonFactory::createPerson(const std::string& type, const std::string& name, int age, const std::string& id) {
    if (type == "student") {
        return std::make_shared<Student>(name, age, id);
    } else if (type == "teacher") {
        return std::make_shared<Teacher>(name, age, id);
    } else {
        throw std::invalid_argument("Unknown person type");
    }
}
