
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include "User.h"

class Instructor : public User {
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

    virtual std::string displayProfile() const override;
    std::string displayProfile(bool fullInfo) const;
};

#endif
