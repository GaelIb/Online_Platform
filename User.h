#ifndef USER_H
#define USER_H

#include <string>

class Profile
{
protected:
    std::string username;
    std::string email;

public:
    Profile();
    Profile(const std::string& _username, const std::string& _email);

    const std::string& getUsername() const;
    const std::string& getEmail() const;

    void setUsername(const std::string& _username);
    void setEmail(const std::string& _email);

    virtual std::string displayProfile() const;
};





#endif // PROFILE_H