#include <string>
#include <vector>

#ifndef EXAMPLE_H  
#define EXAMPLE_H

class Student {
    public:
        // constructor to initialize first and last name
        Student(const std::string& firstName, const std::string& lastName);
        
        // getter functions to retrieve student names
        std::string getFirstName() const;
        std::string getLastName() const;
    
    private:
        std::string firstName;
        std::string lastName;
    };
    
    class StudentAdd {
    public:
        // constructor to init to empty
        StudentAdd();
    
        // add student to vector
        void addStudent(const std::string& firstName, const std::string& lastName);
    
        // print students
        void printStudents() const;
    
    private:
        std::vector<Student> students;  // vector to store students
    };

#endif
