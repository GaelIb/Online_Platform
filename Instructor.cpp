#include "Instructor.h"
#include <sstream>

Instructor::Instructor() : Speciality(""), CoursesTaught(0) {}

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
    std::ostringstream oss;
    oss << "--- Instructor Profile ---\n";
    oss << "Username: " << getUsername() << "\n";
    oss << "Email: " << getEmail() << "\n";
    oss << "Specialty: " << Speciality;
    return oss.str();
}

std::string Instructor::displayProfile(bool fullInfo) const {
    std::ostringstream oss;
    oss << "--- Instructor Profile ---\n";
    oss << "Username: " << getUsername() << "\n";
    oss << "Email: " << getEmail() << "\n";
    oss << "Specialty: " << Speciality << "\n";
    if (fullInfo) {
        oss << "Courses Taught: " << CoursesTaught;
    }
    return oss.str();
}
