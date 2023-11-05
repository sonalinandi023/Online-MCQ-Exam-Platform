// #include "login.h"
// #include <iostream>
// #include <string>

// UserRoles login() {
//     std::cout << "Welcome to the Login Module" << std::endl;

//     while (true) {
//         std::cout << "Please choose your role:" << std::endl;
//         std::cout << "1. Student" << std::endl;
//         std::cout << "2. Teacher" << std::endl;
//         std::cout << "Enter the corresponding number: ";
        
//         int choice;
//         std::cin >> choice;

//         if (choice == 1) {
//             std::cout << "Student login successful." << std::endl;
//             return UserRoles::STUDENT;
//         } else if (choice == 2) {
//             std::cout << "Teacher login successful." << std::endl;
//             return UserRoles::TEACHER;
//         } else {
//             std::cout << "Invalid choice. Please try again." << std::endl;
//         }
//     }

//     return UserRoles::INVALID; // Not reachable
// }


#include <iostream>

// Function prototypes
void studentMenu();
void teacherMenu();

enum class UserRoles { STUDENT, TEACHER };

UserRoles selectRole() {
    std::cout << "Are you a student or a teacher? (1 for student, 2 for teacher): ";
    int roleChoice;
    std::cin >> roleChoice;

    if (roleChoice == 1) {
        return UserRoles::STUDENT;
    } else if (roleChoice == 2) {
        return UserRoles::TEACHER;
    } else {
        std::cout << "Invalid choice." << std::endl;
        // You can add error handling or loop back to role selection here.
        return selectRole();
    }
}

void login() {
    UserRoles userRole = selectRole();

    std::cout << "Do you want to register or login? (1 for register, 2 for login): ";
    int actionChoice;
    std::cin >> actionChoice;

    if (actionChoice == 1) {
        // Registration logic
        if (userRole == UserRoles::STUDENT) {
            // Student registration
            std::cout << "Student registration logic goes here." << std::endl;
        } else if (userRole == UserRoles::TEACHER) {
            // Teacher registration
            std::cout << "Teacher registration logic goes here." << std::endl;
        }
    } else if (actionChoice == 2) {
        // Login logic
        std::string username, password;
        std::cout << "Enter your username: ";
        std::cin >> username;
        std::cout << "Enter your password: ";
        std::cin >> password;

        // Verify login credentials and perform redirection
        if (userRole == UserRoles::STUDENT) {
            // Verify student login and redirect
            if (/* Check student login credentials */) {
                std::cout << "Student login successful." << std::endl;
                studentMenu();
            } else {
                std::cout << "Invalid student login credentials." << std::endl;
            }
        } else if (userRole == UserRoles::TEACHER) {
            // Verify teacher login and redirect
            if (/* Check teacher login credentials */) {
                std::cout << "Teacher login successful." << std::endl;
                teacherMenu();
            } else {
                std::cout << "Invalid teacher login credentials." << std::endl;
            }
        }
    } else {
        std::cout << "Invalid choice." << std::endl;
    }
}
