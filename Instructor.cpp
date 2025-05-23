#include "Instructor.h"
#include <iostream>

Instructor::Instructor() : Speciality("None"), CoursesTaught(0) {}

Instructor::Instructor(std::string speciality, int coursesTaught)
    : Speciality(speciality), CoursesTaught(coursesTaught) {}

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
    return "--- Instructor Profile ---\n" +
           Profile::displayProfile() + "\n" +
           "Specialty: " + Speciality;
}

std::string Instructor::displayProfile(bool fullInfo) const {
    std::string profile = "--- Instructor Profile ---\n" +
                          Profile::displayProfile() + "\n" +
                          "Specialty: " + Speciality;
    if (fullInfo) {
        profile += "\nCourses Taught: " + std::to_string(CoursesTaught);
    }
    return profile;
}
