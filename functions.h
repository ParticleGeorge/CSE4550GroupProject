#include <iostream>
#include <string>
#include <vector>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H


class Student {
private:

    std::string firstName, lastName, sex, major, county;
    int age;
    int studentID = 10000000;


public:

    // getters
    std::string getFirstName() const, getLastName() const, getSex() const, getMajor() const,
                getCounty() const;
    int getAge() const;

    // constructor declaration
    Student(const std::string& first, const std::string& last, const int& ageNumber, const std::string& sexType,
            const std::string& majorType, const std::string& countyArea, int studentIDNumber);

    // function prototype
    void displayStudent() const;

};

// Function prototypes
void addStudent(std::vector<Student>& students);
void displayAllStudents(const std::vector<Student>& students);

#endif  
