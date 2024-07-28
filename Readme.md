# School Management System

## Project Overview

This project is a simple School Management System implemented in C++ using advanced Object-Oriented Programming (OOP) concepts. The system models a school with students, teachers, and departments. Each entity has its own specific attributes and behaviors, demonstrating key OOP principles like encapsulation, inheritance, polymorphism, and abstraction. The project also incorporates the Factory design pattern to create instances of `Person` objects.

## Key Concepts and Design Patterns

### Object-Oriented Programming Concepts

1. **Encapsulation:**
   - Each class has private member variables that are accessed and modified through public methods.

2. **Inheritance:**
   - `Student` and `Teacher` classes inherit from the `Person` base class.
   - Interface classes `ITeach` and `IStudy` are implemented by `Teacher` and `Student` respectively.

3. **Polymorphism:**
   - Virtual functions allow for dynamic binding and runtime behavior changes. 
   - `Person` class defines a pure virtual function `displayInfo()`, which is overridden by `Student` and `Teacher`.

4. **Abstraction:**
   - Abstract base classes (`Person`, `ITeach`, `IStudy`) define common interfaces for derived classes.

### Design Patterns

1. **Factory Pattern:**
   - The `PersonFactory` class is used to create instances of `Person` objects (either `Student` or `Teacher`) based on the specified type.

## Project Structure

├── Department.cpp  <br>
├── Department.hpp  <br>
├── Person.cpp      <br>
├── Person.hpp      <br>
├── PersonFactory.cpp       <br>
├── PersonFactory.hpp       <br>
├── README.md       <br>
├── School.cpp      <br>
├── School.hpp      <br>
├── Student.cpp     <br>
├── Student.hpp     <br>
├── Teacher.cpp     <br>
├── Teacher.hpp     <br>
└── main.cpp        <br>


### Class Descriptions

- **Person:** Abstract base class representing a person with a name and age.
- **Student:** Derived class from `Person`, implementing the `IStudy` interface.
- **Teacher:** Derived class from `Person`, implementing the `ITeach` interface.
- **Department:** Represents a department within the school, containing a collection of `Person` objects.
- **School:** Represents the school, containing a collection of `Department` objects.
- **PersonFactory:** Factory class to create `Student` or `Teacher` objects.

## How to Clone and Build the Project

### Prerequisites

- A C++ compiler (e.g., g++)
- Git

### Cloning the Repository

To clone the repository, use the following command:

```sh
git clone git@github.com:AhmadChaachouh/Session8-Assignemnt-Ahmad.git
```
### Building the project

Navigate to the project directory and use the following command

```sh
g++ main.cpp Person.cpp Student.cpp Teacher.cpp Department.cpp School.cpp PersonFactory.cpp -o SchoolManagementSystem

```

### Running the project 

After successfully compiling the project, you can run the executable:

```sh
./SchoolManagementSystem

```

## Conclusion

This School Management System project showcases the application of advanced C++ OOP concepts and design patterns in a practical scenario. By following the instructions above, you should be able to clone, build, and run the project, gaining insight into how to structure and implement a C++ project using best practices.



