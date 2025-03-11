#include "functions.h"

// getters for displayStudent
std::string Student::getFirstName() const { return firstName; }
std::string Student::getLastName() const { return lastName; }
int Student::getAge() const { return age; }
std::string Student::getSex() const { return sex; }
std::string Student::getMajor() const { return major; }
std::string Student::getCounty() const { return county; }

// constructor definition
Student::Student(const std::string& first = "Unknown", const std::string& last = "Unknown", const int& ageNumber = 0,
                 const std::string& sexType = "Uknown", const std::string& majorType = "Uknown", const std::string& countyArea = "Uknown", 
                 const int studentIDNumber = 0)
    : firstName(first), lastName(last), age(ageNumber), sex(sexType), major(majorType), county(countyArea) {}


// display student details
void Student::displayStudent() const {
    std::cout << "Student Name: " << getFirstName() << " " << getLastName() << std::endl;
    std::cout << "Age: " << getAge() << std::endl;
    std::cout << "Sex: " << getSex() << std::endl;
    std::cout << "Major: " << getMajor() << std::endl;
    std::cout << "County: " << getCounty() << std::endl;
    std::cout << "Student ID Number: " << studentID << std::endl;
}

// add student to vector
void addStudent(std::vector<Student>& students) {
    std::string firstName, lastName, sex, major, county;
    int age, studentIDNumb = 10000000;
    
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter sex: ";
    std::cin >> sex;
    std::cout << "Enter major: ";
    std::cin >> major;
    std::cout << "Enter County: ";
    std::cin >> county;
    
    std::cout << "Generating Student ID....\n";
    
    // creating student ID
    studentIDNumb++;

    std::cout << "Student ID: " << studentIDNumb << std::endl;

    students.push_back(Student(firstName, lastName, age, sex, major, county, studentIDNumb));
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

//delete student from vector
void deleteStudent(std::vector<Student>& students) {
    /* todo: need to add a way to delete any number of students without using
    specific place in vector.
    ideas: by name, studentID
    Do we need to update student ID's as students get removed?*/

    std::cout << "Student(s) deleted successfully.";
}