#ifndef USER_H
#define USER_H

#include <string>

class User
{
protected:
    std::string username;
    std::string email;

public:
    User();
    User(const std::string& _username, const std::string& _email);

    const std::string& getUsername() const;
    const std::string& getEmail() const;

    void setUsername(const std::string& _username);
    void setEmail(const std::string& _email);

    virtual std::string displayProfile() = 0; // Pure virtual function for displaying profile
};





#endif // USER_H