#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "User.h"  // Incluye la clase base

using namespace std;

class Student : public User {
private:
    string coursesEnrolled;

public:
    Student(); // Constructor por defecto
    Student(string username, string email, string courses); // Constructor sobrecargado

    string getCoursesEnrolled() const;
    void setCoursesEnrolled(string courses);

    string displayProfile() const override; 
};

#endif

