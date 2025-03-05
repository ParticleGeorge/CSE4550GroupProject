#include "functions.h"
#include <iostream>

// dtudent constructor definition
Student::Student(const std::string& firstName, const std::string& lastName)
    : firstName(firstName), lastName(lastName) {}

// retrieve for print
std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getLastName() const {
    return lastName;
}

// StudentAdd constructor definition
StudentAdd::StudentAdd() {}

// add vector
void StudentAdd::addStudent(const std::string& firstName, const std::string& lastName) {
    students.push_back(Student(firstName, lastName));
    std::cout << "Student added: " << firstName << " " << lastName << "\n";
    std::cout << "Age:\n";
    std::cout << "Sex:\n";
    std::cout << "Major:\n";
    std::cout << "Address:\n";
}

// print the vector
void StudentAdd::printStudents() const {
    std::cout << "List of Students:\n";

    // using auto if it doesnt know the type
    for (const auto& student : students) {
        std::cout << student.getFirstName() << " " << student.getLastName() << "\n";
    }
}