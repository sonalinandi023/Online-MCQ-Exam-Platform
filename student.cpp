#include "student.h"
#include <iostream>

// Function to display the student menu
void studentMenu() {
    int choice;
    do {
        std::cout << "Student Menu" << std::endl;
        std::cout << "1. Choose a subject" << std::endl;
        std::cout << "2. Take an exam" << std::endl;
        std::cout << "3. View grades" << std::endl;
        std::cout << "4. Logout" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Implement logic to choose a subject
                std::cout << "Subject chosen." << std::endl;
                break;

            case 2:
                // Implement logic to take an exam
                std::cout << "Taking an exam." << std::endl;
                break;

            case 3:
                // Implement logic to view grades
                std::cout << "Viewing grades." << std::endl;
                break;

            case 4:
                std::cout << "Logging out." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Try again." << std::endl;
        }
    } while (choice != 4);
}

void studentModule() {
    std::cout << "Welcome to the Student Module" << std::endl;
    // Implement the logic for the Student module here
    studentMenu(); // Call the student menu
}
