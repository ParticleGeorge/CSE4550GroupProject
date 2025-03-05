#include "functions.h"

// getters for displayStudent
std::string Student::getFirstName() const { return firstName; }
std::string Student::getLastName() const { return lastName; }
int Student::getAge() const { return get; }

// constructor definition
Student::Student(const std::string& first = "Unknown", const std::string& last = "Unknown", const int& ageNumber = 0)
    : firstName(first), lastName(last), age(ageNumber){}

// display student details
void Student::displayStudent() const {
    std::cout << "Student Name: " << getFirstName << " " << getLastName << std::endl;
    std::cout << "Age: " << getAge << std::endl;
}

// add student to vector
void addStudent(std::vector<Student>& students) {
    std::string firstName, lastName;
    int age;
    
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    std::cout << "Enter age: ";
    std::cin >> age;
    students.push_back(Student(firstName, lastName, age));
    std::cout << "Student added successfully!\n";
}

// dislpay student vector 
void displayAllStudents(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students found.\n";
        return;
    }

    // auto to determine type
    for (const auto& student : students) {
        student.displayStudent();
    }
}