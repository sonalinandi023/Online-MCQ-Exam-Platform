#include <iostream>
#include "login.h" // Include your login module header file
#include "student.h" // Include your student module header file
#include "teacher.h" // Include your teacher module header file
// #include "student.cpp" // Include your student module header file
// #include "teacher.cpp" // Include your teacher module header file

int main() {
    // Program initialization
    

    // Simulate user login
    UserRoles userRole = login(); // You need to define this function in your login module

    switch (userRole) {
        case UserRoles::STUDENT:
            // Redirect to student module
            std::cout << "Welcome, student!" << std::endl;
            studentModule(); // You need to define this function in your student module
            break;

        case UserRoles::TEACHER:
            // Redirect to teacher module
            std::cout << "Welcome, teacher!" << std::endl;
            teacherModule(); // You need to define this function in your teacher module
            break;

        default:
            std::cout << "Invalid user role." << std::endl;
            break;
    }

    return 0;
}
