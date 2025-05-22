#ifndef PROFILE_H
#define PROFILE_H

#include <string>

class Profile
{
protected:
    std::string username;
    std::string email;

public:
    Profile();
    Profile(std::string user, std::string mail);
    
    std::string getUsername();
    std::string getEmail();

    void setUsername(std::string user);
    void setEmail(std::string mail);

    std::string displayProfile();


};





#endif // PROFILE_H