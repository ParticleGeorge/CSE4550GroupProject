#include <iostream>
#include <vector>
#include <string>
#include "functions.h"

int main () {
    std::string choice;
    std::string innerChoice;  // change to string to allow 'q' input
    std::vector<Student> studentList;

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

        //
        //
        //
        //
        // WORKING here vvvvvv



        if (choice == "1") {
            // adding all basic stuff
            //do{ 
                addStudent(studentList);
            // } while (innerChoice != "b");  
        } 
        else if (choice == "2") {
           /*  do{
                //code
            } while (innerChoice != "b"); */
            
        } 
        else if (choice == "3") {
            
        } 
        else if (choice == "4") {
            
        }
        else if (choice == "5") {
            // sisplay all students in the vector
            displayAllStudents(studentList);
        }
        else if (choice != "q") {
            std::cout << "Invalid option. Please choose between 1-5 or 'q' to quit.\n";
        }

    } while (choice != "q");  

    return 0; 

}

