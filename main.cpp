#include <iostream>
#include <vector>
#include <string>
#include "functions.h"

int main () {
    std::string choice;  // change to string to allow 'q' input
    StudentAdd studentDefault;
    std::string firstName, lastName;

    // start the loop that continues until 'q' is entered
    do {
        std::cout << "Welcome to the CSUSB Student Registration System\n";
        std::cout << "Select an option or 'q' to quit:\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Delete Student\n";
        std::cout << "3. Edit Student\n";
        std::cout << "4. Search Student\n";
        std::cout << "5. Display all Students\n";
        std::cout << "Enter your choice (1-5) or 'q' to quit: ";
        std::cin >> choice;

        if (choice == "1") {
            // adding all basic stuff
            std::cout << "Please fill out the following fields\n";
            std::cout << "Enter First Name: ";
            std::cin >> firstName;
            std::cout << "Enter Last Name: ";
            std::cin >> lastName;

            // add the student to the vector 
            studentDefault.addStudent(firstName, lastName); 
        } 
        else if (choice == "2") {
            
        } 
        else if (choice == "3") {
            
        } 
        else if (choice == "4") {
            
        }
        else if (choice == "5") {
            // Display all students in the vector
            studentDefault.printStudents();
        }
        else if (choice != "q") {
            std::cout << "Invalid option. Please choose between 1-5 or 'q' to quit.\n";
        }

    } while (choice != "q");  

   
    /*
    std::string firstName, lastName;
    std::cout << "Please enter First Name:\n";
    std::cin >> firstName;
    std::cout << "Please enter Last Name:\n";
    std::cin >> lastName;

    
    // still need to make menu but getting classes for add done
    
    student.addFirstName(firstName);
    */

    return 0; 

}

