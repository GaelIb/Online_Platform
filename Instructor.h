
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include "Profile.h"

class Instructor : public Profile {
private:
    std::string Speciality;
    int CoursesTaught;

public:
    Instructor();
    Instructor(std::string speciality, int coursesTaught);

    std::string getSpeciality() const;
    int getCoursesTaught() const;

    void setSpeciality(std::string speciality);
    void setCoursesTaught(int coursesTaught);

    std::string displayProfile() const;
    std::string displayProfile(bool fullInfo) const;
};

#endif
