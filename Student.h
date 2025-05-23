
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

#include "Profile.h"  // Incluye la clase base

class Student : public Profile {
private:
    string coursesEnrolled;

public:
    Student(); // Constructor por defecto
    Student(string username, string email, string courses); // Constructor sobrecargado

    string getCoursesEnrolled() const;
    void setCoursesEnrolled(string courses);

    virtual string displayProfile() const override; 
};
#endif

