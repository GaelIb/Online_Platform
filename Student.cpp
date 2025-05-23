#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() : User(), coursesEnrolled("") {}

Student::Student(string username, string email, string courses)
    : User(username, email), coursesEnrolled(courses) {}

string Student::getCoursesEnrolled() const {
    return coursesEnrolled;
}

void Student::setCoursesEnrolled(string courses) {
    coursesEnrolled = courses;
}

string Student::displayProfile() const{
    string profile = "--- Student Profile ---\n";
    profile += "Username: " + getUsername() + "\n";
    profile += "Email: " + getEmail() + "\n";
    profile += "Courses Enrolled: " + coursesEnrolled + "\n";
    return profile;
}
