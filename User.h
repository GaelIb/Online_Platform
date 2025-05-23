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
    User(const std::string& username, const std::string& email);

    const std::string& getUsername() const;
    const std::string& getEmail() const;

    void setUsername(const std::string& _username);
    void setEmail(const std::string& _email);

    virtual std::string displayProfile() const;
};





#endif // USER_H