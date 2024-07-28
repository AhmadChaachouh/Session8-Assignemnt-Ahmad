#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age);
    virtual ~Person() = default;

    virtual void displayInfo() const = 0;
};

class ITeach {
public:
    virtual void teach() = 0;
    virtual ~ITeach() = default;
};

class IStudy {
public:
    virtual void study() = 0;
    virtual ~IStudy() = default;
};

#endif // PERSON_HPP
