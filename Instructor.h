
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
    Instructor(const std::string& username, const std::string& email, const std::string& speciality, int coursesTaught);

    std::string getSpeciality() const;
    int getCoursesTaught() const;

    void setSpeciality(std::string speciality);
    void setCoursesTaught(int coursesTaught);

    std::string displayProfile() const override;
    std::string displayProfile(bool fullInfo) const;
};

#endif
