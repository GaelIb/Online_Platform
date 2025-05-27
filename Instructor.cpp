#include "Instructor.h"
#include <iostream>

Instructor::Instructor() : Speciality("None"), CoursesTaught(0) {}

Instructor::Instructor(const std::string& username, const std::string& email, const std::string& speciality, int coursesTaught)
    : User(username, email), Speciality(speciality), CoursesTaught(coursesTaught) {}

std::string Instructor::getSpeciality() const {
    return Speciality;
}

int Instructor::getCoursesTaught() const {
    return CoursesTaught;
}

void Instructor::setSpeciality(std::string speciality) {
    Speciality = speciality;
}

void Instructor::setCoursesTaught(int coursesTaught) {
    CoursesTaught = coursesTaught;
}

std::string Instructor::displayProfile() const {
    return "--- Instructor Profile ---\nUsername: " + 
            getUsername() + "\nEmail: " + getEmail()  + "\n" +
           "Specialty: " + Speciality;
}

std::string Instructor::displayProfile(bool fullInfo) const {
    std::string profile = "--- Instructor Profile ---\nUsername: " + 
                        getUsername() + "\nEmail: " + getEmail()  + "\n" +
                          "Specialty: " + Speciality;
    if (fullInfo) {
        profile += "\nCourses Taught: " + std::to_string(CoursesTaught);
    }
    return profile;
}
