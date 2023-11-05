#ifndef LOGIN_H
#define LOGIN_H

enum class UserRoles {
    STUDENT,
    TEACHER,
    INVALID
};

UserRoles login();

#endif // LOGIN_H
