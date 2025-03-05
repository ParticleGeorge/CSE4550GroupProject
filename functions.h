#include <iostream>
#include <string>
#include <vector>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H


class Student {
private:

    std::string firstName, lastName;
    int age;

public:

    // getters
    std::string getFirstName() const;
    std::string getLastName() const;
    int getAge() const;

    // constructor declaration
    Student(const std::string& first, const std::string& last, const int& ageNumber);

    // function prototype
    void displayStudent() const;

};

// Function prototypes
void addStudent(std::vector<Student>& students);
void displayAllStudents(const std::vector<Student>& students);

#endif  
